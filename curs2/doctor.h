#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <vector>
#include <iostream>

class doctor
{
private:
	std::string name;
	std::string surname;
	std::string otch;
	std::string speciality;


public:
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
	void change_speciality(std::string speciality)
	{
		this->speciality = speciality;
	};
	std::string return_name()
	{
		return name;
	};
	std::string return_surname()
	{
		return surname;
	};
	std::string return_otch()
	{
		return otch;
	};
	std::string return_speciality()
	{
		return speciality;
	};

};

