//// includes

// header file
#include "pconsole.h"

// piet core
#include "../debug.h"
#include "penums.h"
#include "pstructs.h"

// C++
#include <iostream>
#include <iomanip>

// STL
// none

// Qt
// none

PConsole::PConsole(bool verbose_mode)
{
	debug("CONSTRUCTOR ----- console START\n");

	verbose = verbose_mode;

	debug("CONSTRUCTOR ----- console END\n");
}

PConsole::~PConsole()
{
	debug("DESTRUCTOR ----- console START\n");

	debug("DESTRUCTOR ----- console END\n");
}

void PConsole::printNumber(int I)
{
	if (verbose)
		std::cout << "CONSOLE/out-number: ";
	std::cout << I << std::endl;
}

void PConsole::printChar(int I)
{
	unsigned char UC = I;
	if (verbose)
		std::cout << "CONSOLE/out-char: ";
	std::cout << std::setw(3) << UC;
	if (verbose)
		std::cout << " (" << I << ")" << std::endl;
}

int PConsole::readNumber()
{
	int var;
	if (verbose) {
		std::cout << "CONSOLE/in-number: ";
	} else {
		std::cout << "? ";
	}
	std::cin >> var;
	return var;
}

int PConsole::readChar()
{
	char C;
	if (verbose) {
	std::cout << "CONSOLE/in-char: ";
	} else {
		std::cout << "? ";
	}
	std::cin >> C;
	int I = (int) C;
	return I;
}
