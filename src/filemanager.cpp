#include "../include/filemanager.h"

namespace neander
{
	const std::list<string> FileManager::explode(const string & s, const char & c)
	{
		std::string buff{""};
		std::list<std::string> v;
		
		for(auto n : s)
		{
			if(n != c) buff+=n; 
			else if(n == c && buff != "") 
			{ 
				v.push_back(buff); 
				buff = ""; 
			}
		}
		if(buff != "") v.push_back(buff);
		
		return v;
	}

	std::string * FileManager::takeFirstWord(std::string & str)
	{
		std::string * tmp = new std::string[2];
		size_t locate = str.find(' ');
		tmp[0] = str.substr(0, locate);
		tmp[1] = str.substr(0, locate);
		return tmp;
	}

	std::list<std::string> FileManager::getLines(const std::string & filename)
	{
		std::list<std::string> lines;
		std::string str;
		std::ifstream ifile;

		ifile.open(filename);
		while(getline(ifile, str))
			lines.push_back(str);
		ifile.close();
		
		return lines;
	}

	std::map<std::string, cint::i8> FileManager::getInstructions(const std::string & filename)
	{
		std::map<std::string, cint::i8> program;
		std::list<std::string> lines;
		cin::i8 value;
		std::string str;
		
		lines = getLines(filename);
		for_it(it, lines)
		{
			//Each line does a split
			str = *it //split it, takes first
			str = takeFirstWord(str);
			value takeSecondWord;
		}

		return program;	
	}
}