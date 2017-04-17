#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, vetor[100], soma=0;
	
	
	//Recebendo os valores digitados pelo usuario e armazenando no vetor
	for(i=0; i<11; i++){	
	printf("Digite um  valor: ");
	scanf ("%d", &vetor[i]);		
	}
	
	
		for(i=0; i<10; i++){		
		soma = soma + i;		
		}
		
	
	if (vetor[10] < 0 ) {
		//Mostrando se a posição do vetor eh negativo
		printf("O valor eh Negativo!zn");
	} else if (vetor[10] > 0 ) {
		//Mostrando se a posição do vetor eh Positivo
		printf("O valor eh Positivo!zn");
	} else {
		//Mostrando se a posição do vetor eh igual a Zero
		printf("O valor eh igual a Zero!\n");
	}

if (vetor[10]%2 ==0){
		//Mostrando se a posição do vetor eh par
		printf("O valor eh Par\n!");
} else {
	//Mostrando se a posição do vetor eh impar
	printf("O valor eh Impar!\n");
}

	return 0;
}
