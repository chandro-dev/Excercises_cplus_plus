#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int	numeros_random(int	rango_1, int rango_2,int  numero){
	
	int iteracion;
	int random;
	int range = rango_2 - rango_1 + 1;
	if (numero>=rango_1 and numero<=rango_2){
	
		while(random !=numero){
		
		random=rand() % range + rango_1;
		iteracion++;
			};
	return iteracion;
};

}

int main (){
	int rango_1, rango_2,numero;
	int resultado;
	cout<<"Alcance minimo"<<endl;
	cin>>rango_1;
	cout<<"alcance maximo"<<endl;
	cin>>rango_2;
	cout<<"numero a encontrar de forma aleatoria"<<endl;
	cin>> numero;
	cout<<"el numero de iteariones fue:";
	resultado=numeros_random(rango_1,rango_2,numero);
	cout<<resultado;
}
