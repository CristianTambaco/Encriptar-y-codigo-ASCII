#include <iostream>
#include <cmath>
using namespace std;

void prac2(){
char a;
cout<<"Ingrese un caracter "<<endl;
cin>>a;
cout<<"El codigo ASCII de "<< a << " es : " <<static_cast<int>(a)<<endl;

}




void encriptar(){
    char l1, l2, l3, l4, e1, e2, e3, e4;
    int en = 10;
    cout << "Ingrese la palabra de 4 letras que desea encriptar: " << endl;
    cout << "Primera letra: "; cin >> l1;
    cout << "Segunda letra: "; cin >> l2;
    cout << "Tercera letra: "; cin >> l3;
    cout << "Cuarta letra: "; cin >> l4;
    // Proceso de encriptación
    e1 = l1 + en;
    e2 = l2 + en;
    e3 = l3 + en;
    e4 = l4 + en;
    // Salida de datos encriptados
    cout << "\nPalabra encriptada: " << e1 << e2 << e3 << e4 << endl;
}





int main(){
//prac2();
encriptar();
return 0;

}


