#include "SimpleTime.h"

void SimpleTime::startTime()
{
	this->start = std::chrono::high_resolution_clock::now();
}

double SimpleTime::getTime()
{
	this->end = std::chrono::high_resolution_clock::now();
	this->duration = this->end - this->start;
	return this->duration.count();
}