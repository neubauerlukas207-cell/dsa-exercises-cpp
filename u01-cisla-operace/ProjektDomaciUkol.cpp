// ProjektDomaciUkol.cpp
//

#include <iostream>
#include "CislaOperace2.h"
using namespace std;

int main()
{
    CislaOperace2 o;

    cout << "Faktorial(5): " << o.faktorialNerek(5) << endl;
    cout << "MocninaR(2,4): " << o.mocninaR(2, 4) << endl;
    cout << "MocninaNerek(2,4): " << o.mocninaNerek(2, 4) << endl;

    int pole[] = { 1, -3, 5, 0, 8, -2 };
    cout << "Pocet kladnych: " << o.zjistiPocetKladnych(pole, 6) << endl;

    return 0;
}

