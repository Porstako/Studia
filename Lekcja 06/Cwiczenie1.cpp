//Cwiczenie 1

#include <iostream>

using namespace std;

int main()
{
	char litera[26];
	for (int i=0; i < 26; i++)
	{
		litera[i] = 97 + i;
		cout << litera[i];
	}
	
	return 0;
}