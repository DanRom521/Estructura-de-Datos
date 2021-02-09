//Victor Cartagena
//Alexi Lobos
//Gabriela Rivero
//Daniel Romero
#include <iostream>
#include <stdlib.h>
using namespace std;
void numeros(int& t1, int& t2);
int suma(int t1,int t2);
int resta(int t1, int t2);
int multiplicacion(int t1, int t2);
int division(int t1, int t2);
int main() {
	int op, c, t1, t2, resultado;
	do {
		do {
			cout << "1.- Suma" << endl;
			cout << "2.- Resta" << endl;
			cout << "3.- Multiplicacion" << endl;
			cout << "4.- Division" << endl;
			cout << "0.- Salir" << endl;
			cout << "Ingrese el numero de la operacion que desee realizar: ";
			cin >> op;
		} while (op < 0 && op>4);
		switch (op)
		{
		case 1:
			numeros(t1, t2);
			resultado = suma(t1, t2);
			cout << "El resultado de " << t1 << " + " << t2 << " = " << resultado << endl;
			system("pause");
			break;
		case 2:
			numeros(t1, t2);
			resultado = resta(t1, t2);
			cout << "El resultado de " << t1 << " - " << t2 << " = " << resultado << endl;
			system("pause");
			break;
		case 3: 
			numeros(t1, t2);
			resultado = multiplicacion(t1, t2);
			cout << "El resultado de " << t1 << " * " << t2 << " = " << resultado << endl;
			system("pause");
			break;
		case 4:
			numeros(t1, t2);
			resultado = division(t1, t2);
			cout << "El resultado de " << t1 << " / " << t2 << " = " << resultado << endl;
			system("pause");
			break;
		case 0:
			break;
		}
		system("cls");
	} while (op!=0);
}
void numeros(int& t1, int& t2) {
	cout << "ingrese el primer numero: ";
	cin >> t1;
	cout << "ingrese el segundo numero: ";
	cin >> t2;
}
int suma(int t1, int t2) {
	int r;
	r = t1 + t2;
	return r;
}
int resta(int t1, int t2) {
	int r;
	r = t1 - t2;
	return r;
}
int multiplicacion(int t1, int t2) {
	int r;
	r = t1 * t2;
	return r;
}
int division(int t1, int t2) {
	int r;
	r = t1 / t2;
	return r;
}