//******************************************************
//Instituto Federal de S�o Paulo - Campus Sert�ozinho
//Disciplina......: M2LPBA
//Programa��o de Computadores e Dispositivos M�veis
//Aluno...........: Gleyson Eduardo Oliveira
//******************************************************

//Iclus�o das Bibliotecas
#include <stdio.h>
#include <stdlib.h>
//Fun��es **********************************************
int absoluto (int n) {
int resultado = n;

if (n < 0) {
	resultado = n *(-1);	
}

return resultado;

}

void imprimeNumero(int n){

printf("O numero final eh: %d\n", n);

}

//Fun��o principal **************************************
int main(int argc, char** argv) {
	
	int cont;
	
	for(cont=0; cont<5; cont++){
		
	int n, abs;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	abs = absoluto (n);
	
	imprimeNumero(abs);
	
	}
	
	
	return 0;
}
