// Copyright 2022 Chen Jun
// Licensed under the MIT License.

#ifndef ARMOR_DETECTOR__DETECTOR_HPP_
#define ARMOR_DETECTOR__DETECTOR_HPP_

// OpenCV
#include <opencv2/core.hpp>
#include <opencv2/core/types.hpp>

// STD
#include <cmath>
#include <string>
#include <vector>

#include "armor_detector/armor.hpp"
#include "armor_detector/number_classifier.hpp"
#include "auto_aim_interfaces/msg/debug_armors.hpp"
#include "auto_aim_interfaces/msg/debug_lights.hpp"

namespace rm_auto_aim
{
class Detector
{
public:
  struct LightParams
  {
    // width / height
    double min_ratio;
    double max_ratio;
    // vertical angle
    double max_angle;
  };
  struct ArmorParams
  {
    double min_light_ratio;
    double min_small_center_distance;
    double max_small_center_distance;
    double min_large_center_distance;
    double max_large_center_distance;
    // horizontal angle
    double max_angle;
  };

  Detector( // 构造函数
    const int & init_min_l, const int & init_color, const LightParams & init_l,
    const ArmorParams & init_a);

  int min_lightness;
  int detect_color;
  LightParams l;
  ArmorParams a;

  std::unique_ptr<NumberClassifier> classifier; // 数字分类器    用于识别数字  识别数字的函数在这里

  // Debug msgs
  cv::Mat binary_img;   // 二值化图像
  auto_aim_interfaces::msg::DebugLights debug_lights;       // 用于显示灯条
  auto_aim_interfaces::msg::DebugArmors debug_armors;    // 用于显示装甲板 里面有数字

  std::vector<Armor> detect(const cv::Mat & input); // 检测函数 传入图像    返回装甲板   用于显示数字
  void drawResults(cv::Mat & img);  // 画出结果
  cv::Mat getAllNumbersImage(); // 用于显示数字

  cv::Mat preprocessImage(const cv::Mat & input);   // 预处理图像
  std::vector<Light> findLights(const cv::Mat & rbg_img, const cv::Mat & binary_img);   // 找灯条
  std::vector<Armor> matchLights(const std::vector<Light> & lights);

private:
  std::vector<Light> lights_;
  std::vector<Armor> armors_;

  bool isLight(const Light & light);    // 判断是否为灯条
  bool containLight(
    const Light & light_1, const Light & light_2, const std::vector<Light> & lights);
  bool isArmor(Armor & armor);  // 判断是否为装甲板
};

}  // namespace rm_auto_aim

#endif  // ARMOR_DETECTOR__DETECTOR_HPP_
