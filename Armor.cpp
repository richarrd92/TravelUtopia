/*****************************************
** File:    Armor.cpp
** Project: CMSC 202 Project 4, Spring 2024
** Author:  Richard Maliyetu
** Date:    4/06/24
** Section: 33
** E-mail:  r215@gl.umbc.edu 
** E-mail:  r215@umbc.edu 
**
** This file contains the implementation of the Armor class
** the Armor class is derived from the class Item
** the file contains functions;
** To get the Armor name and value
** more info in the project description.
***********************************************/

#include <iostream>
#include <string>
#include "Item.h" // loads item.h file
#include "Armor.h" // loads Armor.h file
using namespace std;

  // Armor
  // Creates a new Armor item
  Armor::Armor(string name, string type, int value) : Item::Item(name, type, value){
    // intialized default contructor using inheritance 
  }

  // Display
  // Displays ARMOR, name, and value of armor
  void Armor::Display(){
    // const string ARMOR 
    cout << ARMOR << GetName() << "(" << GetValue() << ")" <<endl;
  }