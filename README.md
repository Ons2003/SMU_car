# AutonomousCar
-----Welcome Note-----
This project is part of Autonomous Robot Research Program in South Mediterranean University.

Project lead : Ons Ouenniche - Computer Systems Engineering student.
Email : ons.ouenniche@medtech.tn 

$ THE FOLLOWING COMMANDS ARE MEANT TO LAUNCH PROGRAMS WITHIN THIS PROJECT 
    $TESTING NODE (logs : test): 
    ros2 launch test_node test_node_launch_file.launch.py

    $ROBOT full simulation 
    ros2 launch articubot_one launch_sim.launch.py 
    
    $ROBOT state publisher launch file
    ros2 launch articubot_one rsp.launch.py

    $ROBOT control using ros2_control ( creates control manager, publishes twist messages etc..)
    {run on raspberry pi}
    ros2 launch articubot_one launch_robot.launch.py 


Dependencies ( sudo apt install )
	 
	sudo apt install ros-humble-xacro ros-humble-joint-state-publisher  ros-humble-twist-mux ros-humble-ros2-control ros-humble-ros2-controllers  ros-humble-pluginlib ros-humble-controller-manager libserial-dev ros-humble-pluginlib ros-humble-slam-toolbox ros-humble-navigation2 ros-humble-turtlebot3-manipulation-navigation2 ros-humble-turtlebot3-navigation2 ros-humble-rviz2 ros-humble-gazebo-ros2-control ros-humble-gazebo-ros-pkgs ros-humble-gazebo-ros-pkgs python3-colcon-common-extensions

Modules dependencies : 
$ Files 
    $ DESCRIPTION 
        Robot_urdf : main urdf config file 
        lidar :  
	(still to be written)

MOTORS 
	(pi)ROS Driver node listening for motor speed on topic and sending them 
	(comp)ROS Contol node 

LIDAR 
	Package : yplidar_ros2 
	Launch file in project : rplidar.launch.py (edit params)
	COnfig file in ros2 package : params/ydlidar.yaml
	Get usb port path : (PLUG IN TO SAME PORT ) 
		$ ls dev/serial/by-id or by-path
	
	Control lidar using compt 
		$ ros2 service call 
		
RVIZ2
	lazerscan :
		scan topic 
		fixed frame : laser_frame 
		
  

$add   <exec_depend>visualization_msgs</exec_depend> 
TO ARTICUBOT_ONE all packages that it depends on 


TEST compt RASP com 
 (pi) ros2 run demo_nodes listener 
 (comp) ros2 run demo_nodes talker 
 
Remapping and parameters : 
	--ros-args [-p parameter] [-r remapping (:topic1:=topic2)]

on Raspberry PI 
	*install dependencies 
	*Check lidar and arduino connections and ports
	*Check pi voltage 
		$ vcgencmd get_throttled 
			if 0x5005 -> underc voltaged
			if 0X0 -> OK
	*Fix display manager 
		$journalctl -fe ( gives lightdm service failed)
		$systemctl get-default (graphical.target)
		$sudo systemctl set-default multi-user.target
	to switch back : $sudo systemctl set-default graphical.target
		$sudo reboot 
	*check ports
		$ls /dev/tty*

		
	*check installation progress (apt)
		sudo tail -f /var/log/apt/term.log

		

