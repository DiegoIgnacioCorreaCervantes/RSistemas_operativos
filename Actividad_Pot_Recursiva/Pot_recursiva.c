#include <stdio.h>

int potencia(int, int, int);
int potencia(int n, int p, int ni) {
    if(p == 1){
        return n;
    }else{
        int na = n;
        for(int i=1;i<ni;i++){
            n += na;
            printf("n: %p \n", n);
        }
        return potencia(n, p-1, ni);
    }
}

int main() {
    int n = 10, p = 5, ni = n;
    printf("Resultado: %p", potencia(n,p,ni));
    return 0;
}