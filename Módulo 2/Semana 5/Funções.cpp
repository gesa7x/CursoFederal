//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Gleyson Eduardo Oliveira
//******************************************************

//Iclusão das Bibliotecas
#include <stdio.h>
#include <stdlib.h>

void imprimeNumero(int numero) {

	printf("O numero digitado foi : %d", numero);

}


int main(int argc, char** argv) {
	
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", n);
	
	
	imprimeNumero(n);
	
	return 0;
}
