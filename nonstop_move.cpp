#include <iostream>
#include <stdio.h>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <string>
#include "geometry_msgs/PoseStamped.h"
#include <stdlib.h>
#include <string.h>

geometry_msgs::PoseStamped goal_1;

void set_goal_1()
{
	goal_1.header.frame_id = "map";
	goal_1.pose.position.x = -5.04287147522;
	goal_1.pose.position.y = -2.87982487679;
	goal_1.pose.orientation.z = -0.0760460272659;
	goal_1.pose.orientation.w = 0.575642580428;
}

void set_goal_2()
{
	goal_1.header.frame_id = "map";
	goal_1.pose.position.x = -5.98811721802;
	goal_1.pose.position.y = -9.92835044861;
	goal_1.pose.orientation.z = 0.993669939395;
	goal_1.pose.orientation.w = 0.11233900277;
}

void set_goal_3()
{
	goal_1.header.frame_id = "map";
	goal_1.pose.position.x = -10.492931366;
	goal_1.pose.position.y = -8.95225334167;
	goal_1.pose.orientation.z = -0.104259362693;
	goal_1.pose.orientation.w = 0.99455014217;
}

void set_goal_4()
{
	goal_1.header.frame_id = "map";
	goal_1.pose.position.x = -5.98811721802;
	goal_1.pose.position.y = -9.92835044861;
	goal_1.pose.orientation.z = 0.993669939395;
	goal_1.pose.orientation.w = 0.11233900277;
}

void set_goal_5()
{
	goal_1.header.frame_id = "map";
	goal_1.pose.position.x = -4.85467720032;
	goal_1.pose.position.y = -2.40680408478;
	goal_1.pose.orientation.z = 0.994974349801;
	goal_1.pose.orientation.w = 0.100130131517;
}

void set_goal_6()
{
	goal_1.header.frame_id = "map";
	goal_1.pose.position.x = -9.3041601181;
	goal_1.pose.position.y = -1.73056411743;
	goal_1.pose.orientation.z = -0.0743069425757;
	goal_1.pose.orientation.w = 0.997235417685;
}

void set_goal_7()
{
	goal_1.header.frame_id = "map";
	goal_1.pose.position.x = -4.85467720032;
	goal_1.pose.position.y = -2.40680408478;
	goal_1.pose.orientation.z = 0.994974349801;
	goal_1.pose.orientation.w = 0.100130131517;
}

 
int main(int argc, char **argv)
{
  ros::init(argc, argv, "nonstop_move");

  ros::NodeHandle n;
	ros::Publisher goal_pub;
	ros::Rate loop_rate(0.1);

	goal_pub= n.advertise<geometry_msgs::PoseStamped>("/move_base_simple/goal", 1);
	
	while(ros::ok())
	{

		set_goal_1();
		goal_pub.publish(goal_1);
		ros::spinOnce();
		loop_rate.sleep();
		set_goal_2();
		goal_pub.publish(goal_1);
		ros::spinOnce();
		loop_rate.sleep();
		set_goal_3();
		goal_pub.publish(goal_1);
		ros::spinOnce();
		loop_rate.sleep();
		set_goal_4();
		goal_pub.publish(goal_1);
		ros::spinOnce();
		loop_rate.sleep();
		set_goal_5();
		goal_pub.publish(goal_1);
		ros::spinOnce();
		loop_rate.sleep();
		set_goal_6();
		goal_pub.publish(goal_1);
		ros::spinOnce();
		loop_rate.sleep();
		set_goal_7();
		goal_pub.publish(goal_1);
		ros::spinOnce();
		loop_rate.sleep();
	}

return 0;

}


