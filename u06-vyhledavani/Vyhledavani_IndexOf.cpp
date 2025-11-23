// Vyhledavani_IndexOf.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

// test na serazenou posloupnost
bool test_sorted(int* seznam, int n);

// najde pozici prvniho vyskytu hodnoty v seznamu
int indexOf(int* seznam, int n, int hledame);

// najde posledni pozici vyskytu hodnoty v seznamu
int lastIndexOf(int* seznam, int n, int hledame);

// -----

bool test_sorted(int* seznam, int n)
{
    bool sorted = true;
    int i = 0;
    while (i < n - 1 && sorted == true)
    {
        if (!(seznam[i] < seznam[i + 1]))
            sorted = false;
        i++;
    }

    return sorted;
}

int indexOf(int* seznam, int n, int hledame)
{
    int kde = -1;
    int i = 0;
    while ((i < n) && (kde == -1)) //for (int i = 0; i < N; i++)
    {
        if (seznam[i] == hledame)
            kde = i;
        i++;
    }

    return kde;
}

int lastIndexOf(int* seznam, int n, int hledame)
{
    int kde = -1;
    int i = n - 1;

    while (i >= 0 && kde == -1)
    {
        if (seznam[i] == hledame)
            kde = i;
        i--;
    }

    return kde;
}


int main()
{
 int N = 7;
 int cisla[] = { 4, 5, 7, 6, 1, 5, 2 };

  std::cout << "Test 1 – uprostred (hledame 5): "
    << lastIndexOf(cisla, N, 5) << std::endl;

  std::cout << "Test 2 – zacatek (hledame 4): "
    << lastIndexOf(cisla, N, 4) << std::endl;

  std::cout << "Test 3 – konec (hledame 2): "
    << lastIndexOf(cisla, N, 2) << std::endl;

  return 0;
}
       

