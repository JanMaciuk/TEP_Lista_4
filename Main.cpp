#include <iostream>
#include "Interface.h"
#include "Tree.h"

const std::string chooseType = "Choose type of tree:\n1. Integer\n2. Double\n3. String\n any other input to leave the program ";

void runInt()
{
    bool running = true;
    CTree<int>* tree = NULL;
    while (running)
    {
        vector<string> command = interface::getUserInput();
        running = interface::handleCommand(command, &tree);
    }


}
void runDouble() {} //TODO
void runString() {} //TODO

int main()
{
    std::cout << chooseType << std::endl;
    string consoleInput;
    std::getline(cin, consoleInput);
	if (consoleInput == "1") { runInt(); }
	else if (consoleInput == "2"){ runDouble(); }
	else if (consoleInput == "3") { runString();}
	
	return 0;
}


