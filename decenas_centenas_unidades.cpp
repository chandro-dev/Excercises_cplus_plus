#include <iostream>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "spanish");
	int numero;
	std::string numero_texto;
	std::cout << "Ingrese un numero entre 0 y 999: ";
	std::cin >> numero;
	std::cout << "El numero ingresado es: " << numero << std::endl;
	std::cout << "El numero ingresado en texto es: " << numero_texto << std::endl;
	return 0;


}