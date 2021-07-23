#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu();
void ejercicio1(int);
void ejercicio2(int);

int main(int argc, char** argv) {
	int x = 0;
	while ((x = menu()) != 3){
		cout << x << "\n";
		if (x == 1){
			int n = 0;
			while (n < 1){			
			cout << "Ingrese el valor de n en la sumatoria: \n";
			cin >> n;
			ejercicio1(n);
			}
		}else if (x == 2){
			int y = 0;
			cout << "Ingrese el valor de x: \n";
			cin >> y;
			ejercicio2(y);
		}else{
		 cout << "Opcion no disponible\n";
			
		}
	} 
			                               
	return 0;
}

int menu() {
	int opcion = 0;
	cout << "MENU \n"
	<< "1) Ejercicio 1 \n"
	<< "2) Ejercicio 2 \n"
	<< "3) Salir" << endl;	
	cin >> opcion;
	return opcion;
}

void ejercicio1(int n){
	//Ejercicio 1
	double resultado = 0;
	for (int i = 1; i <= n; i++){
		double numerador = 2.0 * i - 1.0;
		double denominador = i * (i + 1.0);
		resultado += numerador / denominador;
	}
	cout << "S(" << n << ")= "<< resultado << endl;

}

void ejercicio2(int x){
	//Ejercicio 2
	double resultado = 1.0 / (1.0 + exp(x));
	cout << "f(" << x << ")=" << resultado << endl;
}


