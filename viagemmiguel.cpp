#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	
	int N, alturas[999] = { 0 }, i, somar = 0, alturaMax = 0;

	cin >> N;
	cout << endl;

	for (i = 0; i < N; i++)
		cin >> alturas[i];
		for (i = 0; i < N; i++)
		{
			if (alturas[i] < alturaMax)
			{
				somar++;
			}

			alturaMax = alturas[i];
			
	}
		cout << somar++ << endl;


	return 0;
}