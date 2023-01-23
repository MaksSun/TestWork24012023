#pragma once
#include <chrono>

class SimpleTime
{
private:
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<double> duration;

public:
	void startTime();
	double getTime();
};