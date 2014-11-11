/* ----------------------------------------------------------------
   name:           Robot.cpp
   purpose:        implementation of the scenegraph construction
   version:	   SKELETON CODE
   TODO:           buildRobot
   author:         katrin lang
		   computer graphics
		   tu berlin
   ------------------------------------------------------------- */

#include "Robot.hpp"

// nodes of the scenegraph

// XXX: CURRENTLY ONLY TORSO. INSERT OTHER BODY PARTS HERE.
//      SEE EXAMPLE BINARY  cg1_ex1.exe (win32) and cg1_ex1_linux/cg1_ex1_mac.
//      EXPERIMENTATION IS ENCOURAGED. THE FINAL MODEL/SCENEGRAPH
//      NEED NOT BE IDENTICAL TO THE PROPOSED SOLUTION.

// XXX: EXTEND THE SCENEGRAPH i.e.
// Node *part1, *part2, *part3, etc...

// build the robot scenegraph
Node *buildRobot(){

  // torso attributes and initial position.
  // for parameters of constructor and their meanings,
  // see file node.h
  Node *torso= new Node(0, 0, 0,
			200, 300, 100,
			0, 0, 0,
			0, 0, 0);

  // XXX: implement more body/robot/whatever parts here

  // INSERT YOUR CODE HERE
    float arm_length = 50;
    float arm_height = 280;
    float arm_width = 100;
    float leg_length = 50;
    float leg_height = 300;
    float leg_width = 100;

    Node *head = new Node(0, 250 , 0,
                        120, 100, 100,
                        0, -75, 0,
                        0, 0, 0);

    Node *leftArm = new Node(175, 10, 0,
                            arm_length, arm_height, arm_width,
                            -50, arm_height/2 ,0,
                            0, 0, 0);

    Node *rightArm = new Node(-175, 10, 0,
                            arm_length, arm_height, arm_width,
                            50, arm_height/2 ,0,
                            0, 0, 0);

    Node *leftLeg = new Node(75, -350, 0,
                            leg_length, leg_height, leg_width,
                            0, leg_height/2 + 25, 0,
                            0, 0, 0);

    Node *rightLeg = new Node(-75, -350, 0,
                            leg_length, leg_height, leg_width,
                            0, leg_height/2 + 25, 0,
                            0, 0, 0);

  // END XXX

  // finally, attach the robot/model parts
  // example: leftArm->setParent(torso), etc...
  // BUILD THE SCENEGRAPH

  // XXX: attach body parts here

  // INSERT YOUR CODE HERE

  head->setParent(torso);
  leftArm->setParent(torso);
  rightArm->setParent(torso);
  leftLeg->setParent(torso);
  rightLeg->setParent(torso);

  // END XXX

  // return root node
  return torso;
}
