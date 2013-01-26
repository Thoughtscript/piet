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

/** \file pconsole.cpp
 * \brief Plik z kodem źródłowym klasy PConsole
 *
 * Plik zawiera kod źródłowy klasy PConsole.
 */

/**
 * Konstruktor konsoli wejścia/wyjścia. Nie robi nic szczególnego.
 */
PConsole::PConsole()
{
	debug("CONSTRUCTOR ----- console START\n");
	verbose = false;
	debug("CONSTRUCTOR ----- console END\n");
}

/**
 * Destruktor konsoli wejścia/wyjścia. Nie robi nic szczególnego.
 */
PConsole::~PConsole()
{
	debug("DESTRUCTOR ----- console START\n");

	debug("DESTRUCTOR ----- console END\n");
}

/**
 * Ustala tryb gadatliwy.
 * @param verbosity tryb gadatliwy
 */
void PConsole::setVerbosity(bool verbosity)
{
	verbose = verbosity;
}

/**
 * Wyświetla liczbę na konsolę.
 * @param I liczba
 */
void PConsole::printNumber(int I)
{
	if (verbose)
		std::cout << "CONSOLE/out-number: ";
	std::cout << I;
	if (verbose)
		std::cout << std::endl;
}

/**
 * Wyświetla znak na konsolę.
 * @param I znak reprezentowany maszynowo przez liczbę
 */
void PConsole::printChar(int I)
{
	unsigned char UC = I;
	if (verbose)
		std::cout << "CONSOLE/out-char: ";
//	std::cout << std::setw(3) << UC;
	std::cout << UC;
	if (verbose)
		std::cout << " (" << I << ")" << std::endl;
}

/**
 * Wczytuje z koncoli liczbę.
 * @return wczytana liczba
 */
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

/**
 * Wczytuje z koncoli znak.
 * @return wczytany znak reprezentowany maszynowo przez liczbę
 */
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