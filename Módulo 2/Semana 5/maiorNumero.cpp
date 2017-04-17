//******************************************************
//Instituto Federal de São Paulo - Campus Sertãozinho
//Disciplina......: M2LPBA
//Programação de Computadores e Dispositivos Móveis
//Aluno...........: Gleyson Eduardo Oliveira
//******************************************************

//Iclusão das Bibliotecas
#include <stdio.h>
#include <stdlib.h>


//Funçoes ***********************************************
float AreaTriangulo(float x, float y){
	float result;
	
	result = (x*y)/2;
	
	return result;
}

//Função principal **************************************
int main(int argc, char** argv) {
	
	
	float base, altura, area;
	
	printf("Digite a base e a altura do triangulo: ");
		scanf("%f", &base);
		scanf("%f", &altura);
		
		area = AreaTriangulo ( base, altura);
		
		printf("A area vale: %f", area);
	
	
	return 0;
}
