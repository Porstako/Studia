//Cwiczenie 5
//Nie wiem czy o taka tabele chodzilo, ale tylko takie cos przyszlo mi do glowy
#include <iostream>

using namespace std;

int main()
{
	int min, max;
	cin >> min >> max;
	for (int i=min;i<=max;i++) cout << i << " | " << i * i << " | " << i * i * i<<"\n___________________________________________\n";
	return 0;
}