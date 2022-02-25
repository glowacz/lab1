#include <iostream>
using namespace std;
#include "ulamek.hpp"

void Ulamek::Wczytaj() {
	cout << "Podaj licznik: ";
	cin >> l;
	cout << "Podaj mianownik: ";
	cin >> m;
	while (m == 0) {
		cout << "Mianownik nie moze byc 0\nPodaj mianownik jeszcze raz: ";
		cin >> m;
	}
	//Skracanie();
}

void Ulamek::Wypisz() const {
	cout << l<<"/"<<m<<"\n";
}

void Ulamek::Skracanie() {
	int a = NWD(l, m);
	l /= a;
	m /= a;
}

int NWD(int l, int m) {
	int a = min(l, m), b = max(l, m);
	while (a != 0) {
		b = b % a;
		swap(a, b);
	}
	return b;
}

Ulamek operator + (Ulamek a, Ulamek b) {
	Ulamek c;

	c.l = a.l*b.m + b.l*a.m;
	c.m = a.m*b.m;
	c.Skracanie();

	return c;
}
