/*****************************************
** File:    Engine.cpp
** Project: CMSC 202 Project 4, Spring 2024
** Author:  Richard Maliyetu
** Date:    4/06/24
** Section: 33
** E-mail:  r215@gl.umbc.edu 
** E-mail:  r215@umbc.edu 
**
** This file contains the implementation of the Engine class
** the Engine class is derived from the class Item
** the file contains functions;
** To get the Engine name and value
** more info in the project description.
***********************************************/

#include <iostream>
#include <string>
#include "Item.h" // loads item.h file
#include "Engine.h" // loads Engine.h file
using namespace std;

  // Engine
  // Creates a new Engine item
  Engine::Engine(string name, string type, int value) : Item::Item(name, type, value){
    // intialized default contructor using inheritance 
  }

  // Display
  // Displays Engine, name, and value of Engine
  void Engine::Display(){
    // const string ENGINE 
    cout << ENGINE << GetName() << "(" << GetValue() << ")" <<endl;
  }