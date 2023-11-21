#include <iostream>
#include "Interface.h"
#include "Tree.h"

int main()
{
    std::cout << "Hello World!\n";
    bool running = true;
    CTree* tree = NULL;
    while (running)
    {
        vector<string> command = interface<int>::getUserInput();
        running = interface<int>::handleCommand(command, &tree);

    }
    return 0;
}
