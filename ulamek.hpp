         
struct Ulamek
{
	int l, m;
	// tutaj zdefiniuj zawarto�� klasy (wszystkie pola i sk�adowe o zakresie public)
	void Wczytaj();
	void Wypisz() const;
	void Skracanie();
};


// zdefiniuj prototyp funkcji NWD
int NWD(int l, int m);

// zdefiniuj prototyp operatora dodawania
Ulamek operator + (Ulamek a, Ulamek b);

