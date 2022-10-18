#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    char may;
    int n = 0;
    int Totalvocales = 0;
    //Ciclo do while nos aseguramos que mínimo se realiza una vez
    do{
        // se le pasa de donde a donde con STDIN_FILENO, luego a la variabble de donde lo va a guardar, consecutivamente un bbuffer de los caracteres que va a ir leyendo
        n = read(STDIN_FILENO, &c,1);
        may = toupper(c); //Lo convertimos en mayúsculas

        //Conatr las vocales
        if(may == 'A'||may == 'E'||may == 'I'||may == 'O'||may == 'U'){
            write(STDOUT_FILENO, &c,1);
            Totalvocales +=1;
        }

    }
    while(n != 0);
    printf("El total de vocales es %d\n", Totalvocales);
    return 0;

    
}