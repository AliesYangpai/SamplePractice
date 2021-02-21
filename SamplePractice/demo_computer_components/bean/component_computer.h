#pragma once
#include "component_base_computer.h"
class ComputerDell :public ComputerBase
{
public:
	~ComputerDell();
	ComputerDell(string name, string brand);
};
class ComputerLenovo :public ComputerBase
{
public:
	~ComputerLenovo();
	ComputerLenovo(string name, string brand);
};
class ComputerAlienware :public ComputerBase
{
public:
	~ComputerAlienware();
	ComputerAlienware(string name, string brand);
};