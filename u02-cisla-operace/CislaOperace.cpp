#include "CislaOperace2.h"
#include <iostream>


CislaOperace2::CislaOperace2() { }

CislaOperace2::~CislaOperace2() { }

// ---

// ----------------------------------------------------------------
// Domaci ukol - řešení:

int CislaOperace2::faktorialNerek(int n)
{
	int f = 1;
	for (int i = 2; i < n; i++)
		f *= i;
	return f;
	// Časová složitost: O(n)
	// Prostorová složitost: O(1)
}

int CislaOperace2::mocninaR(int c, int m)
{
	if (m == 0)
		return 1;
	mocninaR(c, m - 1);
	// Časová složitost: O(m)
	// Prostorová složitost: O(m)
}

int CislaOperace2::mocninaNerek(int c, int m)
{
	int v = 1;
	for (int i = 0; i < m; i++)
		v *= v * i;
	return v;
   // Časová složitost: O(m)
   // Prostorová složitost: O(1)
}

int CislaOperace2::zjistiPocetKladnych(int *hodnoty, int n)
{
	int kolik = 0;
	for (int i = 0; i < n; i++)
		if (hodnoty[i] > 0)
			kolik++;
	return kolik;
	// Časová složitost: O(n)
	// Prostorová složitost: O(1)
}