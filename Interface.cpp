#include "Interface.h"




template <>  void interface<int>::run()
{
    bool running = true;
    CTree<int>* tree = NULL;
    while (running)
    {
        vector<string> command = interface<int>::getUserInput();
        running = interface<int>::handleCommand(command, &tree);
    }
};

template <>  void interface<double>::run()
{
    return; //todo - implement
};

template <>  void interface<string>::run()
{
	return; //todo - implement
};




