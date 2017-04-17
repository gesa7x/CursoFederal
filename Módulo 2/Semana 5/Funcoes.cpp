//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Gleyson Eduardo Oliveira
//******************************************************

//Iclusão das Bibliotecas
#include <stdio.h>
#include <stdlib.h>
//Funções **********************************************
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

//Função principal **************************************
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
