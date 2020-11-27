/*
*	Wyklad 4
*	Ćwiczenie 4
*	Napisz program, ktory pobiera twoj wzrost w centymetrach oraz twoje imie, a nastepnie wyswietla te dane w nastepujacej postaci:
*	Robert, masz 1.82 metra wzrostu.
*/

#include <iostream>

int main()
{
	float wzrost;
	std::string imie;
	std::cin >> wzrost >> imie;
	std::cout << imie << ", masz " << wzrost / 100 << " metra wzrostu.\n";
}
