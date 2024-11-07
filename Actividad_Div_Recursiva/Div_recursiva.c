#include <stdio.h>

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
            n -= di;
            c = 1 + division(n, di);
        }
    }
    return c;
}

int main() {
    int n = 5, di = 2;
    printf("Resultado: %p", division(n,di));
    return 0;
}
