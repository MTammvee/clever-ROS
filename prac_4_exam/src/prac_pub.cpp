#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

#include <sstream>
geometry_msgs::Twist twist;

int main(int argc, char **argv)
{

	ros::init(argc, argv, "prac_pub");
	ros::NodeHandle n;


	ros::Publisher prac_pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 1000);

	ros::Rate loop_rate(10);


	while (ros::ok())
	{

	
	twist.linear.x = 1;

	prac_pub.publish(twist);

	ros::spinOnce();


	}

	return 0;
}
