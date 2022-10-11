#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int con; //Variable global que puede ser manejada por cualquier función
void holaMundo(int signalNumber){
    if(signalNumber == 10){
        printf("Esta es la señal 10\n");
        con = 2;
    }
    else{
        printf("Esta es la otra señal\n");

    }
}

void nomematas(int sig){
    printf("jajajaja, no me matas\n");
}


int main(){
    signal(12, holaMundo);
    signal(10, holaMundo);
    signal(2, nomematas);

    //Es un ciclo infinito porque siempre va a ser uno
    while(con == 1){
        printf("Estoy trabajando\n");
        sleep(1);

       
    }
    printf("Nunca llega\n");
    return 0;
}