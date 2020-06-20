#include <ros/ros.h>

#include "HectorMapperRos.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "hector_slam");

  HectorMapperRos sm;

  ros::spin();

  return(0);
}

