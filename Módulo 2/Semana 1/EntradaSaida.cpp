// Bibliotecas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Inicio do Programa
int main(int argc, char** argv) {
	
	//Declaracao de variaveis.
	int numero;
	
	//Mensagem para usuário digitar um numero.
	cout << "Digite um numero: "; 
	//Comando para guardar o numero digitado na variavel numero.
	cin  >> numero;
	
	//Comando para exibir o numero que o usuário escolheu.
	cout << "O numero tem como valor: " << numero;
	
	
	return 0;
}
