#include <iostream>

using namespace std;

/*Función para contar los múltiplos de un número en un rango específico de un arreglo.
La cantidad de veces que el número "numero" es un múltiplo de algún elemento del arreglo
"numeros" entre los índices "indiceComienzo" y "indiceFin".

Ejemplo:
 Si se invoca la función con el arreglo {1, 2, 3, 4, 5, 6}, el número 3, el índice de comienzo 0
 y el índice de fin 5, la función contará la cantidad de múltiplos de 3 en el rango del arreglo
 entre los índices 0 y 5, que son 3 y 6, por lo que devolverá 2.
 */
int ContarMultiplos(int numeros[], int numero, int indiceComienzo, int indiceFin);

int main(){
	int numero = 3;
	int numeros[] = {1,2,3,4,5,6};
	int indiceComienzo = 0;
	int indiceFin = 5;
	int multiplos = 0;
	multiplos = ContarMultiplos(numeros, numero, indiceComienzo, indiceFin);
	cout<<"El numero "<<numero<<" tiene un total de: "<<multiplos<<" multiplos dentro de numeros."<<endl;
	return 0;
}

int ContarMultiplos(int numeros[], int numero, int indiceComienzo, int indiceFin){
    int contador = 0;
    if(numeros[indiceComienzo] % numero == 0){
    contador = contador + 1;
	}
    if(indiceComienzo != indiceFin){
    	contador = contador + ContarMultiplos(numeros, numero, indiceComienzo + 1, indiceFin);
	}
    return contador;
}