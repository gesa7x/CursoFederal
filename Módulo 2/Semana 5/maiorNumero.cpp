//******************************************************
//Instituto Federal de S�o Paulo - Campus Sert�ozinho
//Disciplina......: M2LPBA
//Programa��o de Computadores e Dispositivos M�veis
//Aluno...........: Gleyson Eduardo Oliveira
//******************************************************

//Iclus�o das Bibliotecas
#include <stdio.h>
#include <stdlib.h>


//Fun�oes ***********************************************
float AreaTriangulo(float x, float y){
	float result;
	
	result = (x*y)/2;
	
	return result;
}

//Fun��o principal **************************************
int main(int argc, char** argv) {
	
	
	float base, altura, area;
	
	printf("Digite a base e a altura do triangulo: ");
		scanf("%f", &base);
		scanf("%f", &altura);
		
		area = AreaTriangulo ( base, altura);
		
		printf("A area vale: %f", area);
	
	
	return 0;
}
