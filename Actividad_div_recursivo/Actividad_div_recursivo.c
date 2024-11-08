#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//Declarar
int division(int, int);

//Implementar
int division(int n, int di) {
    int c;
    if(di==0){
        printf("Division entre cero \n");
        c = -1;
    }else{
        if(n<di){
            c = 0;
        }else{
            c = 1 + division(n-=di, di);
        }
    }
    return c;
}

int main() {

    int pid = fork();
    if(pid<0){
        perror("Error al crear proceso");
        return 1;
    }else if(pid == 0){
        printf("valor del pid hijo %d \n", pid);
        //Proceso hijo: realiza la multiplicacion por restas de forma recursiva
        int n = 5, di = 2;
        printf("Resultado: %d \n", division(n,di));
    }else {
        //Proceso padre: 
        printf("Proceso padre con pid: %d y el hijo tiene pid %d\n", getpid(), pid);
    }
    return 0;
}

