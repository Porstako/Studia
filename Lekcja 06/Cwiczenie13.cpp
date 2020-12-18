//Cwiczenie 13

#include <iostream>
#include <math.h>


namespace my
{
	float round(float x)
	{
		return std::round(x*100)/100;
	}
}

using namespace std;
int main()
{
	float ewa = 100, kasia = 100, i = 0;
	
	do
	{
		i++;
		ewa += 100 * 0.1;
		kasia *= 1.05;
	} while (ewa > kasia);

	cout << "Lata:" << i << "\nEwa:" << my::round(ewa) << " zl\nKasia:" << my::round(kasia) << " zl\n";
	return 0;
}