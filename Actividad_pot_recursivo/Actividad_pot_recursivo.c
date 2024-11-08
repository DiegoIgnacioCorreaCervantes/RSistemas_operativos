#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int potencia(int, int, int);
int potencia(int n, int p, int ni) {
    if(p == 1){
        return n;
    }else{
        int na = n;
        for(int i=1;i<ni;i++){
            n += na;
            //printf("n: %d \n", n);
        }
        return potencia(n, p-1, ni);
    }
}

int main() {
    
    int pid = fork();
    if(pid<0){
        perror("Error al crear proceso");
        return 1;
    }else if(pid == 0){
        printf("valor del pid hijo %d \n", pid);
        //Proceso hijo: realiza la multiplicacion por restas de forma recursiva
        int n = 3, p = 2, ni = n;
        printf("Resultado: %d \n", potencia(n,p,ni));
    }else {
        //Proceso padre: 
        printf("Proceso padre con pid: %d y el hijo tiene pid %d\n", getpid(), pid);
    }
    return 0;
}
