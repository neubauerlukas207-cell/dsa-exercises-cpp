#include <iostream>
#include "M_Znamky.h"

using namespace std;

int main()
{
    M_Znamky mz;

    // Testovací data
    int znamky[] = { 1, 2, 1, 3, 2, 5, 4, 1, 3, 2 };
    int n = sizeof(znamky) / sizeof(znamky[0]);

    int* vysledky = mz.PocetZnamek(znamky, n);

    cout << "Vysledky poctu jednotlivych znamek:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Znamka " << (i + 1) << ": " << vysledky[i] << endl;
    }

    return 0;
}
