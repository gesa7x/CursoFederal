#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {

int i, j, x;

//Este comando indica que vamos escrever em algum lugar - Em um arquivo externo, fora do programa.
ofstream fout;

//Abre o arquivo/Cria arquivo.
fout.open("arquivo.txt");

for(j=0; j<=50; j++) {
	fout << j << " ";
}
	fout << flush;
	fout.close();	
	
	//Abro o arquivo que criei em cima.
	ifstream fin("arquivo.txt");	
	
	//Verifico se consegui abrir o arquivo
	if (!fin.good()) {
		cout << "Este Arquivo não Existe!!! \n\n";
	} else {
		for (j = 0; j <= 50; j++){
			//Cada vez que passar por um numero do for ele lê o arquivo.
			//Cada espaço o programa entende que é um numero, e 
			fin >> x;
			cout << x << " ";
		}
	}
		
	system("PAUSE");
	
	return EXIT_SUCCESS;
}
