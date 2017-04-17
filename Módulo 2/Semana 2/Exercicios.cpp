// Bibliotecas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Inicio do Programa
int main(int argc, char** argv) {
//Estrutura de Repetição
		
//Escreva um programa em C que imprima os numeros de 0 a 9 de forma crescente.
//	int cont;
//	for(cont = 0; cont <= 10; cont = cont + 1){
//	printf("Iteracao %d \n", cont);
//	}

//Escreva um programa em C que imprima os numeros pares que estão no intevalo entre 0 e 20 (Ordem Crescente).
//int cont;
//
//for (cont = 0; cont <= 20; cont = cont +1){
//    if (cont % 2 == 0) {
//		printf ("O numero %d \n", cont);
//	   }	
//}

//Escreva um programa em C que imprima os numeros de 0 a 9 de forma decrescente.
//	int cont;
//	for(cont = 10; cont >= 0; cont = cont - 1){
//	printf("Iteracao %d \n", cont);
//	}

// Escreva um progrma em C que peça para o usuário entrar com um numero inteiro maios que 5.
// Se um valor incorreto for digitado, o programa deve avisar o usuário e termnar.
// Caso o numero seja correto, o programa deve exibir os numero de 5 ao numero digitado (Ordem crescente).
int numero, conta;

printf ("Digite um numero maior que 5: ");
	scanf("%d", numero);

	if (numero <= 5) {
			printf ("O numero %d, não é maior que 5", numero);
	} else {
		for (conta = 5; conta <= numero; conta = conta + 1) {
			printf ("O numero %d, é", conta);
		}
	}
	return 0;
}

