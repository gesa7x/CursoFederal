//******************************************************
//Instituto Federal de S�o Paulo - Campus Sert�ozinho
//Disciplina......: M2LPBA
//Programa��o de Computadores e Dispositivos M�veis
//Aluno...........: Gleyson Eduardo Oliveira
//******************************************************

//Iclus�o das Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	
//Decara��o dos Tipos e nomes das variaveis
int i, soma = 0;
int multiplica = 1;
int v[5];

//Pedindo para que o usu�rio digite 5 numeros.
printf("Informe um Valor inteiro para a posicao %d \n", v[i]);

//Inserindo os valores digitados no Vetor utilizando o laco FOR.
for (i=0; i<5; i++){
	scanf("%d", &v[i]);
}

//Laco FOR percorrendo o vetor e fazendo a SOMA e a MULTIPLICACAO das posi��es. 
for(i = 0; i < 5; i++) {
	soma = soma + v[i];
		
	multiplica = multiplica * v[i];
}

//Condicao para informar se o resultado  da soma � negativo ou nao.
if (soma < 0){
	printf("\n O valor da Soma eh: %d\.\n Este Valor eh Negativo\n", soma);
} else {
		printf("\n O valor da Soma eh: %d\.\n Este Valor eh Positivo\n", soma);
}

//Condicao para informar se o resultado  da multiplicacao � negativo ou nao.
if (soma < 0){
	printf("\n O valor da Multiplicacao eh: %d\.\n Este Valor eh Negativo\n", multiplica);
} else {
		printf("\n O valor da Multiplicacao eh: %d\.\n Este Valor eh Positivo\n", multiplica);
}


system("PAUSE");
	return 0;
}
