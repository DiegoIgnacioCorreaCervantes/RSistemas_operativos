void inter(int *, int *);
void inter(int *a, int *b){
    int aux=0;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int a = 5, b = 6;
    inter(&a, &b);
    printf(" %d %d %p %p", a, b, &a, &b);
    return 0;
}