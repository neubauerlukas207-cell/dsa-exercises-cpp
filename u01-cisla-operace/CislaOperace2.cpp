#include "CislaOperace2.h"
#include <iostream>


CislaOperace2::CislaOperace2() { }

CislaOperace2::~CislaOperace2() { }

// ---

// ----------------------------------------------------------------
// Domaci ukol:

int CislaOperace2::faktorialNerek(int n)
{
	if (n < 0) return -1;
	int vysledek = 1;
	for (int i = 2; i <= n; ++i)
		vysledek *= i;
	return vysledek;
}

int CislaOperace2::mocninaR(int c, int m)
{
	if (m < 0) return -1;
	if (m == 0) return 1;
	return c * mocninaR(c, m - 1);
}

int CislaOperace2::mocninaNerek(int c, int m)
{
	if (m < 0) return -1;
	int vysledek = 1;
	for (int i = 0; i < m; ++i)
		vysledek *= c;
	return vysledek;
}

int CislaOperace2::zjistiPocetKladnych(int *hodnoty, int n)
{
	if (hodnoty == nullptr || n <= 0) return 0;
	int pocet = 0;
	for (int i = 0; i < n; ++i)
		if (hodnoty[i] > 0)
			pocet++;
	return pocet;
}