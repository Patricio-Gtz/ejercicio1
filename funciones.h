/*
 * @author:  Diego Patricio Gutierrez Lopez Cano
 * @date:    25/enero/2018
 * @file:    funciones.h
 * @brief:   Funciones para el programa de tarea1, que incluye imprimir y
 *           mascara
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototipos de funciones
void imprimir(int nums[4]);
unsigned short int mascara(int op);

/**
 * Funcion que recibe el array nums[4] lo junta en un unsigned short int,
 * y te pide la opcion para desplegar el numero de la posicion que necesitas.
 * @param int nums[4] recibe el array de los numeros recibidos desde la terminal
 */
void imprimir(int nums[4]) {

  int i, n = 4, opcion;
  unsigned short int numeroNuevo, d, masc, temp;

  // Junta los numeros del array a un solo numero
  for (i = 0; i < 4; i++) {
    numeroNuevo += (nums[i] << (n - 1) * 4);
    n--;
  }

  do {
    printf("Presiona 0 para salir...\n");
    printf("Dame la posicion que deseas imprimir: ");
    scanf(" %d", &opcion);
    printf("El numero es: ");
    masc = mascara(opcion);
    temp = numeroNuevo & masc;
    temp = temp >> ((4 - opcion) * 4);
    printf("%x\n", temp);
  } while (opcion != 0);
}

/**
 * Esta funcion ayuda a que se filtren los numeros para que no te despliegue
 * solo el numero que deseas, y no todos los demas.
 * @param   int op  Recibe poscicion deseada por el usuario
 * @return    regresa un unsigned short int que es la posicion deseada por el
 *            usuario, pero en hexadecimal y filtrado
 */
unsigned short int mascara(int op) {

  unsigned short int a = 15, b, d;

  b = a << 12;
  d = b >> (op - 1) * 4;

  return d;
}
