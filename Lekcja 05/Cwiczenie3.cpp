//Cwiczenie 3

#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	cout << x / 7;
	if (x / 7 == 1) cout <<" Tydzien ";
	else if (x/7>=2 && x/7<=4) cout <<" Tygodnie ";
	else cout << " Tygodni ";
	if (x % 7 != 0)
	{
		cout <<"i "<< x % 7;
		if (x % 7 == 1)cout << " dzien";
		else cout << " dni";
	}


	return 0;
}