#include <iostream>
#include "funciones.h"
using namespace std;

//Defino los valores inciales


int main(){

//Definimos el array Y

    double *Y=new double [401];
    double *V=new double [401];
    Y[0]=8.5;
    V[0]=20;


    // Creamos el array de tiempo t
    
    
    // Generamos un tercer array con el apuntador (*) y la función
    double * y = movimiento(Y,V);
    
    
    // Imprimirmos los dos elementos de y.
    for(int i=0; i<401; i++){
        
        cout << y[i] << endl;
    }
    return 0;
}