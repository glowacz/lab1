#include <iostream>
using namespace std;
#include "ulamek.hpp"
    
int main()
{
	Ulamek a, b;
	a.Wczytaj();
	b.Wczytaj();
	
	a.Skracanie();
	a.Wypisz();
	b.Skracanie();
	b.Wypisz();
	
	(a + b).Wypisz();
	
}