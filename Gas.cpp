/*****************************************
** File:    Gas.cpp
** Project: CMSC 202 Project 4, Spring 2024
** Author:  Richard Maliyetu
** Date:    4/06/24
** Section: 33
** E-mail:  r215@gl.umbc.edu 
** E-mail:  r215@umbc.edu 
**
** This file contains the implementation of the Gas class
** the Gas class is derived from the class Planet
** the file contains functions;
** To get the Create Planet of Gas Type
** more info in the project description.
***********************************************/

#include <iostream>
#include <string>
#include "Planet.h" // loads Planet.h file
#include "Gas.h" // loads Gas.h file
using namespace std;
 
 
  // Enemy
  // Creates a new Enemy planet
  Gas::Gas(string name, int challenge) : Planet::Planet(name, challenge){
    // intialized default contructor using inheritance 
  }


  // GetType
  // Returns the type of planet
  string Gas::GetType(){
    return "gas";
  }