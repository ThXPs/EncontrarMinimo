#include <iostream>
using namespace std;
// Función para encontrar el elemento más pequeño en una matriz
int encontrarMinimo(int matriz[][3], int filas, int columnas) {
// Verifica si las dimensiones de la matriz son válidas
if (filas <= 0 || columnas <= 0) {
return -1; // Retorna -1 si la matriz está vacía o tiene dimensiones inválidas
}
int minimo = matriz[0][0]; // Inicializa el mínimo con el primer elemento de la matriz
// Itera sobre cada elemento de la matriz para encontrar el mínimo
for (int i = 0; i < filas; i++) {
for (int j = 0; j < columnas; j++) {
if (matriz[i][j] < minimo) {
minimo = matriz[i][j]; // Actualiza el mínimo si se encuentra un valor más pequeño
}
}
}
return minimo; // Retorna el valor mínimo encontrado
}
int main() {
// Declaración e inicialización de la matriz
int numeros[3][3] = {{5, 2, 8}, {3, 9, 1}, {7, 4, 6}};
// Llama a la función encontrarMinimo y muestra el resultado
int minimo = encontrarMinimo(numeros, 3, 3);
cout << "El elemento mas pequeño en la matriz es: " << minimo << endl;
return 0; // Retorna 0 para indicar que el programa se ejecutó con éxito
}