#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main(int argc, char** argv) {
	
	int n, x;
	
	cout << "Digite o valor de N: ";
	cin >> n;
	
	cout << "Digite o valor de X: ";
	cin >> x;
	
	if (n == x) {
		cout << "Numeros iguais: " << x << " " << n << "   ";
	} else if (n > x) {
		cout << x << " " << n << "   ";
	} else {
		cout << n << " " << x << "   ";
	}
	
	system("PAUSE");
	return 0;
}
