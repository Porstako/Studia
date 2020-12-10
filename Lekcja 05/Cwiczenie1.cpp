//Cwiczenie 1

#include <iostream>
#define godzina 60
using namespace std;

int main()
{
	int minuty=0, godziny=0;
	cin >> minuty;
	while (minuty > godzina)
	{
		godziny++;
		minuty -= 60;
	}
	cout << godziny << " Godzin i " << minuty << " Minut\n";
	return 0;
}