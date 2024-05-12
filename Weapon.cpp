/*****************************************
** File:    Weapon.cpp
** Project: CMSC 202 Project 4, Spring 2024
** Author:  Richard Maliyetu
** Date:    4/06/24
** Section: 33
** E-mail:  r215@gl.umbc.edu 
** E-mail:  r215@umbc.edu 
**
** This file contains the implementation of the Weapon class
** the Weapon class is derived from the class Item
** the file contains functions;
** To get the Weapon name and value
** more info in the project description.
***********************************************/

#include <iostream>
#include <string>
#include "Item.h" // loads item.h file
#include "Weapon.h" // loads Weapon.h file
using namespace std;

  // Weapon
  // Creates a new Weapon item
  Weapon::Weapon(string name, string type, int value) : Item::Item(name, type, value){
    // intialized default contructor using inheritance 
  }

  // Display
  // Displays Weapon, name, and value of Weapon
  void Weapon::Display(){
    // const string WEAPON 
    cout << WEAPON << GetName() << "(" << GetValue() << ")" <<endl;
  }