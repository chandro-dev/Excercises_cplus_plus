#include <iostream>
#include <string>
#include <locale.h>
#include <iomanip>

using namespace std;
int largo;
float centenas,decenas,unidades;
int main (){
	setlocale (LC_ALL, "spanish");
	cout<<"ingrese el tamaño de su verga en cm:"<<endl;
	cin>> largo;
	centenas=(largo/100);
	setprecision(1);
	cout<<(centenas*100)<<endl;
	decenas= ((largo-(centenas*100))/10);
	setprecision(1);
	cout<<decenas<<endl;
	unidades=((largo-((decenas*10)-(centenas*100)))/100);
	cout<<unidades<<endl;
}
