#include<stdio.h>
#include <string.h>
#include <ctype.h>
/*Inicio de Examen: 
Construya un programa que, al leer el archivo de texto subido al aula virtual y que contiene errores ortográficos 
en la palabra "Ecuador", cada vez que localice esta palabra, reemplace la primera letra con mayúscula y escriba el 
nuevo texto corregido en otro archivo diferente.
Además, muestre en pantalla cuantas palabras se corrigió en total. Debe utilizar el concepto de "Función". */
//Descripción de libreria aprendida en Udemy//
// Libreria ctype.h El archivo de encabezado ctype.h de la biblioteca estándar de C declara varias funciones que son útiles.
//Todas las funciones aceptan int como parámetro, cuyo valor debe ser EOF o representable como un carácter sin signo.

// Función que corrige una palabra si es "ecuador" o algun cambio que se relalice en la palabra ya que es una falta de ortografía
// Devuelve 1 si se corrigió la palabran ecuador, 0 si no se corrigio la palabra ecuador
int correccion (char *palabra) {
  // Si la palabra es "ecuador" o algun cambio en la palabra
  if (stricmp(palabra, "ecuador") == 0) {
    // Funcion toupper toma el caracter y devuelve a su forma Mayuscula donde es necesario y si la palabra no tiene version en mayuscula la devuelve 
    //el argumento sin modificar en este caso como Ecuador si es una palabra que debe ir su primera letra en Mayuscula nos devolvera
    //La letra corregida con su falta ortografica//
    palabra[0] = toupper(palabra[0]);

    // Devolver 1 indicando que se corrigió la palabra ecuador
    return 1;
  }

  // Si no, devolver 0 indicando que no se corrigió la palabra ecuador 
  return 0;
}
int main(int argc, char const *argv[])
{
    // Abrir el archivo de entrada tricolor en modo lectura
  FILE *entrada = fopen("tricolor.txt", "r");

  // Abrir el archivo nuevo de salida llamado tricolor2 en modo escritura
  FILE *salida = fopen("tricolor2.txt", "w");

  // Declarar una variable para almacenar cada palabra leída del archivo plano 
  char palabra[100];

  // Declarar una variable para contar las palabras corregidas que inicializa en 0 
  int corregidas = 0;

  // Estrucruta While para ir por las palabras en el archivo de entrada y buscar la falta de ortografía, se aplica la libreria ctype.h
  while (fscanf(entrada, "%s", palabra) != EOF) {

    // Corregir la palabra y sumar el resultado al contador
    corregidas += correccion (palabra);

    // Escribir la palabra en el archivo de salida con un espacio
    fprintf(salida, "%s ", palabra);
  }
  
  // Cerrar los archivos planos
  fclose(entrada);
  fclose(salida);
  
  // Mostrar en pantalla el número de palabras ecuador corregidas
  printf("Se corrigieron %d palabras ecuador\n", corregidas);
  
  return 0;
}
