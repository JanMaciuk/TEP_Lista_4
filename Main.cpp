#include <iostream>
#include "Interface.h"
#include "Tree.h"


string CNode::errMsg = emptyString;


int main()
{
    std::cout << chooseType << std::endl;
    string consoleInput;
    std::getline(cin, consoleInput);
	if (consoleInput == "1") { interface<int>::run(); }
	else if (consoleInput == "2"){ interface<double>::run(); }
	else if (consoleInput == "3") { interface<std::string>::run(); }
	
	return 0;
}


