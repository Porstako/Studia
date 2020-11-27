/*
*	Wyklad 4
*	Ćwiczenie 5
*	Napisz program, ktory pobiera imie i nazwisko uzytkownika, po czym wyswietla:
*	w pierwszym wierszu imie i nazwisko, a w drugim liczbe liter w imieniu i nazwisku.
*	Kazda z liczb powinna znajdowac sie pod ostatnia litera odpowiadajacego jej znaku tak jak ponizej
* 
*	Anne Kleine-Nachtmusik
*	   4                17
*	
*	Nastepnie zmien program tak, aby liczby byly zrownane z pierwszymi literami imienia i nazwiska:
*	
*	Anne Kleine-Nachtmusik
*	4    17
*/

#include <iostream>
#include <string>

void liczbyPrawo(int dlugoscImienia, int dlugoscNazwiska)
{
	using namespace std;
	if (dlugoscImienia > 9) for (int i = dlugoscImienia-2; i > 0; i--) cout <<' ';
	else for (int i = dlugoscImienia - 1; i > 0; i--) cout << ' ';
	cout << dlugoscImienia<<' ';
	if (dlugoscNazwiska > 9) for (int i = dlugoscNazwiska-2 ; i > 0; i--) cout << ' ';
	else for (int i = dlugoscNazwiska - 1; i > 0; i--) cout << ' ';
	cout << dlugoscNazwiska;
}

void liczbyLewo(int dlugoscImienia, int dlugoscNazwiska)
{
	using namespace std;
	cout << dlugoscImienia;
	if (dlugoscImienia > 9) for (int i = dlugoscImienia - 2; i > 0; i--) cout << ' ';
	else for (int i = dlugoscImienia - 1; i > 0; i--) cout << ' ';
	cout << ' ' << dlugoscNazwiska;
	if (dlugoscNazwiska > 9) for (int i = dlugoscNazwiska - 2; i > 0; i--) cout << ' ';
	else for (int i = dlugoscNazwiska - 1; i > 0; i--) cout << ' ';
}

int main()
{
	std::string imie, nazwisko;
	std::cin >> imie >> nazwisko;
	std::cout << imie << " " << nazwisko<<"\n";
	
	liczbyPrawo(imie.length(),nazwisko.length());
	std::cout << "\n\n" << imie << " " << nazwisko << "\n";;
	liczbyLewo(imie.length(),nazwisko.length());
}


