#include "Tree.h"
#include <algorithm>
#include "interface.h"

//CTree:


void CTree::printExpression() const
{
	root->inOrderWalkPrint();
	interface::print(emptyString); // newline
}




//CNode::


void CNode::inOrderWalkPrint() const
{
	if (this == NULL) { return; }
	interface::printSpace(value);
	children[0]->inOrderWalkPrint();
	children[1]->inOrderWalkPrint();

}



