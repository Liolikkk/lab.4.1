#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N, i; 
	double S = 1.0; // початкове значення 

	cout << " N = "; cin >> N;
	
	while (i = N)
	{
		double numerator = (i + 1.0 / (i * i));

		// Знаменник
		double inator = sqrt(1 + exp(i) / i);
	}
	  cout << S << endl;
	do {
		double numerator = (i + 1.0 / (i * i));

		// Знаменник
		double inator = sqrt(1 + exp(i) / i);
	} while (i = N);
	cout << S << endl;

	for (int i = N; i <= 10; i++);
	{
		double numerator = (i + 1.0 / (i * i));

		// Знаменник
		double inator = sqrt(1 + exp(i) / i);
	}
	cout << S << endl;

	for (int i = N; i <= 10; i++);
	{
		double numerator = (i + 1.0 / (i * i));

		// Знаменник
		double inator = sqrt(1 + exp(i) / i);
	}
	cout << S << endl;

	return 0; 
}