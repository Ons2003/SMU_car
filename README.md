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

Modules dependencies : 
    
$ Files 
    $ DESCRIPTION 
        Robot_urdf : main urdf config file 
        lidar :  

