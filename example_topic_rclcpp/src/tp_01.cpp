#include "rclcpp/rclcpp.hpp"
#include "rmctrl_msgs/msg/gimbal.hpp"  // 替换为自定义消息的实际头文件路径

class GimbalSubscriber : public rclcpp::Node
{
public:
    GimbalSubscriber() : Node("gimbal_subscriber")
    {
        RCLCPP_INFO(this->get_logger(),"gimbal_msg_monitor node launching...");
        subscription_ = this->create_subscription<rmctrl_msgs::msg::Gimbal>(
            "/processor/gimbal", 10, std::bind(&GimbalSubscriber::topic_callback, this, std::placeholders::_1));
    }

private:
    void topic_callback(const rmctrl_msgs::msg::Gimbal::SharedPtr msg) const
    {
        RCLCPP_INFO(this->get_logger(), "Received - Yaw: %f, Pitch: %f", msg->yaw, msg->pitch);
    }

    rclcpp::Subscription<rmctrl_msgs::msg::Gimbal>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GimbalSubscriber>());
    rclcpp::shutdown();
    return 0;
}
