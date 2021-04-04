/*librerias */
#include <stdio.h>
#include <stdlib.h> //para usar funciones del sistema
/*  MACROS  */

#define SALUDO "Bienvenido al curso de Sistemas Embebidos \n"
#define COMPLEMENTO "IEEE CAS UNI"
/*variables globales */

/* Declaraciones de funciones */

/* Función principal */

int main(){

    //system("notepad");  //para abrir el notepad :v
    system("type nul > Saludo.txt");
    FILE *fp;
    
    fp = fopen("Saludo.txt", "w+");
    fprintf(fp, SALUDO);
    fputs(COMPLEMENTO,fp);
    fclose(fp);
    system("code Saludo.txt");

    return 0;
}





