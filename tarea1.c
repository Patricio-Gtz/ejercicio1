#include "funciones.h"

// Prototipos de funciones
extern void imprimir(int nums[3]);
extern unsigned short int mascara(int op);

int main(int argc, char const *argv[]) {

  // Array para guardar los numeros ingresados
  int numsConvertidos[4];

  // argc se usa para saber si el usuario ingreso numeros de mas o menos
  if (argc < 5) {
    printf("Pocos argumentos...\n");
  } else if (argc > 5) {
    printf("Muchos argumentos...\n");
    // Convertir los numeros a enteros y guardarlos en el Array
    // Tambien se comprueba si el usuario ingreso un numero < 0 y >= 16
  } else if(sscanf(argv[1], "%d", &numsConvertidos[0]) != 1 || numsConvertidos[0] < 0 || numsConvertidos[0] >= 16) {
    printf("Ingresa enteros positivos y menores a 16...\n");
  } else if(sscanf(argv[2], "%d", &numsConvertidos[1]) != 1 || numsConvertidos[1] < 0 || numsConvertidos[1] >= 16) {
    printf("Ingresa enteros positivos y menores a 16...\n");
  } else if(sscanf(argv[3], "%d", &numsConvertidos[2]) != 1 || numsConvertidos[2] < 0 || numsConvertidos[2] >= 16) {
    printf("Ingresa enteros positivos y menores a 16...\n");
  } else if(sscanf(argv[4], "%d", &numsConvertidos[3]) != 1 || numsConvertidos[3] < 0 || numsConvertidos[3] >= 16) {
    printf("Ingresa enteros positivos y menores a 16...\n");
  } else {
    imprimir(numsConvertidos);
  }

}
