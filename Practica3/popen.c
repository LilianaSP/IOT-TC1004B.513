#include <stdio.h>


int main(){
    FILE *sort;
    //crear un arreglo
    char *cadena[10]; // Solo puede tener 10 strings
    cadena[0] = "hola";
    cadena[1] = "estan";
    cadena[2] = "aqui";
    cadena[3] = "fin";
    sort = popen("sort", "w");
    for (int i = 0; i < 4; i++){
        fprintf(sort,"%s\n",cadena[i]);
    }
    pclose(sort);


}