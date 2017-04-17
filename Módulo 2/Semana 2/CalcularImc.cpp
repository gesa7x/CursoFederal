#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main(int argc, char** argv) {
	
	float peso, altura, imc;

	cout << "Digite seu peso: ";
	cin >> peso;
	
	cout << "Digite sua altura: ";
	cin >> altura;
	
	imc = peso / (altura * altura);
	
	cout << imc << endl;
	
	if (imc < 17)
	cout << "Voce esta muito abaixo do peso ideal! " << endl;
	 else if (imc >= 17 && imc <= 18.49) 
		cout << "Voce esta abaixo do peso! " << endl;
	 else if (imc >= 18.50 && imc <= 24.99)
		cout << "Parabens!!! Voce esta no seu peso normal! " << endl;
	 else if (imc >= 25 && imc <= 29.99)
		cout << "Voce esta acima do seu peso (Sobrepeso) " << endl;
	 else if (imc >= 30 && imc <= 34.99)
		cout << "Voce esta acima do seu peso (Obesidade Grau I) " << endl;
	 else if (imc >= 35 && imc <= 39.99)
		cout << "Voce esta acima do seu peso (Obesidade Grau II) " << endl;
	 else if (imc >= 40)
		cout << "Voce esta acima do seu peso (Obesidade Grau III) " << endl;
	
	
	system("pause");
	return 0;
}
