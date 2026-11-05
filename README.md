# Datové struktury a algoritmy – cvičení (C++)

Domácí úkoly z předmětu **Datové struktury a algoritmy** (VŠPJ, ZS 2025/26). Větší semestrální práce je zvlášť v repozitáři [vehicle-registry-cpp](../../../vehicle-registry-cpp).

| Složka | Obsah |
|---|---|
| `u01-cisla-operace` | třída `CislaOperace2`: faktoriál a mocnina rekurzivně i iterativně, testovací protokol |
| `u02-cisla-operace` | porovnání rekurzivních a nerekurzivních implementací |
| `u04-aplikace-znamky` | modul `M_Znamky` – četnosti známek, průměr, vyhodnocení (oddělení logiky od UI) |
| `u05-linked-list` | vlastní jednosměrný spojový seznam (vkládání, mazání, výpis) |
| `u06-vyhledavani` | implementace `IndexOf` – sekvenční vyhledávání v poli / řetězci |

## Technologie

C++ · Visual Studio / g++

## Jak spustit

Každá složka je samostatný program, např.:

```bash
g++ -std=c++17 u05-linked-list/LinkedList.cpp -o linked-list
./linked-list
```

U vícesouborových úkolů přeložte všechny `.cpp` ve složce:

```bash
g++ -std=c++17 u04-aplikace-znamky/*.cpp -o znamky
```

---
*Školní úkoly – každý commit odpovídá jednomu odevzdání v Moodlu (s původním datem).*
