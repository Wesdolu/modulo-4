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
	int r, g, b, n;
	int contador = 0;
	int red = 0 , green = 0, blue = 0;

	cin >> r >> g >> b >> n;

	for (int i = 0; i < n; i++) {
		cin >> red >> green >> blue;
		
		if (red == r && green == g && blue == b) {
			contador++;
		}
		
	}
      
	cout << contador;

	return 0;
}
