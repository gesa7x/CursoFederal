// Bibliotecas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
//Numeros Reais
//	float real1;
//	float real2;
//	float soma;//	
//	cout << "Digite um numero: ";
//	cin >> real1;//	
//	cout << "Digite outro numero: ";
//	cin >> real2;//	
//	soma = real1 + real2;//	
//	cout << "A soma dos numeros e: " << soma;

//Numeros inteiros
	int real1;
	int real2;
	int soma;	
	int subtracao;
	int divisao;
	int multiplicacao;
	
	cout << "Digite um numero: ";
	cin >> real1;	
	cout << "Digite outro numero: ";
	cin >> real2;
	
	soma = real1 + real2;
	subtracao = real1 - real2;
	divisao = real1 / real2;
	multiplicacao = real1 * real2;
		
	cout << "A soma dos numeros e: " << soma << endl;
	cout << "A subtracao dos numeros e: " << subtracao << endl;
	cout << "A divisao dos numeros e: " << divisao << endl;
	cout << "A multiplicacao dos numeros e: " << multiplicacao;
	
	return 0;
}
