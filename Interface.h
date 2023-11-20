#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Tree.h"
using namespace std;

const string command_exit = "exit";
const string command_quit = "quit";
const string command_listVars = "vars";
const string command_printTree = "print";
const string command_calculate = "comp";
const string command_addTree = "join";





namespace interface 
{
	vector<string> getUserInput(); // Get user input from console and split it into vector of strings
	inline void print(const string& message) { cout << message << endl; }; // Print to console
	inline void print(const double& message) { cout << message << endl; }; // Print to console
	inline void printSpace(const string& message) { cout << message << " "; }; // Print to console
	void print(const vector<string> message); // Print to console)
	vector<string> splitBySpace(const string& input); // Split string into a vector
	bool handleCommand(const vector<string>& command, CTree<int>** tree); // Call methods based on user command, false if exit
	bool treeIsInitialized(CTree<int>** tree); // Check if tree is initialized
}