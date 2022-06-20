#pragma once
#include <string>

std::string getTime(); // get hours, minuts, seconds
std::string getDate(); // get year, month, day

void clog(std::string type, std::string logMsg); // write in file