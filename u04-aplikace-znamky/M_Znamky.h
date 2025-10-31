#pragma once

class M_Znamky
{
public:
    /// <summary>
    /// Metoda vyhodnotí počet známek v seznamu a určí počet známky 1–5.
    /// Výsledkem je pole s počty jednotlivých známek.
    /// </summary>
    /// <param name="znamky">Seznam známek</param>
    /// <param name="n">Počet známek</param>
    /// <returns>Pole se zjištěnými počty známek</returns>
    int* PocetZnamek(int* znamky, int n);
};
