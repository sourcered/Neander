#include "include/neander.h"

using namespace neander;

int main()
{
	std::string filename = "example.txt";
	// neander::Neander * n = new neander::Neander();
	// n->init(filename);
	// delete n;
	// n = nullptr;


	FileManager fileManager;
	std::map<std::string, cint::ui8> program;
	program = fileManager.getInstructions(filename);

	Log_::printMap(program);


	return 0;
}