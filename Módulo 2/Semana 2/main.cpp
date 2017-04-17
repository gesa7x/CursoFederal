// Bibliotecas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Inicio do Programa
int main(int argc, char** argv) {
	
	int x, y, z, soma;
	
	cout << "Digite um numero x: "; 
	cin  >> x;
	
	cout << "Digite um numero y: "; 
	cin  >> y;
	
	cout << "Digite um numero z: "; 
	cin  >> z;
	
	
	soma = x+ y+ z;
	
	if (soma !=180){
		cout << "A soma deve ser 180 "; 
	} else{
		if(x==90 || y ==90 || z== 90){
			cout << "reto"; 
		} else if (x > 90 || y > 90 || z > 90){
				cout << "obtuso"; 
		} else {
			cout << "Acutangulo";
		}
		
	}
	
	
	return 0;
}

