#include "include/neander.h"

int main()
{
	std::string filename = "programa1.txt";
	neander::Neander * n = new neander::Neander();
	n->init(filename);
	delete n;
	n = nullptr;
	return 0;
}