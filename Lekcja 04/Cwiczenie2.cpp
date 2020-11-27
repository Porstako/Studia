/*
*	Wyklad 4
*	Ćwiczenie 2
*	Napisz program, ktory pyta o Twoje imie, a nastepnie:
*	a. wyswietla je w cudzyslowie.
*	b. wyswietla je w polu o szerokosci 20 znakow; w cudzyslow powinno byc ujete cale pole.
*	c. wyswietla je przy lewym brzegu pola o szerokosci 20 znakow; w cudzyslow powinno byc ujete cale pole.
*	d. wyswietla je w polu o trzy znaki dluzszym niz imie;
*/


#include <iostream>
#include <string>

void cudzyslow(std::string s)
{
	std::cout << "a. \"" << s << "\"\n";
}

void pole20(std::string s)
{
	std::cout << "b. \"";
	for (int i = 20 - s.length(); i >= 0; i--) std::cout << " ";
	std::cout << s << "\"\n";
}

void pole20Lewo(std::string s)
{
	
	std::cout << "c. \"" << s;
	for (int i = 20 - s.length(); i >= 0; i--) std::cout << ' ';
	std::cout << "\"\n";
}

void trzyZnaki(std::string s)
{
	std::cout << "d.   " << s << "\n";
}


int main()
{
	std::string imie;
	std::cout << "Podaj imie:\n";
	std::cin >> imie;

	//Podniesienie pierwszej litery imienia do duzej litery
	if (imie[0] > 90) imie[0] -= 32;

	
	cudzyslow(imie);
	pole20(imie);
	pole20Lewo(imie);
	trzyZnaki(imie);
	return 0;
}


