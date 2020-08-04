#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;  //variable de texto "texto" creada
    int aux = 0, igual = 0;  // creacion de unas variables "aux" e "igual" cuyo valor inicial es 0

    cout << "Ingrese la palabra a evaluar: ";  // imprime en la pantalla del terminal
    getline(cin >> ws, texto); // aca se capturar la información ingresada por el usuario capturando texto con espacios en blanco pero eliminando los espacios finales y saltos de línea del buffer.

    for(int ind = texto.length() - 1; ind >= 0; ind--) {  // el for va a iterar iniciando por la longitud de la cadena utilizando el método length() – 1 reduciendo el valor de ind en 1 hasta que ind sea mayor o igual a cero. Conforme avanza el bucle for
        if(texto[ind] == texto[aux]) {   //verifica que cada uno de los elementos del string en los índice ind y aux sean iguales
            igual++;
        }
        aux++;
    }

    if(texto.length() == igual) {    // va a verificar que la longitud del texto o palabra ingresada por sea igual al valor que se encuentra almacenado en la variable igual
        cout << "La palabra ingresada es palindromo!! :3" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo!! :3" << endl;
    }

    return 0; // final del ciclo
}