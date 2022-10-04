#include <stdio.h>
#include <unistd.h>
int main(){
    printf("Prueba\n");

    int pid = fork();

    if( pid == 0)
    {
        printf("Soy el proceso hijo\n");
    }
    else
    {
        printf("Soy el padre\n");
        sleep(10);
        printf("ya termine\n");
    }
    return 0;
}