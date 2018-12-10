#include "golf.h"
#include <iostream>
#include <string>
#include <cstring>

void setGolf(golf &g, const char *name, int hc){
	if (name == nullptr || strlen(name) >= Len)
	{
		std::cout << "Error: wrong name, note that name length must be len < 40\n" << std::endl;
		return;
	}	
	g.handicap = hc;
	strcpy(g.fullName, name);
}

int setGolf(golf &g){
	std::string	name;
	std::string	handicap;
	int		handicap_digit = 0;

	std::cout << "Welcome to registration system." << std::endl;
	std::cout << "Please enter your credentials:" << std::endl;
	std::cout << "Enter name: ";
	std::getline(std::cin, name);
	if (name.length() >= Len)
	{
		std::cout << "Error: name to long, limit 40 characters.\n" << std::endl;
		return 0;
	}
	std::cout << "Enter handicap: ";
	std::getline(std::cin, handicap);
	std::cout << "Processing data..." << std::endl;
	if (handicap.empty()){
		std::cout << "Error: handicap wrong value.\n" << std::endl;
		return 0;
	}
	try {
		handicap_digit = std::stoi(handicap);
	}
	catch (const std::invalid_argument&) {
		std::cout << "Error: handicap must be a digit.\n" << std::endl;
		return 0;	
	}
	setGolf(g, name.c_str(), handicap_digit);
	std::cout << "Processing complete." << std::endl;
	if (name.length() == 0)
		return 0;
	return 1;
}
void handicap(golf &g, int hc){
	g.handicap = hc;
}

void showGolf(const golf &g) {
	std::cout << "Name: " << g.fullName << "| Handicap: " << g.handicap << std::endl;
}
