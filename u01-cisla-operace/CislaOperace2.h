#pragma once
class CislaOperace2
{
public:
	CislaOperace2();
	~CislaOperace2();

	// spocita faktorial cisla (nerekurzivni metodou) 
	int faktorialNerek(int n);

	// spocita mocninu cisla (rekurzinivni metodou)
	int mocninaR(int c, int m);

	// spocita mocninu cisla (nerekurzivni metodou)
	int mocninaNerek(int c, int m);

	// zjisti pocet kladnych cisel v poli hodnot (celych cisel) o velikosti n
	int zjistiPocetKladnych(int *hodnoty, int n);
};

