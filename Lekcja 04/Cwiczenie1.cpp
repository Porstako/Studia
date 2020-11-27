/*
*	Wyklad 4
*	Ćwiczenie 1
*	Napisz program ktory pyta o Twoje imie, a nastepnie o nazwisko, po czym wyswietla je w ukladzie Nazwisko, Imie
*/


#include <iostream>

int main()
{
	std::string imie;
	std::string nazwisko;
	std::cout << "Podaj imie:\n";
	std::cin >> imie;
	std::cout << "Podaj nazwisko:\n";
	std::cin >> nazwisko;

	//Podniesienie pierwszej litery imienia i nazwiska do duzej litery
	if (imie[0] > 90) imie[0] -= 32;
	if (nazwisko[0] > 90) nazwisko[0] -= 32;


	std::cout<< nazwisko << " " << imie;
}
