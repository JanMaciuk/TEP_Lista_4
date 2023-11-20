#include "Tree.h"
#include "Interface.h"

//CTree:





void CTree::printExpression() const
{
	root->inOrderWalkPrint();
	interface::print(emptyString); // newline
}

std::vector<std::string> CTree::getVars() const
{
	std::vector<std::string> accumulator;
	std::vector<std::string> vars = root->getVars(&accumulator);
	return vars;

}

double CTree::calculate(std::vector<double> values) const
{
	std::vector<std::string> accumulator;
	std::vector<std::string> vars = root->getVars(&accumulator);
	return CNode::calculate(root, vars, values);
}

std::vector<std::string> CTree::getExpression() const
{
	std::vector<std::string> accumulator;
	std::vector<std::string> expression = root->inOrderWalk(&accumulator);
	return expression;
}






CTree::~CTree() { root->deleteTree(); }



//CNode::


void CNode::inOrderWalkPrint() const
{
	if (this == NULL) { return; }
	interface::printSpace(value);
	children[0]->inOrderWalkPrint();
	children[1]->inOrderWalkPrint();

}








std::string CNode::errMsg = emptyString;







