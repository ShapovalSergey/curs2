#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
//#include <vector>
#include <iostream>
#include "person.h"

class doctor:public person 
{
private:
	std::string speciality;
public:
	doctor();
	doctor(std::string name, std::string surname, std::string otch, std::string speciality) 
	{
		person(name,surname,otch);
		this->speciality = speciality;
	};
	void change_speciality(std::string speciality)
	{
		this->speciality = speciality;
	};
	std::string return_speciality()
	{
		return speciality;
	};
};

