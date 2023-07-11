#include<stdio.h>
#include <string.h>
#include <ctype.h>
/*Inicio de Examen: 
Construya un programa que, al leer el archivo de texto subido al aula virtual y que contiene errores ortográficos 
en la palabra "Ecuador", cada vez que localice esta palabra, reemplace la primera letra con mayúscula y escriba el 
nuevo texto corregido en otro archivo diferente.
Además, muestre en pantalla cuantas palabras se corrigió en total. Debe utilizar el concepto de "Función". */

// Función que corrige una palabra si es "ecuador" o alguna variación
// Devuelve 1 si se corrigió la palabra, 0 si no
int correccion (char *palabra) {
  // Si la palabra es "ecuador" o alguna variación
  if (stricmp(palabra, "ecuador") == 0) {
    // Cambiar la primera letra a mayúscula
    palabra[0] = toupper(palabra[0]);
    // Devolver 1 indicando que se corrigió la palabra
    return 1;
  }
  // Si no, devolver 0 indicando que no se corrigió la palabra
  return 0;
}
int main(int argc, char const *argv[])
{
    // Abrir el archivo de entrada en modo lectura
  FILE *entrada = fopen("tricolor.txt", "r");
  // Abrir el archivo de salida en modo escritura
  FILE *salida = fopen("tricolor2.txt", "w");
  // Declarar una variable para almacenar cada palabra leída
  char palabra[100];
  // Declarar una variable para contar las palabras corregidas
  int corregidas = 0;

    return 0;
}
