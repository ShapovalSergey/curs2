#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
//#include <vector>
#include <iostream>



 class patient
{

private:
	std::string name;
	std::string surname;
	std::string otch;
	int age;
	bool sex;
	int height;
	int weight;
	int day_of_birth;
	int month_of_birth;
	int year_of_birth;
public:
	patient();
	patient(std::string name, std::string surname, std::string otch, int age, bool sex, int height, int weight, int day_of_birth,int month_of_birth, int year_of_birth) 
	{
		this->name = name;
		this->surname = surname;
		this->otch = otch;
		this->age = age;
		this->sex = sex;
		this->height = height;
		this->weight = weight;
		this->day_of_birth = day_of_birth;
		this->month_of_birth = month_of_birth;
		this->year_of_birth = year_of_birth;
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
	void change_sex(bool sex) 
	{
		this->sex = sex;
	};
	void change_age(int age) 
	{
		this->age = age;
	};
	void change_height(int height)
	{
		this->height = height;
	};
	void change_weight(int weight)
	{
		this->weight = weight;
	};
	void change_day_of_birth(int day_of_birth)
	{
		this->day_of_birth = day_of_birth;
	};
	void change_month_of_birth(int month_of_birth)
	{
		this->month_of_birth = month_of_birth;
	};
	void change_year_of_birth(int year_of_birth)
	{
		this->year_of_birth = year_of_birth;
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
	bool return_sex() 
	{
		return sex;
	};
	int return_age() 
	{
		return age;
	};
	int return_weight()
	{
		return weight;
	};
	int return_height()
	{
		return height;
	};
	int return_day_of_birth()
	{
		return day_of_birth;
	};
	int return_month_of_birth()
	{
		return month_of_birth;
	};
	int return_year_of_birth()
	{
		return year_of_birth;
	};
};

