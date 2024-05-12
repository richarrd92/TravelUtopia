/*****************************************
** File:    Item.cpp
** Project: CMSC 202 Project 4, Spring 2024
** Author:  Richard Maliyetu
** Date:    4/06/24
** Section: 33
** E-mail:  r215@gl.umbc.edu 
** E-mail:  r215@umbc.edu 
**
** This file contains the implementation of the Item class
** the Item class is the parent class of classes Engine, Weapons, and Armor
** the file contains functions;
** To get the Item name, type and value
** more info in the project description.
***********************************************/

#include <iostream>
#include <string>
#include "Item.h" // loads item.h file
using namespace std;

  // Item
  // Creates a new item of a specific type 
  Item::Item(string name, string type, int value){
    m_name = name; 
    m_type = type; 
    m_value = value; 
  }

  // ~Item 
  // Required because child classes exist
  Item::~Item(){
    // left empty on purpose
  }

  // GetType
  // Returns the type of item
  string Item::GetType(){
    return m_type;
  }

  // GetName
  // Returns the name of item
  string Item::GetName(){
    return m_name;
  }

  // GetValue
  // Returns value of item
  int Item::GetValue(){
    return m_value;
  }

