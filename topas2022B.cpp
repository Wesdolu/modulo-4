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
	int N, F, lern, maior = -1;
	cin >> F;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> lern;
		if (lern <= F && lern > maior)
		{
			maior = lern;
		}
	}
	if (maior == -1)
	{
		cout << "No free lunch";
	}
	else {
		cout << maior;
	}
	return 0;
}