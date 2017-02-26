#include "../include/filemanager.h"

namespace neander
{
	const std::list<std::string> FileManager::explode(const std::string & s, const char & c)
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

	std::string * FileManager::takeWords(std::string & str)
	{
		std::string * tmp = new std::string[2];
		std::string::size_type locate = str.find(' ');
		tmp[0] = str.substr(0, locate);
		if(locate != std::string::npos)
			tmp[1] = str.substr(locate);
		else tmp[1] = "0";
		// std::cout << tmp[0] << ": " << tmp[1] << std::endl;
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
		// for_it(it, lines) std::cout << *it << std::endl;
		return lines;
	}

	std::map<std::string, cint::ui8> FileManager::getInstructions(const std::string & filename)
	{
		std::map<std::string, cint::ui8> program;
		std::list<std::string> lines;
		
		std::string * str = new std::string[2];
			
		std::string key;
		int value;

		std::string tmp;

		lines = getLines(filename);
		for_it(it, lines)
		{
			str = takeWords(*it);
			key = str[0];
			value = std::stoi(str[1]);
			program[key] = value;
		}

		return program;	
	}

}