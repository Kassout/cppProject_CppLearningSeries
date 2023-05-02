#include <iostream>
#include "Log.h"
#include "Common.h"

#ifndef _LOG_H
#define _LOG_H

void Log(const char* message);
void InitLog();

struct Player {};

#endif

void InitLog()
{
	Log("Initialize Log");
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}
