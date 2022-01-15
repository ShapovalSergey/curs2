#pragma once
#include <string.h>
#include <iostream>
class ISaveOpros
{
public:
	virtual void saveopros(std::string doc,std::string pat) = 0;
};

