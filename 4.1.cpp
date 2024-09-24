#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int N, i;
	double S;

cout << "N = ";
	cin >> N;

	S = 1;
	i = N;
		while (i <= 10) {
			S *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
			i++;
		}
	cout << " Result using while:" << S << endl;
	S = 1;
	i = N;
	do {
		if (i > 10) break; //переривання циклу
		S *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
		i++;
	} while (i <= 10);
	cout << " Result using while:" << S << endl;

	S = 1;
		for (i = N; i <= 10; i++) {
			S *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
		}
	cout << " For increment:" << S << endl;

	S = 1;
	for (i = 10; i >= N; i--) {
		S *= (i + 1.0 / (i * i)) / sqrt(1 + exp(i));
	}
	cout << " For decrement:" << S << endl;

	return 0;
}