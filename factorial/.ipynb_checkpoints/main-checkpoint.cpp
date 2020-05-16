#include <iostream>
using namespace std;
int factorial(int a){
    if(a==0 || a==1){
        return 1;
    }
    return a*factorial(a-1);
}
int main(){
    std::cout << "Hola Mundo" << std::endl ;
    int n;
    cout << "Por favor introduce un numero entero" << endl;
    cin >> n;
    
    cout << "El factorial es "<< factorial(n) <<endl;
    return 0;
}
