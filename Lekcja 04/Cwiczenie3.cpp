/*
*	Wyklad 4
*	Ćwiczenie 3
*	Napisz program, ktory pobiera liczbe zmiennoprzecinkowa, a nastepnie wyswietla ja w postaci ulamka dziesietnego i w zapisie wykladniczym.
*	Niech wyswietlany tekst wyglada nastepujaco:
*	a. Wpisano liczbe 21.3 lub 2.1e+001
*	b. Wpisano liczbe +21.290 lub 2.129e+001
*/


#include <iostream>


int main()
{
	float x;
	std::cin >> x;
	printf("Wypisano liczbe %f lub %e", x, x);
}


