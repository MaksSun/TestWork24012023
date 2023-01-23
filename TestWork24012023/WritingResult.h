#pragma once
#include <iomanip>
#include <fstream>

bool gFlagOpenFile = false;

//@return void
void writeInFaile(std::string path, size_t numberTest, size_t sizeMassive, size_t sizeTreads, double duration, std::string nameMethodeSort, bool isSorted)
{
	std::ofstream out(path, std::ios::app);

	if (!gFlagOpenFile)
	{
		gFlagOpenFile = true;

		out
			<< std::left
			<< std::setw(15) << "Number Test:"
			<< std::setw(15) << "Size massive:"
			<< std::setw(15) << "Sum Treads"
			<< std::setw(15) << "Time (sec):"
			<< std::setw(25) << "Name methode"
			<< std::setw(10) << "Is equal?" << std::endl;
	}

	if (out.is_open())
	{
		out
			<< std::left
			<< std::setw(15) << numberTest
			<< std::setw(15) << sizeMassive
			<< std::setw(15) << sizeTreads
			<< std::setw(15) << duration
			<< std::setw(25) << nameMethodeSort
			<< std::setw(10) << isSorted
			<< std::endl;
	}
}