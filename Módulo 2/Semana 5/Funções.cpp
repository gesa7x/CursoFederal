//******************************************************
//Instituto Federal de S�o Paulo - Campus Sert�ozinho
//Disciplina......: M2LPBA
//Programa��o de Computadores e Dispositivos M�veis
//Aluno...........: Gleyson Eduardo Oliveira
//******************************************************

//Iclus�o das Bibliotecas
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
