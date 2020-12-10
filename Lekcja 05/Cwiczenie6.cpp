//Cwiczenie 6

#include <iostream>

using namespace std;

float cube(float x)
{
	return x * x * x;
}

int main()
{
	float x=0;
	cin >> x;
	cout << cube(x);
	return 0;
}