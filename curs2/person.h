#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
 class person
{
private:
	std::string name;
	std::string surname;
	std::string otch;
protected:
	person();
public:
	person(std::string name, std::string surname, std::string otch) 
	{
		this->name = name;
		this->surname = surname;
		this->otch = otch;
	};
	void change_name(std::string name)
	{
		this->name = name;
	};
	void change_surname(std::string surname)
	{
		this->surname = surname;
	};
	void change_otch(std::string otch)
	{
		this->otch = otch;
	};

};

