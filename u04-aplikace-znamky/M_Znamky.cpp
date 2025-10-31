#include "M_Znamky.h"

int* M_Znamky::PocetZnamek(int* znamky, int n)
{
    // Použita metoda: SEKVENČNÍ (LINEÁRNÍ) PROHLEDÁVÁNÍ
    // Pole se prochází postupně od začátku do konce a sčítá výskyty známek 1–5.

    static int pocet[5] = { 0, 0, 0, 0, 0 }; // [0] -> známka 1, [1] -> známka 2, ...

    // vynulování pole
    for (int i = 0; i < 5; i++)
        pocet[i] = 0;

    // projití všech známek a přičtení k příslušné hodnotě
    for (int i = 0; i < n; i++)
    {
        int z = znamky[i];
        if (z >= 1 && z <= 5)
            pocet[z - 1]++;
    }

    return pocet;
}
