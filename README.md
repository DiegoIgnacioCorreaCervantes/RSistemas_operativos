# Sistemas operativos
---

#### Alumno: Correa Cervantes Diego Ignacio, Grupo C
---
## Pruebas de escritorio

### Cola con prioridad

|        |                                                                                                                    |    |          |         |       |         |               |        | nodo1 |           |           | nodo2 |           |           |
|--------|--------------------------------------------------------------------------------------------------------------------|----|----------|---------|-------|---------|---------------|--------|-------|-----------|-----------|-------|-----------|-----------|
| L      | Sentencia                                                                                                          | op | contador | *cabeza | temp  | maxNodo | maxNodoPrevio | previo | valor | prioridad | siguiente | valor | prioridad | siguiente |
| 86     |  Inicia main                                                                                                       |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 87     |  inicializar funcion srand para general pseudoaleatorios                                                           |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 88     |  nodo* cabeza = Null;                                                                                              |    |          | Null    |       |         |               |        |       |           |           |       |           |           |
| 89     |  int op = 0;                                                                                                       | 0  |          |         |       |         |               |        |       |           |           |       |           |           |
| 91     |  inicia ciclo de control --> do while(op!=4)                                                                       |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 92-95  |  Se imprimen las opciones a seleccionar en consola                                                                 |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 96     |  printf(""Seleccione una opción: ""); --> usuario ingresa 1                                                        |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 97     |  scanf(""%d"", &op);                                                                                               | 1  |          |         |       |         |               |        |       |           |           |       |           |           |
| 99     |  switch (op) {                                                                                                     |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 100    |  case: 1 --> (1.-Generar proceso)                                                                                  |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 101    |  insertar_final(&cabeza);                                                                                          |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 28     |  inicia metodo --> void insertar_final(nodo** cabeza) {                                                            |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 29     |  nodo* nuevoNodo = genera_proceso();                                                                               |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 15     |  inicia metodo  --> nodo* genera_proceso() {                                                                       |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 16     |  static int contador = 1;                                                                                          |    | 0        |         |       |         |               |        |       |           |           |       |           |           |
| 17     |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                                        |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 22     |  nuevo->valor = contador++;                                                                                        |    | 1        |         |       |         |               |        | 1     |           |           |       |           |           |
| 23     |  nuevo->prioridad = numero_aleatorio();                                                                            |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 11     |  inicia metodo  --> int numero_aleatorio() {                                                                       |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 12     |  return (rand() % 4) + 1;                                                                                          |    |          |         |       |         |               |        |       | 1         |           |       |           |           |
| 13     |  termina metodo --> numero_aleatorio                                                                               |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 24     |  nuevo->siguiente = NULL;                                                                                          |    |          |         |       |         |               |        |       |           | Null      |       |           |           |
| 25     |  return nuevo;                                                                                                     |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 26     |  termina metodo  --> genera_proceso                                                                                |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 31     |  if (*cabeza == NULL) {  --> *cabeza = Null --> true                                                               |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 32     |  *cabeza = nuevoNodo;                                                                                              |    |          | nodo1   |       |         |               |        |       |           |           |       |           |           |
| 40     |  termina metodo --> insertar_final                                                                                 |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 102    |  break; --> termina swich(op)                                                                                      |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 115    |   } while (op != 4); --> op = 1 --> true                                                                           |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 92-95  |  Se imprimen las opciones a seleccionar en consola                                                                 |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 96     |  printf(""Seleccione una opción: ""); --> usuario ingresa 1                                                        |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 97     |  scanf(""%d"", &op);                                                                                               | 1  |          |         |       |         |               |        |       |           |           |       |           |           |
| 99     |  switch (op) {                                                                                                     |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 100    |  case: 1 --> (1.-Generar proceso)                                                                                  |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 101    |  insertar_final(&cabeza);                                                                                          |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 28     |  inicia metodo --> void insertar_final(nodo** cabeza) {                                                            |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 29     |  nodo* nuevoNodo = genera_proceso();                                                                               |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 15     |  inicia metodo  --> nodo* genera_proceso() {                                                                       |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 16     |  static int contador = 1;                                                                                          |    | 1        |         |       |         |               |        |       |           |           |       |           |           |
| 17     |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                                        |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 22     |  nuevo->valor = contador++;                                                                                        |    | 2        |         |       |         |               |        |       |           |           | 2     |           |           |
| 23     |  nuevo->prioridad = numero_aleatorio();                                                                            |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 11     |  inicia metodo  --> int numero_aleatorio() {                                                                       |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 12     |  return (rand() % 4) + 1;                                                                                          |    |          |         |       |         |               |        |       |           |           |       | 2         |           |
| 13     |  termina metodo --> numero_aleatorio                                                                               |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 24     |  nuevo->siguiente = NULL;                                                                                          |    |          |         |       |         |               |        |       |           |           |       |           | Null      |
| 25     |  return nuevo;                                                                                                     |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 26     |  termina metodo  --> genera_proceso                                                                                |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 31     |  if (*cabeza == NULL) {  --> *cabeza = nodo1 --> false                                                             |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 33     |  } else {                                                                                                          |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 34     |  nodo* temp = *cabeza;                                                                                             |    |          |         | nodo1 |         |               |        |       |           |           |       |           |           |
| 35     |  while (temp->siguiente != NULL) { --> temp->siguiente = Null --> false                                            |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 38     |  temp->siguiente = nuevoNodo;                                                                                      |    |          |         |       |         |               |        |       |           | nodo2     |       |           |           |
| 40     |  termina metodo --> insertar_final                                                                                 |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 102    |  break; --> termina swich(op)                                                                                      |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 115    |   } while (op != 4); --> op = 1 --> true                                                                           |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 92-95  |  Se imprimen las opciones a seleccionar en consola                                                                 |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 96     |  printf(""Seleccione una opción: ""); --> usuario ingresa 2                                                        |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 97     |  scanf(""%d"", &op);                                                                                               | 2  |          |         |       |         |               |        |       |           |           |       |           |           |
| 99     |  switch (op) {                                                                                                     |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 103    |  case: 2 --> (2.-Atiende proceso)                                                                                  |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 104    |  atender_prioridad_mas_alta(&cabeza);                                                                              |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 52     |  inicia metodo --> void atender_prioridad_mas_alta(nodo** cabeza) {                                                |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 53     |  if (*cabeza == NULL) { --> *cabeza = nodo1 --> false                                                              |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 58     |  nodo* temp = *cabeza;                                                                                             |    |          |         | nodo1 |         |               |        |       |           |           |       |           |           |
| 59     |  nodo* maxNodo = temp;                                                                                             |    |          |         |       | nodo1   |               |        |       |           |           |       |           |           |
| 60     |  nodo* maxNodoPrevio = NULL;                                                                                       |    |          |         |       |         | Null          |        |       |           |           |       |           |           |
| 61     |  nodo* previo = NULL;                                                                                              |    |          |         |       |         |               | Null   |       |           |           |       |           |           |
| 64     |  while (temp != NULL) { --> temp = nodo1 --> true                                                                  |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 65     |  if (temp->prioridad > maxNodo->prioridad) { --> temp->prioridad(1) = maxNodo->prioridad(1) --> false              |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 69     |  previo = temp;                                                                                                    |    |          |         |       |         |               | nodo1  |       |           |           |       |           |           |
| 70     |  temp = temp->siguiente;                                                                                           |    |          |         | nodo2 |         |               |        |       |           |           |       |           |           |
| 64     |  while (temp != NULL) { --> temp = nodo2 --> true                                                                  |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 65     |  if (temp->prioridad > maxNodo->prioridad) { --> temp->prioridad(2) > maxNodo->prioridad(1) --> true               |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 66     |  maxNodo = temp;                                                                                                   |    |          |         |       | nodo2   |               |        |       |           |           |       |           |           |
| 67     |  maxNodoPrevio = previo;                                                                                           |    |          |         |       |         | nodo1         |        |       |           |           |       |           |           |
| 69     |  previo = temp;                                                                                                    |    |          |         |       |         |               | nodo2  |       |           |           |       |           |           |
| 70     |  temp = temp->siguiente;                                                                                           |    |          |         | Null  |         |               |        |       |           |           |       |           |           |
| 64     |  while (temp != NULL) { --> temp = Null --> false                                                                  |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 74     |  printf(""Atendiendo proceso %d con prioridad %d\n"", maxNodo->valor, maxNodo->prioridad);                         |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 77     |  if (maxNodoPrevio == NULL) { --> maxNodoPrevio = nodo1 --> false                                                  |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 79     |  } else {                                                                                                          |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 80     |  maxNodoPrevio->siguiente = maxNodo->siguiente;                                                                    |    |          |         |       |         |               |        |       |           | Null      |       |           |           |
| 83     |  free(maxNodo);                                                                                                    |    |          |         |       |         |               |        |       |           |           | free  | free      | free      |
| 84     |  termina metodo --> atender_prioridad_mas_alta                                                                     |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 105    |  break; --> termina swich(op)                                                                                      |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 115    |   } while (op != 4); --> op = 2 --> true                                                                           |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 92-95  |  Se imprimen las opciones a seleccionar en consola                                                                 |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 96     |  printf(""Seleccione una opción: ""); --> usuario ingresa 3                                                        |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 97     |  scanf(""%d"", &op);                                                                                               | 3  |          |         |       |         |               |        |       |           |           |       |           |           |
| 99     |  switch (op) {                                                                                                     |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 106    |  case: 3 --> (3.-Mostrar lista de procesos)                                                                        |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 107    |  imprimir_lista(cabeza);                                                                                           |    |          | nodo1   |       |         |               |        |       |           |           |       |           |           |
| 42     |  inicia metodo --> void imprimir_lista(nodo* cabeza) {                                                             |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 43     |  nodo* temp = cabeza;                                                                                              |    |          |         | nodo1 |         |               |        |       |           |           |       |           |           |
| 44     |  while (temp != NULL) { --> temp = nodo1 --> true                                                                  |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 45     |  printf(""%p [Proceso %d] (Prioridad %d) [direct %p] -> "", temp, temp->valor, temp->prioridad, &temp->prioridad); |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 46     |  temp = temp->siguiente;                                                                                           |    |          |         | Null  |         |               |        |       |           |           |       |           |           |
| 44     |  while (temp != NULL) { --> temp = Null --> false                                                                  |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 49     |  printf(""NULL\n"");                                                                                               |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 50     |  termina metodo --> imprimir_lista                                                                                 |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 108    |  break; --> termina swich(op)                                                                                      |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 115    |   } while (op != 4); --> op = 3 --> true                                                                           |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 92-95  |  Se imprimen las opciones a seleccionar en consola                                                                 |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 96     |  printf(""Seleccione una opción: ""); --> usuario ingresa 4                                                        |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 97     |  scanf(""%d"", &op);                                                                                               | 4  |          |         |       |         |               |        |       |           |           |       |           |           |
| 99     |  switch (op) {                                                                                                     |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 109    |  case: 4 --> (4.-Salir)                                                                                            |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 110    |  printf(""Saliendo...\n"");                                                                                        |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 111    |  break; --> termina swich(op)                                                                                      |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 115    |  Termina ciclo de control --> } while (op != 4); --> op = 4 --> false                                              |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 117    | return 0;                                                                                                          |    |          |         |       |         |               |        |       |           |           |       |           |           |
| 118    |  Termina main, fin del programa                                                                                    |    |          |         |       |         |               |        |       |           |           |       |           |           |
</br>

### Exclusion mutua

#### PE_ADekker

|    |                                                                                      |   |       |       | interesado[] |       |        |       | nodo1 |           |
|----|--------------------------------------------------------------------------------------|---|-------|-------|--------------|-------|--------|-------|-------|-----------|
| L  | Sentencia                                                                            | i | valor | turno | [ 0 ]      | [ 1 ]      | cabeza | temp  | valor | siguiente |
| 11 |  nodo* cabeza = NULL;                                                                |   |       |       |              |       | Null   |       |       |           |
| 13 |  int turno = 0;                                                                      |   |       | 0     |              |       |        |       |       |           |
| 14 |  int interesado[2] = {0, 0};                                                         |   |       |       | 0            | 0     |        |       |       |           |
| 77 |  Inicia int main() {                                                                 |   |       |       |              |       |        |       |       |           |
| 78 |  declarar  hilos --> pthread_t hilo_productor, hilo_consumidor;                      |   |       |       |              |       |        |       |       |           |
| 80 |  crear hilo_productor --> pthread_create(&hilo_productor, NULL, productor, NULL);    |   |       |       |              |       |        |       |       |           |
| 81 |  crear hilo_consumidor --> pthread_create(&hilo_consumidor, NULL, consumidor, NULL); |   |       |       |              |       |        |       |       |           |
| 83 |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);       |   |       |       |              |       |        |       |       |           |
| 36 |  inicia funcion  --> void* productor(void* arg) {                                    |   |       |       |              |       |        |       |       |           |
| 37 |  inicio ciclo for --> for (int i = 0; i < 5; i++) {                                  |   |       |       |              |       |        |       |       |           |
| 37 |  int i = 0                                                                           | 0 |       |       |              |       |        |       |       |           |
| 37 |  i < 5 --> i=0 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 38 |  interesado[0] = 1;                                                                  |   |       |       | 1            | 0     |        |       |       |           |
| 39 |  while (interesado[1]) { --> interesado[1] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 47 |  insertar_final(i + 1);                                                              |   |       |       |              |       |        |       |       |           |
| 16 |  inicia metodo --> void insertar_final(int valor) {                                  |   |       |       |              |       |        |       |       |           |
| 16 |  int valor;                                                                          |   | 1     |       |              |       |        |       |       |           |
| 17 |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                          |   |       |       |              |       |        |       |       |           |
| 18 |  nuevo->valor = valor;                                                               |   |       |       |              |       |        |       | 1     |           |
| 19 |  nuevo->siguiente = cabeza;                                                          |   |       |       |              |       |        |       |       | Null      |
| 20 |  cabeza = nuevo;                                                                     |   |       |       |              |       | nodo1  |       |       |           |
| 21 |  printf(""Productor produjo: %d\n"", valor);                                         |   | 1     |       |              |       |        |       |       |           |
| 22 |  termina metodo  --> insertar_final                                                  |   |       |       |              |       |        |       |       |           |
| 49 |  turno = 1;                                                                          |   |       | 1     |              |       |        |       |       |           |
| 50 |  interesado[0] = 0;                                                                  |   |       |       | 0            |       |        |       |       |           |
| 51 |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                  |   |       |       |              |       |        |       |       |           |
| 84 |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);     |   |       |       |              |       |        |       |       |           |
| 57 |  inicia funcion --> void* consumidor(void* arg) {                                    |   |       |       |              |       |        |       |       |           |
| 58 |  inicio ciclo for --> for (int i = 0; i < 5; i++) {                                  |   |       |       |              |       |        |       |       |           |
| 58 |  int i = 0                                                                           | 0 |       |       |              |       |        |       |       |           |
| 58 |  i < 5 --> i=0 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 59 |  interesado[1] = 1;                                                                  |   |       |       |              | 1     |        |       |       |           |
| 60 |  while (interesado[0]) { --> interesado[0] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 68 |  atender_proceso();                                                                  |   |       |       |              |       |        |       |       |           |
| 24 |  inicia metodo --> void atender_proceso() {                                          |   |       |       |              |       |        |       |       |           |
| 25 |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                   |   |       |       |              |       |        |       |       |           |
| 26 |  nodo* temp = cabeza;                                                                |   |       |       |              |       |        | nodo1 |       |           |
| 27 |  cabeza = cabeza->siguiente;                                                         |   |       |       |              |       | Null   |       |       |           |
| 28 |  printf(""Consumidor atendió: %d\n"", temp->valor);                                  |   |       |       |              |       |        |       |       |           |
| 29 |  free(temp);                                                                         |   |       |       |              |       |        |       | free  | free      |
| 33 |  termina metodo  --> atender_proceso                                                 |   |       |       |              |       |        |       |       |           |
| 70 |  turno = 0;                                                                          |   |       | 0     |              |       |        |       |       |           |
| 71 |  interesado[1] = 0;                                                                  |   |       |       |              | 0     |        |       |       |           |
| 72 |  sleep(2);  tiempo de espera permite al hilo_productor trabajar                      |   |       |       |              |       |        |       |       |           |
| 83 |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);       |   |       |       |              |       |        |       |       |           |
| 37 |  i++                                                                                 | 1 |       |       |              |       |        |       |       |           |
| 37 |  i < 5 --> i=1 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 38 |  interesado[0] = 1;                                                                  |   |       |       | 1            |       |        |       |       |           |
| 39 |  while (interesado[1]) { --> interesado[1] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 47 |  insertar_final(i + 1);                                                              |   |       |       |              |       |        |       |       |           |
| 16 |  inicia metodo --> void insertar_final(int valor) {                                  |   |       |       |              |       |        |       |       |           |
| 16 |  int valor;                                                                          |   | 2     |       |              |       |        |       |       |           |
| 17 |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                          |   |       |       |              |       |        |       |       |           |
| 18 |  nuevo->valor = valor;                                                               |   |       |       |              |       |        |       | 2     |           |
| 19 |  nuevo->siguiente = cabeza;                                                          |   |       |       |              |       |        |       |       | Null      |
| 20 |  cabeza = nuevo;                                                                     |   |       |       |              |       | nodo1  |       |       |           |
| 21 |  printf(""Productor produjo: %d\n"", valor);                                         |   | 2     |       |              |       |        |       |       |           |
| 22 |  termina metodo  --> insertar_final                                                  |   |       |       |              |       |        |       |       |           |
| 49 |  turno = 1;                                                                          |   |       | 1     |              |       |        |       |       |           |
| 50 |  interesado[0] = 0;                                                                  |   |       |       | 0            |       |        |       |       |           |
| 51 |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                  |   |       |       |              |       |        |       |       |           |
| 84 |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);     |   |       |       |              |       |        |       |       |           |
| 58 |  i++                                                                                 | 1 |       |       |              |       |        |       |       |           |
| 58 |  i < 5 --> i=1 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 59 |  interesado[1] = 1;                                                                  |   |       |       |              | 1     |        |       |       |           |
| 60 |  while (interesado[0]) { --> interesado[0] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 68 |  atender_proceso();                                                                  |   |       |       |              |       |        |       |       |           |
| 24 |  inicia metodo --> void atender_proceso() {                                          |   |       |       |              |       |        |       |       |           |
| 25 |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                   |   |       |       |              |       |        |       |       |           |
| 26 |  nodo* temp = cabeza;                                                                |   |       |       |              |       |        | nodo1 |       |           |
| 27 |  cabeza = cabeza->siguiente;                                                         |   |       |       |              |       | Null   |       |       |           |
| 28 |  printf(""Consumidor atendió: %d\n"", temp->valor);                                  |   |       |       |              |       |        |       |       |           |
| 29 |  free(temp);                                                                         |   |       |       |              |       |        |       | free  | free      |
| 33 |  termina metodo  --> atender_proceso                                                 |   |       |       |              |       |        |       |       |           |
| 70 |  turno = 0;                                                                          |   |       | 0     |              |       |        |       |       |           |
| 71 |  interesado[1] = 0;                                                                  |   |       |       |              | 0     |        |       |       |           |
| 72 |  sleep(2);  tiempo de espera permite al hilo_productor trabajar                      |   |       |       |              |       |        |       |       |           |
| 37 |  i++                                                                                 | 2 |       |       |              |       |        |       |       |           |
| 37 |  i < 5 --> i=2 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 38 |  interesado[0] = 1;                                                                  |   |       |       | 1            |       |        |       |       |           |
| 39 |  while (interesado[1]) { --> interesado[1] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 47 |  insertar_final(i + 1);                                                              |   |       |       |              |       |        |       |       |           |
| 16 |  inicia metodo --> void insertar_final(int valor) {                                  |   |       |       |              |       |        |       |       |           |
| 16 |  int valor;                                                                          |   | 3     |       |              |       |        |       |       |           |
| 17 |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                          |   |       |       |              |       |        |       |       |           |
| 18 |  nuevo->valor = valor;                                                               |   |       |       |              |       |        |       | 3     |           |
| 19 |  nuevo->siguiente = cabeza;                                                          |   |       |       |              |       |        |       |       | Null      |
| 20 |  cabeza = nuevo;                                                                     |   |       |       |              |       | nodo1  |       |       |           |
| 21 |  printf(""Productor produjo: %d\n"", valor);                                         |   | 3     |       |              |       |        |       |       |           |
| 22 |  termina metodo  --> insertar_final                                                  |   |       |       |              |       |        |       |       |           |
| 49 |  turno = 1;                                                                          |   |       | 1     |              |       |        |       |       |           |
| 50 |  interesado[0] = 0;                                                                  |   |       |       | 0            |       |        |       |       |           |
| 51 |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                  |   |       |       |              |       |        |       |       |           |
| 84 |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);     |   |       |       |              |       |        |       |       |           |
| 58 |  i++                                                                                 | 2 |       |       |              |       |        |       |       |           |
| 58 |  i < 5 --> i=2 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 59 |  interesado[1] = 1;                                                                  |   |       |       |              | 1     |        |       |       |           |
| 60 |  while (interesado[0]) { --> interesado[0] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 68 |  atender_proceso();                                                                  |   |       |       |              |       |        |       |       |           |
| 24 |  inicia metodo --> void atender_proceso() {                                          |   |       |       |              |       |        |       |       |           |
| 25 |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                   |   |       |       |              |       |        |       |       |           |
| 26 |  nodo* temp = cabeza;                                                                |   |       |       |              |       |        | nodo1 |       |           |
| 27 |  cabeza = cabeza->siguiente;                                                         |   |       |       |              |       | Null   |       |       |           |
| 28 |  printf(""Consumidor atendió: %d\n"", temp->valor);                                  |   |       |       |              |       |        |       |       |           |
| 29 |  free(temp);                                                                         |   |       |       |              |       |        |       | free  | free      |
| 33 |  termina metodo  --> atender_proceso                                                 |   |       |       |              |       |        |       |       |           |
| 70 |  turno = 0;                                                                          |   |       | 0     |              |       |        |       |       |           |
| 71 |  interesado[1] = 0;                                                                  |   |       |       |              | 0     |        |       |       |           |
| 72 |  sleep(2);  tiempo de espera permite al hilo_productor trabajar                      |   |       |       |              |       |        |       |       |           |
| 37 |  i++                                                                                 | 3 |       |       |              |       |        |       |       |           |
| 37 |  i < 5 --> i=3 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 38 |  interesado[0] = 1;                                                                  |   |       |       | 1            |       |        |       |       |           |
| 39 |  while (interesado[1]) { --> interesado[1] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 47 |  insertar_final(i + 1);                                                              |   |       |       |              |       |        |       |       |           |
| 16 |  inicia metodo --> void insertar_final(int valor) {                                  |   |       |       |              |       |        |       |       |           |
| 16 |  int valor;                                                                          |   | 4     |       |              |       |        |       |       |           |
| 17 |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                          |   |       |       |              |       |        |       |       |           |
| 18 |  nuevo->valor = valor;                                                               |   |       |       |              |       |        |       | 4     |           |
| 19 |  nuevo->siguiente = cabeza;                                                          |   |       |       |              |       |        |       |       | Null      |
| 20 |  cabeza = nuevo;                                                                     |   |       |       |              |       | nodo1  |       |       |           |
| 21 |  printf(""Productor produjo: %d\n"", valor);                                         |   | 4     |       |              |       |        |       |       |           |
| 22 |  termina metodo  --> insertar_final                                                  |   |       |       |              |       |        |       |       |           |
| 49 |  turno = 1;                                                                          |   |       | 1     |              |       |        |       |       |           |
| 50 |  interesado[0] = 0;                                                                  |   |       |       | 0            |       |        |       |       |           |
| 51 |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                  |   |       |       |              |       |        |       |       |           |
| 84 |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);     |   |       |       |              |       |        |       |       |           |
| 58 |  i++                                                                                 | 3 |       |       |              |       |        |       |       |           |
| 58 |  i < 5 --> i=3 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 59 |  interesado[1] = 1;                                                                  |   |       |       |              | 1     |        |       |       |           |
| 60 |  while (interesado[0]) { --> interesado[0] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 68 |  atender_proceso();                                                                  |   |       |       |              |       |        |       |       |           |
| 24 |  inicia metodo --> void atender_proceso() {                                          |   |       |       |              |       |        |       |       |           |
| 25 |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                   |   |       |       |              |       |        |       |       |           |
| 26 |  nodo* temp = cabeza;                                                                |   |       |       |              |       |        | nodo1 |       |           |
| 27 |  cabeza = cabeza->siguiente;                                                         |   |       |       |              |       | Null   |       |       |           |
| 28 |  printf(""Consumidor atendió: %d\n"", temp->valor);                                  |   |       |       |              |       |        |       |       |           |
| 29 |  free(temp);                                                                         |   |       |       |              |       |        |       | free  | free      |
| 33 |  termina metodo  --> atender_proceso                                                 |   |       |       |              |       |        |       |       |           |
| 70 |  turno = 0;                                                                          |   |       | 0     |              |       |        |       |       |           |
| 71 |  interesado[1] = 0;                                                                  |   |       |       |              | 0     |        |       |       |           |
| 72 |  sleep(2);  tiempo de espera permite al hilo_productor trabajar                      |   |       |       |              |       |        |       |       |           |
| 37 |  i++                                                                                 | 4 |       |       |              |       |        |       |       |           |
| 37 |  i < 5 --> i=4 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 38 |  interesado[0] = 1;                                                                  |   |       |       | 1            |       |        |       |       |           |
| 39 |  while (interesado[1]) { --> interesado[1] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 47 |  insertar_final(i + 1);                                                              |   |       |       |              |       |        |       |       |           |
| 16 |  inicia metodo --> void insertar_final(int valor) {                                  |   |       |       |              |       |        |       |       |           |
| 16 |  int valor;                                                                          |   | 5     |       |              |       |        |       |       |           |
| 17 |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                          |   |       |       |              |       |        |       |       |           |
| 18 |  nuevo->valor = valor;                                                               |   |       |       |              |       |        |       | 5     |           |
| 19 |  nuevo->siguiente = cabeza;                                                          |   |       |       |              |       |        |       |       | Null      |
| 20 |  cabeza = nuevo;                                                                     |   |       |       |              |       | nodo1  |       |       |           |
| 21 |  printf(""Productor produjo: %d\n"", valor);                                         |   | 5     |       |              |       |        |       |       |           |
| 22 |  termina metodo  --> insertar_final                                                  |   |       |       |              |       |        |       |       |           |
| 49 |  turno = 1;                                                                          |   |       | 1     |              |       |        |       |       |           |
| 50 |  interesado[0] = 0;                                                                  |   |       |       | 0            |       |        |       |       |           |
| 51 |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                  |   |       |       |              |       |        |       |       |           |
| 84 |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);     |   |       |       |              |       |        |       |       |           |
| 58 |  i++                                                                                 | 4 |       |       |              |       |        |       |       |           |
| 58 |  i < 5 --> i=4 --> true                                                              |   |       |       |              |       |        |       |       |           |
| 59 |  interesado[1] = 1;                                                                  |   |       |       |              | 1     |        |       |       |           |
| 60 |  while (interesado[0]) { --> interesado[0] = 0 --> false                             |   |       |       |              |       |        |       |       |           |
| 68 |  atender_proceso();                                                                  |   |       |       |              |       |        |       |       |           |
| 24 |  inicia metodo --> void atender_proceso() {                                          |   |       |       |              |       |        |       |       |           |
| 25 |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                   |   |       |       |              |       |        |       |       |           |
| 26 |  nodo* temp = cabeza;                                                                |   |       |       |              |       |        | nodo1 |       |           |
| 27 |  cabeza = cabeza->siguiente;                                                         |   |       |       |              |       | Null   |       |       |           |
| 28 |  printf(""Consumidor atendió: %d\n"", temp->valor);                                  |   |       |       |              |       |        |       |       |           |
| 29 |  free(temp);                                                                         |   |       |       |              |       |        |       | free  | free      |
| 33 |  termina metodo  --> atender_proceso                                                 |   |       |       |              |       |        |       |       |           |
| 70 |  turno = 0;                                                                          |   |       | 0     |              |       |        |       |       |           |
| 71 |  interesado[1] = 0;                                                                  |   |       |       |              | 0     |        |       |       |           |
| 72 |  sleep(2);  tiempo de espera permite al hilo_productor trabajar                      |   |       |       |              |       |        |       |       |           |
| 37 |  i++                                                                                 | 5 |       |       |              |       |        |       |       |           |
| 37 |  i < 5 --> i=5 --> false                                                             |   |       |       |              |       |        |       |       |           |
| 52 |  termina ciclo for --> for (int i = 0; i < 5; i++) {                                 |   |       |       |              |       |        |       |       |           |
| 53 |  finaliza hilo_productor --> return NULL;                                            |   |       |       |              |       |        |       |       |           |
| 54 |  termina funcion --> productor                                                       |   |       |       |              |       |        |       |       |           |
| 84 |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);     |   |       |       |              |       |        |       |       |           |
| 58 |  i++                                                                                 | 5 |       |       |              |       |        |       |       |           |
| 58 |  i < 5 --> i=5 --> false                                                             |   |       |       |              |       |        |       |       |           |
| 73 |  termina ciclo for --> for (int i = 0; i < 5; i++) {                                 |   |       |       |              |       |        |       |       |           |
| 74 |  finaliza hilo_productor --> return NULL;                                            |   |       |       |              |       |        |       |       |           |
| 75 |  termina funcion --> consumidor                                                      |   |       |       |              |       |        |       |       |           |
| 86 |  return 0;                                                                           |   |       |       |              |       |        |       |       |           |
| 87 |  finalza main                                                                        |   |       |       |              |       |        |       |       |           |
|    |  Fin del programa             
</br>

#### PE_APeterson

| interesado[] |                                                                                                   |   |              | nodo1         |       |       | nodo2 |        |       |
|--------------|---------------------------------------------------------------------------------------------------|---|--------------|---------------|-------|-------|-------|--------|-------|
| L            | Sentencia                                                                                         | i | id_productor | id_consumidor | turno | [ 0 ] | [ 1 ] | cabeza | temp  | valor | prioridad | siguiente | valor | prioridad | siguiente |
| 14           |  nodo* cabeza = NULL;                                                                             |   |              |               |       |       |       | Null   |       |       |           |           |       |           |           |
| 15           |  int turno = 0;                                                                                   |   |              |               | 0     |       |       |        |       |       |           |           |       |           |           |
| 16           |  int interesado[2] = {0, 0};                                                                      |   |              |               |       | 0     | 0     |        |       |       |           |           |       |           |           |
| 71           |  Inicia int main() {                                                                              |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 72           |  iniciamos para crear pseudoaleatorios --> srand(time(NULL));                                     |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 73           |  declarar  hilos --> pthread_t hilo_productor, hilo_consumidor;                                   |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 74           |  int id_productor = 1, id_consumidor = 2;                                                         |   | 1            | 2             |       |       |       |        |       |       |           |           |       |           |           |
| 76           |  crear hilo_productor --> pthread_create(&hilo_productor, NULL, productor, id_productor);         |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 77           |  crear hilo_consumidor --> pthread_create(&hilo_consumidor, NULL, consumidor, id_consumidor);     |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 79           |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 31           |  inicia funcion  --> void* productor(void* arg) {                                                 |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 32           |  desenpaquetar id_productor --> int id = *(int*)arg;                                              |   | 1            |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  inicio ciclo for --> for (int i = 0; i < 5; i++) {                                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  int i = 0                                                                                        | 0 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i < 5 --> i=0 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 34           |  interesado[0] = 1;                                                                               |   |              |               |       | 1     |       |        |       |       |           |           |       |           |           |
| 35           |  turno = 1;                                                                                       |   |              |               | 1     |       |       |        |       |       |           |           |       |           |           |
| 36           |  while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 38           |  nodo* nuevo = genera_proceso(id * 10 + i);                                                       |   | 1            |               |       |       |       |        |       |       |           |           |       |           |           |
| 23           |  inicia metodo  --> nodo* genera_proceso(int id) { --> id = 10                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 24           |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                       |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 25           |  nuevo->valor = id;                                                                               |   |              |               |       |       |       |        |       | 10    |           |           |       |           |           |
| 26           |  nuevo->prioridad = numero_aleatorio();                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 19           |  inicia metodo  --> int numero_aleatorio() {                                                      |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 20           |  return (rand() % 4) + 1;                                                                         |   |              |               |       |       |       |        |       |       | 1         |           |       |           |           |
| 21           |  termina metodo  --> numero_aleatorio                                                             |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 27           |  nuevo->siguiente = NULL;                                                                         |   |              |               |       |       |       |        |       |       |           | Null      |       |           |           |
| 28           |  return nuevo;                                                                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 29           |  termina metodo  --> genera_proceso                                                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 39           |  nuevo->siguiente = cabeza;                                                                       |   |              |               |       |       |       |        |       |       |           | Null      |       |           |           |
| 40           |  cabeza = nuevo;                                                                                  |   |              |               |       |       |       | nodo1  |       |       |           |           |       |           |           |
| 41           |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 43           |  interesado[0] = 0;                                                                               |   |              |               |       | 0     |       |        |       |       |           |           |       |           |           |
| 44           |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 80           |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 49           |  inicia funcion --> void* consumidor(void* arg) {                                                 |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 50           |  desenpaquetar id_consumidor--> int id = *(int*)arg;                                              |   |              | 2             |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  inicio ciclo for --> for (int i = 0; i < 5; i++) {                                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  int i = 0                                                                                        | 0 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i < 5 --> i=0 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 52           |  interesado[1] = 1;                                                                               |   |              |               |       |       | 1     |        |       |       |           |           |       |           |           |
| 53           |  turno = 0;                                                                                       |   |              |               | 0     |       |       |        |       |       |           |           |       |           |           |
| 54           |  while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 56           |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                                |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 57           |  nodo* temp = cabeza;                                                                             |   |              |               |       |       |       |        | nodo1 |       |           |           |       |           |           |
| 58           |  cabeza = cabeza->siguiente;                                                                      |   |              |               |       |       |       | Null   |       |       |           |           |       |           |           |
| 59           |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 60           |  free(temp);                                                                                      |   |              |               |       |       |       |        |       | free  | free      | free      |       |           |           |
| 65           |  interesado[1] = 0;                                                                               |   |              |               |       |       | 0     |        |       |       |           |           |       |           |           |
| 66           |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 79           |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i++                                                                                              | 1 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i < 5 --> i=1 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 34           |  interesado[0] = 1;                                                                               |   |              |               |       | 1     |       |        |       |       |           |           |       |           |           |
| 35           |  turno = 1;                                                                                       |   |              |               | 1     |       |       |        |       |       |           |           |       |           |           |
| 36           |  while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 38           |  nodo* nuevo = genera_proceso(id * 10 + i);                                                       |   | 1            |               |       |       |       |        |       |       |           |           |       |           |           |
| 23           |  inicia metodo  --> nodo* genera_proceso(int id) { --> id = 11                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 24           |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                       |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 25           |  nuevo->valor = id;                                                                               |   |              |               |       |       |       |        |       | 11    |           |           |       |           |           |
| 26           |  nuevo->prioridad = numero_aleatorio();                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 19           |  inicia metodo  --> int numero_aleatorio() {                                                      |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 20           |  return (rand() % 4) + 1;                                                                         |   |              |               |       |       |       |        |       |       | 4         |           |       |           |           |
| 21           |  termina metodo  --> numero_aleatorio                                                             |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 27           |  nuevo->siguiente = NULL;                                                                         |   |              |               |       |       |       |        |       |       |           | Null      |       |           |           |
| 28           |  return nuevo;                                                                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 29           |  termina metodo  --> genera_proceso                                                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 39           |  nuevo->siguiente = cabeza;                                                                       |   |              |               |       |       |       |        |       |       |           | Null      |       |           |           |
| 40           |  cabeza = nuevo;                                                                                  |   |              |               |       |       |       | nodo1  |       |       |           |           |       |           |           |
| 41           |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 43           |  interesado[0] = 0;                                                                               |   |              |               |       | 0     |       |        |       |       |           |           |       |           |           |
| 44           |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 80           |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i++                                                                                              | 1 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i < 5 --> i=1 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 52           |  interesado[1] = 1;                                                                               |   |              |               |       |       | 1     |        |       |       |           |           |       |           |           |
| 53           |  turno = 0;                                                                                       |   |              |               | 0     |       |       |        |       |       |           |           |       |           |           |
| 54           |  while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 56           |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                                |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 57           |  nodo* temp = cabeza;                                                                             |   |              |               |       |       |       |        | nodo1 |       |           |           |       |           |           |
| 58           |  cabeza = cabeza->siguiente;                                                                      |   |              |               |       |       |       | Null   |       |       |           |           |       |           |           |
| 59           |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 60           |  free(temp);                                                                                      |   |              |               |       |       |       |        |       | free  | free      | free      |       |           |           |
| 65           |  interesado[1] = 0;                                                                               |   |              |               |       |       | 0     |        |       |       |           |           |       |           |           |
| 66           |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 79           |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i++                                                                                              | 2 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i < 5 --> i=2 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 34           |  interesado[0] = 1;                                                                               |   |              |               |       | 1     |       |        |       |       |           |           |       |           |           |
| 35           |  turno = 1;                                                                                       |   |              |               | 1     |       |       |        |       |       |           |           |       |           |           |
| 36           |  while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 38           |  nodo* nuevo = genera_proceso(id * 10 + i);                                                       |   | 1            |               |       |       |       |        |       |       |           |           |       |           |           |
| 23           |  inicia metodo  --> nodo* genera_proceso(int id) { --> id = 12                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 24           |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                       |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 25           |  nuevo->valor = id;                                                                               |   |              |               |       |       |       |        |       | 12    |           |           |       |           |           |
| 26           |  nuevo->prioridad = numero_aleatorio();                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 19           |  inicia metodo  --> int numero_aleatorio() {                                                      |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 20           |  return (rand() % 4) + 1;                                                                         |   |              |               |       |       |       |        |       |       | 4         |           |       |           |           |
| 21           |  termina metodo  --> numero_aleatorio                                                             |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 27           |  nuevo->siguiente = NULL;                                                                         |   |              |               |       |       |       |        |       |       |           | Null      |       |           |           |
| 28           |  return nuevo;                                                                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 29           |  termina metodo  --> genera_proceso                                                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 39           |  nuevo->siguiente = cabeza;                                                                       |   |              |               |       |       |       |        |       |       |           | Null      |       |           |           |
| 40           |  cabeza = nuevo;                                                                                  |   |              |               |       |       |       | nodo1  |       |       |           |           |       |           |           |
| 41           |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 43           |  interesado[0] = 0;                                                                               |   |              |               |       | 0     |       |        |       |       |           |           |       |           |           |
| 44           |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
|              |  Tiempo de espera insuficiente vuelve a ejecutarse hilo_productor                                 |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 79           |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i++                                                                                              | 3 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i < 5 --> i=3 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 34           |  interesado[0] = 1;                                                                               |   |              |               |       | 1     |       |        |       |       |           |           |       |           |           |
| 35           |  turno = 1;                                                                                       |   |              |               | 1     |       |       |        |       |       |           |           |       |           |           |
| 36           |  while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 38           |  nodo* nuevo = genera_proceso(id * 10 + i);                                                       |   | 1            |               |       |       |       |        |       |       |           |           |       |           |           |
| 23           |  inicia metodo  --> nodo* genera_proceso(int id) { --> id = 13                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 24           |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                       |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 25           |  nuevo->valor = id;                                                                               |   |              |               |       |       |       |        |       | 12    | 4         | Null      | 13    |           |           |
| 26           |  nuevo->prioridad = numero_aleatorio();                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 19           |  inicia metodo  --> int numero_aleatorio() {                                                      |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 20           |  return (rand() % 4) + 1;                                                                         |   |              |               |       |       |       |        |       |       |           |           |       | 2         |           |
| 21           |  termina metodo  --> numero_aleatorio                                                             |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 27           |  nuevo->siguiente = NULL;                                                                         |   |              |               |       |       |       |        |       |       |           |           |       |           | Null      |
| 28           |  return nuevo;                                                                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 29           |  termina metodo  --> genera_proceso                                                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 39           |  nuevo->siguiente = cabeza;                                                                       |   |              |               |       |       |       |        |       |       |           |           |       |           | nodo1     |
| 40           |  cabeza = nuevo;                                                                                  |   |              |               |       |       |       | nodo2  |       |       |           |           |       |           |           |
| 41           |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 43           |  interesado[0] = 0;                                                                               |   |              |               |       | 0     |       |        |       |       |           |           |       |           |           |
| 44           |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 80           |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i++                                                                                              | 2 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i < 5 --> i=2 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 52           |  interesado[1] = 1;                                                                               |   |              |               |       |       | 1     |        |       |       |           |           |       |           |           |
| 53           |  turno = 0;                                                                                       |   |              |               | 0     |       |       |        |       |       |           |           |       |           |           |
| 54           |  while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 56           |  if (cabeza != NULL) { --> cabeza = nodo2 --> true                                                |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 57           |  nodo* temp = cabeza;                                                                             |   |              |               |       |       |       |        | nodo2 |       |           |           |       |           |           |
| 58           |  cabeza = cabeza->siguiente;                                                                      |   |              |               |       |       |       | nodo1  |       |       |           |           |       |           |           |
| 59           |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 60           |  free(temp);                                                                                      |   |              |               |       |       |       |        |       |       |           |           | free  | free      | free      |
| 65           |  interesado[1] = 0;                                                                               |   |              |               |       |       | 0     |        |       |       |           |           |       |           |           |
| 66           |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 79           |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i++                                                                                              | 4 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i < 5 --> i=4 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 34           |  interesado[0] = 1;                                                                               |   |              |               |       | 1     |       |        |       |       |           |           |       |           |           |
| 35           |  turno = 1;                                                                                       |   |              |               | 1     |       |       |        |       |       |           |           |       |           |           |
| 36           |  while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 38           |  nodo* nuevo = genera_proceso(id * 10 + i);                                                       |   | 1            |               |       |       |       |        |       |       |           |           |       |           |           |
| 23           |  inicia metodo  --> nodo* genera_proceso(int id) { --> id = 14                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 24           |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                       |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 25           |  nuevo->valor = id;                                                                               |   |              |               |       |       |       |        |       |       |           |           | 14    |           |           |
| 26           |  nuevo->prioridad = numero_aleatorio();                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 19           |  inicia metodo  --> int numero_aleatorio() {                                                      |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 20           |  return (rand() % 4) + 1;                                                                         |   |              |               |       |       |       |        |       |       |           |           |       | 4         |           |
| 21           |  termina metodo  --> numero_aleatorio                                                             |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 27           |  nuevo->siguiente = NULL;                                                                         |   |              |               |       |       |       |        |       |       |           |           |       |           | Null      |
| 28           |  return nuevo;                                                                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 29           |  termina metodo  --> genera_proceso                                                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 39           |  nuevo->siguiente = cabeza;                                                                       |   |              |               |       |       |       |        |       |       |           |           |       |           | nodo1     |
| 40           |  cabeza = nuevo;                                                                                  |   |              |               |       |       |       | nodo2  |       |       |           |           |       |           |           |
| 41           |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 43           |  interesado[0] = 0;                                                                               |   |              |               |       | 0     |       |        |       |       |           |           |       |           |           |
| 44           |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 80           |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i++                                                                                              | 3 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i < 5 --> i=3 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 52           |  interesado[1] = 1;                                                                               |   |              |               |       |       | 1     |        |       |       |           |           |       |           |           |
| 53           |  turno = 0;                                                                                       |   |              |               | 0     |       |       |        |       |       |           |           |       |           |           |
| 54           |  while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 56           |  if (cabeza != NULL) { --> cabeza = nodo2 --> true                                                |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 57           |  nodo* temp = cabeza;                                                                             |   |              |               |       |       |       |        | nodo2 |       |           |           |       |           |           |
| 58           |  cabeza = cabeza->siguiente;                                                                      |   |              |               |       |       |       | nodo1  |       |       |           |           |       |           |           |
| 59           |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 60           |  free(temp);                                                                                      |   |              |               |       |       |       |        |       | 12    | 4         | Null      | free  | free      | free      |
| 65           |  interesado[1] = 0;                                                                               |   |              |               |       |       | 0     |        |       |       |           |           |       |           |           |
| 66           |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 79           |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i++                                                                                              | 5 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 33           |  i < 5 --> i=5 --> false                                                                          |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 45           |  termina ciclo for --> for (int i = 0; i < 5; i++) {                                              |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 46           |  finaliza hilo_productor --> return NULL;                                                         |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 47           |  termina funcion --> productor                                                                    |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 80           |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i++                                                                                              | 4 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i < 5 --> i=4 --> true                                                                           |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 52           |  interesado[1] = 1;                                                                               |   |              |               |       |       | 1     |        |       |       |           |           |       |           |           |
| 53           |  turno = 0;                                                                                       |   |              |               | 0     |       |       |        |       |       |           |           |       |           |           |
| 54           |  while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 56           |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                                |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 57           |  nodo* temp = cabeza;                                                                             |   |              |               |       |       |       |        | nodo1 |       |           |           |       |           |           |
| 58           |  cabeza = cabeza->siguiente;                                                                      |   |              |               |       |       |       | Null   |       |       |           |           |       |           |           |
| 59           |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad); |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 60           |  free(temp);                                                                                      |   |              |               |       |       |       |        |       | free  | free      | free      |       |           |           |
| 65           |  interesado[1] = 0;                                                                               |   |              |               |       |       | 0     |        |       |       |           |           |       |           |           |
| 66           |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                               |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 80           |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                  |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i++                                                                                              | 5 |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 51           |  i < 5 --> i=5 --> false                                                                          |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 67           |  termina ciclo for --> for (int i = 0; i < 5; i++) {                                              |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 68           |  finaliza hilo_consumidor --> return NULL;                                                        |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 69           |  termina funcion --> consumidor                                                                   |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 82           |  return 0;                                                                                        |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
| 83           |  finalza main                                                                                     |   |              |               |       |       |       |        |       |       |           |           |       |           |           |
|              |  Fin del programa                                                                                 |   |              |               |       |       |       |        |       |
</br>

#### PE_ALamport´s Backery

| turno |                                                                                                                             | eligiendo[] |              |               |     | nodo1 |       |       | nodo2  |       |       |
|-------|-----------------------------------------------------------------------------------------------------------------------------|-------------|--------------|---------------|-----|-------|-------|-------|--------|-------|-------|
| L     | Sentencia                                                                                                                   | i           | id_productor | id_consumidor | [0] | [1]   | [ 0 ] | [ 1 ] | cabeza | temp  | valor | prioridad | siguiente | valor | prioridad | siguiente |
| 14    |  nodo* cabeza = NULL;                                                                                                       |             |              |               |     |       |       |       | Null   |       |       |           |           |       |           |           |
| 16    |  int turno = [2];                                                                                                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 17    |  int eligiendo[2] = {0, 0};                                                                                                 |             |              |               |     |       | 0     | 0     |        |       |       |           |           |       |           |           |
| 81    |  Inicia int main() {                                                                                                        |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 82    |  iniciamos para crear pseudoaleatorios --> srand(time(NULL));                                                               |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 83    |  declarar  hilos --> pthread_t hilo_productor, hilo_consumidor;                                                             |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 84    |  int id_productor = 1, id_consumidor = 2;                                                                                   |             | 1            | 2             |     |       |       |       |        |       |       |           |           |       |           |           |
| 86    |  crear hilo_productor --> pthread_create(&hilo_productor, NULL, productor, id_productor);                                   |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 87    |  crear hilo_consumidor --> pthread_create(&hilo_consumidor, NULL, consumidor, id_consumidor);                               |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 89    |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 35    |  inicia funcion  --> void* productor(void* arg) {                                                                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 36    |  desenpaquetar id_productor --> int id = *(int*)arg;                                                                        |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  inicio ciclo for --> for (int i = 0; i < 5; i++) {                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  int i = 0                                                                                                                  | 0           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i < 5 --> i=0 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 38    |  eligiendo[0] = 1;                                                                                                          |             |              |               |     |       | 1     |       |        |       |       |           |           |       |           |           |
| 39    |  turno[0] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false                                          |             |              |               | 1   |       |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 40    |  eligiendo[0] = 0;                                                                                                          |             |              |               |     |       | 0     |       |        |       |       |           |           |       |           |           |
| 42    |  while (eligiendo[1]); --> eligiendo[1]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 43    |  while (turno[1] != 0 && (turno[1] < turno[0] || (turno[1] == turno[0] && 1 < 0))); --> turno[1]=null, turno[0]=1 --> false |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 45    |  nodo* nuevo = genera_proceso(id * 10 + i);                                                                                 |             | 1            |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 23    |  inicia metodo  --> nodo* genera_proceso(int id) { --> id=10                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 24    |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                                                 |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 25    |  nuevo->valor = id;                                                                                                         |             |              |               |     |       |       |       |        |       | 10    |           |           |       |           |           |
| 26    |  nuevo->prioridad = numero_aleatorio();                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 19    |  inicia metodo  --> int numero_aleatorio() {                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 20    |  return (rand() % 4) + 1;                                                                                                   |             |              |               |     |       |       |       |        |       |       | 3         |           |       |           |           |
| 21    |  termina metodo  --> numero_aleatorio                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 27    |  nuevo->siguiente = NULL;                                                                                                   |             |              |               |     |       |       |       |        |       |       |           | Null      |       |           |           |
| 28    |  return nuevo;                                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 29    |  termina metodo  --> genera_proceso                                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 46    |  nuevo->siguiente = cabeza;                                                                                                 |             |              |               |     |       |       |       |        |       |       |           | Null      |       |           |           |
| 47    |  cabeza = nuevo;                                                                                                            |             |              |               |     |       |       |       | nodo1  |       |       |           |           |       |           |           |
| 48    |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 50    |  turno[0] = 0;                                                                                                              |             |              |               | 0   |       |       |       |        |       |       |           |           |       |           |           |
| 51    |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 90    |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                                            |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 56    |  inicia funcion --> void* consumidor(void* arg) {                                                                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 57    |  desenpaquetar id_consumidor--> int id = *(int*)arg;                                                                        |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  inicio ciclo for --> for (int i = 0; i < 5; i++) {                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  int i = 0                                                                                                                  | 0           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i < 5 --> i=0 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 59    |  eligiendo[1] = 1;                                                                                                          |             |              |               |     |       |       | 1     |        |       |       |           |           |       |           |           |
| 60    |  turno[1] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=0, turno[1]=null --> false                                  |             |              |               |     | 1     |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 61    |  eligiendo[1] = 0;                                                                                                          |             |              |               |     |       |       | 0     |        |       |       |           |           |       |           |           |
| 63    |  while (eligiendo[0]); --> eligiendo[0]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 64    |  while (turno[0] != 0 && (turno[0] < turno[1] || (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 66    |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                                                          |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 67    |  nodo* temp = cabeza;                                                                                                       |             |              |               |     |       |       |       |        | nodo1 |       |           |           |       |           |           |
| 68    |  cabeza = cabeza->siguiente;                                                                                                |             |              |               |     |       |       |       | Null   |       |       |           |           |       |           |           |
| 69    |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 70    |  free(temp);                                                                                                                |             |              |               |     |       |       |       |        |       | free  | free      | free      |       |           |           |
| 75    |  turno[1] = 0;                                                                                                              |             |              |               |     | 0     |       |       |        |       |       |           |           |       |           |           |
| 76    |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 89    |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i++                                                                                                                        | 1           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i < 5 --> i=1 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 38    |  eligiendo[0] = 1;                                                                                                          |             |              |               |     |       | 1     |       |        |       |       |           |           |       |           |           |
| 39    |  turno[0] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false                                          |             |              |               | 1   |       |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 40    |  eligiendo[0] = 0;                                                                                                          |             |              |               |     |       | 0     |       |        |       |       |           |           |       |           |           |
| 42    |  while (eligiendo[1]); --> eligiendo[1]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 43    |  while (turno[1] != 0 && (turno[1] < turno[0] || (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 45    |  nodo* nuevo = genera_proceso(id * 10 + i);                                                                                 |             | 1            |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 23    |  inicia metodo  --> nodo* genera_proceso(int id) { --> id=11                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 24    |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                                                 |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 25    |  nuevo->valor = id;                                                                                                         |             |              |               |     |       |       |       |        |       | 11    |           |           |       |           |           |
| 26    |  nuevo->prioridad = numero_aleatorio();                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 19    |  inicia metodo  --> int numero_aleatorio() {                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 20    |  return (rand() % 4) + 1;                                                                                                   |             |              |               |     |       |       |       |        |       |       | 1         |           |       |           |           |
| 21    |  termina metodo  --> numero_aleatorio                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 27    |  nuevo->siguiente = NULL;                                                                                                   |             |              |               |     |       |       |       |        |       |       |           | Null      |       |           |           |
| 28    |  return nuevo;                                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 29    |  termina metodo  --> genera_proceso                                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 46    |  nuevo->siguiente = cabeza;                                                                                                 |             |              |               |     |       |       |       |        |       |       |           | Null      |       |           |           |
| 47    |  cabeza = nuevo;                                                                                                            |             |              |               |     |       |       |       | nodo1  |       |       |           |           |       |           |           |
| 48    |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 50    |  turno[0] = 0;                                                                                                              |             |              |               | 0   |       |       |       |        |       |       |           |           |       |           |           |
| 51    |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 90    |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                                            |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i++                                                                                                                        | 1           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i < 5 --> i=1 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 59    |  eligiendo[1] = 1;                                                                                                          |             |              |               |     |       |       | 1     |        |       |       |           |           |       |           |           |
| 60    |  turno[1] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false                                          |             |              |               |     | 1     |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 61    |  eligiendo[1] = 0;                                                                                                          |             |              |               |     |       |       | 0     |        |       |       |           |           |       |           |           |
| 63    |  while (eligiendo[0]); --> eligiendo[0]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 64    |  while (turno[0] != 0 && (turno[0] < turno[1] || (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 66    |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                                                          |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 67    |  nodo* temp = cabeza;                                                                                                       |             |              |               |     |       |       |       |        | nodo1 |       |           |           |       |           |           |
| 68    |  cabeza = cabeza->siguiente;                                                                                                |             |              |               |     |       |       |       | Null   |       |       |           |           |       |           |           |
| 69    |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 70    |  free(temp);                                                                                                                |             |              |               |     |       |       |       |        |       | free  | free      | free      |       |           |           |
| 75    |  turno[1] = 0;                                                                                                              |             |              |               |     | 0     |       |       |        |       |       |           |           |       |           |           |
| 76    |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 89    |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i++                                                                                                                        | 2           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i < 5 --> i=2 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 38    |  eligiendo[0] = 1;                                                                                                          |             |              |               |     |       | 1     |       |        |       |       |           |           |       |           |           |
| 39    |  turno[0] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false                                          |             |              |               | 1   |       |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 40    |  eligiendo[0] = 0;                                                                                                          |             |              |               |     |       | 0     |       |        |       |       |           |           |       |           |           |
| 42    |  while (eligiendo[1]); --> eligiendo[1]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 43    |  while (turno[1] != 0 && (turno[1] < turno[0] || (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 45    |  nodo* nuevo = genera_proceso(id * 10 + i);                                                                                 |             | 1            |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 23    |  inicia metodo  --> nodo* genera_proceso(int id) { --> id=12                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 24    |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                                                 |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 25    |  nuevo->valor = id;                                                                                                         |             |              |               |     |       |       |       |        |       | 12    |           |           |       |           |           |
| 26    |  nuevo->prioridad = numero_aleatorio();                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 19    |  inicia metodo  --> int numero_aleatorio() {                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 20    |  return (rand() % 4) + 1;                                                                                                   |             |              |               |     |       |       |       |        |       |       | 1         |           |       |           |           |
| 21    |  termina metodo  --> numero_aleatorio                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 27    |  nuevo->siguiente = NULL;                                                                                                   |             |              |               |     |       |       |       |        |       |       |           | Null      |       |           |           |
| 28    |  return nuevo;                                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 29    |  termina metodo  --> genera_proceso                                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 46    |  nuevo->siguiente = cabeza;                                                                                                 |             |              |               |     |       |       |       |        |       |       |           | Null      |       |           |           |
| 47    |  cabeza = nuevo;                                                                                                            |             |              |               |     |       |       |       | Nodo1  |       |       |           |           |       |           |           |
| 48    |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 50    |  turno[0] = 0;                                                                                                              |             |              |               | 0   |       |       |       |        |       |       |           |           |       |           |           |
| 51    |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
|       |  Tiempo de espera insuficiente vuelve a ejecutarse hilo_productor                                                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 89    |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i++                                                                                                                        | 3           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i < 5 --> i=3 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 38    |  eligiendo[0] = 1;                                                                                                          |             |              |               |     |       | 1     |       |        |       |       |           |           |       |           |           |
| 39    |  turno[0] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false                                          |             |              |               | 1   |       |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 40    |  eligiendo[0] = 0;                                                                                                          |             |              |               |     |       | 0     |       |        |       |       |           |           |       |           |           |
| 42    |  while (eligiendo[1]); --> eligiendo[1]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 43    |  while (turno[1] != 0 && (turno[1] < turno[0] || (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 45    |  nodo* nuevo = genera_proceso(id * 10 + i);                                                                                 |             | 1            |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 23    |  inicia metodo  --> nodo* genera_proceso(int id) { --> id=13                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 24    |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                                                 |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 25    |  nuevo->valor = id;                                                                                                         |             |              |               |     |       |       |       |        |       |       |           |           | 13    |           |           |
| 26    |  nuevo->prioridad = numero_aleatorio();                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 19    |  inicia metodo  --> int numero_aleatorio() {                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 20    |  return (rand() % 4) + 1;                                                                                                   |             |              |               |     |       |       |       |        |       |       |           |           |       | 2         |           |
| 21    |  termina metodo  --> numero_aleatorio                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 27    |  nuevo->siguiente = NULL;                                                                                                   |             |              |               |     |       |       |       |        |       |       |           |           |       |           | Null      |
| 28    |  return nuevo;                                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 29    |  termina metodo  --> genera_proceso                                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 46    |  nuevo->siguiente = cabeza;                                                                                                 |             |              |               |     |       |       |       |        |       |       |           |           |       |           | Nodo1     |
| 47    |  cabeza = nuevo;                                                                                                            |             |              |               |     |       |       |       | Nodo2  |       |       |           |           |       |           |           |
| 48    |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 50    |  turno[0] = 0;                                                                                                              |             |              |               | 0   |       |       |       |        |       |       |           |           |       |           |           |
| 51    |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 90    |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                                            |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i++                                                                                                                        | 2           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i < 5 --> i=2 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 59    |  eligiendo[1] = 1;                                                                                                          |             |              |               |     |       |       | 1     |        |       |       |           |           |       |           |           |
| 60    |  turno[1] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false                                          |             |              |               |     | 1     |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 61    |  eligiendo[1] = 0;                                                                                                          |             |              |               |     |       |       | 0     |        |       |       |           |           |       |           |           |
| 63    |  while (eligiendo[0]); --> eligiendo[0]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 64    |  while (turno[0] != 0 && (turno[0] < turno[1] || (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 66    |  if (cabeza != NULL) { --> cabeza = nodo2 --> true                                                                          |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 67    |  nodo* temp = cabeza;                                                                                                       |             |              |               |     |       |       |       |        | Nodo2 |       |           |           |       |           |           |
| 68    |  cabeza = cabeza->siguiente;                                                                                                |             |              |               |     |       |       |       | Nodo1  |       |       |           |           |       |           |           |
| 69    |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 70    |  free(temp);                                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           | free  | free      | free      |
| 75    |  turno[1] = 0;                                                                                                              |             |              |               |     | 0     |       |       |        |       |       |           |           |       |           |           |
| 76    |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 89    |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i++                                                                                                                        | 4           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i < 5 --> i=4 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 38    |  eligiendo[0] = 1;                                                                                                          |             |              |               |     |       | 1     |       |        |       |       |           |           |       |           |           |
| 39    |  turno[0] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false                                          |             |              |               | 1   |       |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 40    |  eligiendo[0] = 0;                                                                                                          |             |              |               |     |       | 0     |       |        |       |       |           |           |       |           |           |
| 42    |  while (eligiendo[1]); --> eligiendo[1]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 43    |  while (turno[1] != 0 && (turno[1] < turno[0] || (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 45    |  nodo* nuevo = genera_proceso(id * 10 + i);                                                                                 |             | 1            |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 23    |  inicia metodo  --> nodo* genera_proceso(int id) { --> id=14                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 24    |  nodo* nuevo = (nodo*)malloc(sizeof(nodo));                                                                                 |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 25    |  nuevo->valor = id;                                                                                                         |             |              |               |     |       |       |       |        |       |       |           |           | 14    |           |           |
| 26    |  nuevo->prioridad = numero_aleatorio();                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 19    |  inicia metodo  --> int numero_aleatorio() {                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 20    |  return (rand() % 4) + 1;                                                                                                   |             |              |               |     |       |       |       |        |       |       |           |           |       | 3         |           |
| 21    |  termina metodo  --> numero_aleatorio                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 27    |  nuevo->siguiente = NULL;                                                                                                   |             |              |               |     |       |       |       |        |       |       |           |           |       |           | Null      |
| 28    |  return nuevo;                                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 29    |  termina metodo  --> genera_proceso                                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 46    |  nuevo->siguiente = cabeza;                                                                                                 |             |              |               |     |       |       |       |        |       |       |           |           |       |           | Nodo1     |
| 47    |  cabeza = nuevo;                                                                                                            |             |              |               |     |       |       |       | Nodo2  |       |       |           |           |       |           |           |
| 48    |  printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 50    |  turno[0] = 0;                                                                                                              |             |              |               | 0   |       |       |       |        |       |       |           |           |       |           |           |
| 51    |  sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 90    |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                                            |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i++                                                                                                                        | 3           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i < 5 --> i=3 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 59    |  eligiendo[1] = 1;                                                                                                          |             |              |               |     |       |       | 1     |        |       |       |           |           |       |           |           |
| 60    |  turno[1] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false                                          |             |              |               |     | 1     |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 61    |  eligiendo[1] = 0;                                                                                                          |             |              |               |     |       |       | 0     |        |       |       |           |           |       |           |           |
| 63    |  while (eligiendo[0]); --> eligiendo[0]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 64    |  while (turno[0] != 0 && (turno[0] < turno[1] || (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 66    |  if (cabeza != NULL) { --> cabeza = nodo2 --> true                                                                          |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 67    |  nodo* temp = cabeza;                                                                                                       |             |              |               |     |       |       |       |        | Nodo2 |       |           |           |       |           |           |
| 68    |  cabeza = cabeza->siguiente;                                                                                                |             |              |               |     |       |       |       | Nodo1  |       |       |           |           |       |           |           |
| 69    |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 70    |  free(temp);                                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           | free  | free      | free      |
| 75    |  turno[1] = 0;                                                                                                              |             |              |               |     | 0     |       |       |        |       |       |           |           |       |           |           |
| 76    |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 89    |  esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i++                                                                                                                        | 5           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 37    |  i < 5 --> i=5 --> false                                                                                                    |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 52    |  termina ciclo for --> for (int i = 0; i < 5; i++) {                                                                        |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 53    |  finaliza hilo_productor --> return NULL;                                                                                   |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 54    |  termina funcion --> productor                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 90    |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                                            |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i++                                                                                                                        | 4           |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i < 5 --> i=4 --> true                                                                                                     |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 59    |  eligiendo[1] = 1;                                                                                                          |             |              |               |     |       |       | 1     |        |       |       |           |           |       |           |           |
| 60    |  turno[1] = max_turno() + 1;                                                                                                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 31    |  inicia metodo  --> int max_turno() {                                                                                       |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 32    |  return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false                                          |             |              |               |     | 1     |       |       |        |       |       |           |           |       |           |           |
| 33    |  termina metodo  --> max_turno                                                                                              |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 61    |  eligiendo[1] = 0;                                                                                                          |             |              |               |     |       |       | 0     |        |       |       |           |           |       |           |           |
| 63    |  while (eligiendo[0]); --> eligiendo[0]=0 --> false                                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 64    |  while (turno[0] != 0 && (turno[0] < turno[1] || (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false                |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 66    |  if (cabeza != NULL) { --> cabeza = nodo1 --> true                                                                          |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 67    |  nodo* temp = cabeza;                                                                                                       |             |              |               |     |       |       |       |        | nodo1 |       |           |           |       |           |           |
| 68    |  cabeza = cabeza->siguiente;                                                                                                |             |              |               |     |       |       |       | Null   |       |       |           |           |       |           |           |
| 69    |  printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);                           |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 70    |  free(temp);                                                                                                                |             |              |               |     |       |       |       |        |       | free  | free      | free      |       |           |           |
| 75    |  turno[1] = 0;                                                                                                              |             |              |               |     | 0     |       |       |        |       |       |           |           |       |           |           |
| 76    |  sleep(2); -->  tiempo de espera permite al hilo_productor trabajar                                                         |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 90    |  esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);                                            |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i++                                                                                                                        |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 58    |  i < 5 --> i=5 --> false                                                                                                    |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 77    |  termina ciclo for --> for (int i = 0; i < 5; i++) {                                                                        |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 78    |  finaliza hilo_consumidor --> return NULL;                                                                                  |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 79    |  termina funcion --> consumidor                                                                                             |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 92    |  return 0;                                                                                                                  |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
| 93    |  finalza main                                                                                                               |             |              |               |     |       |       |       |        |       |       |           |           |       |           |           |
|       |  Fin del programa                                                                                                           |             |              |               |     |       |       |       |        |       |       |
</br>

---
## Administración de Memoria
</br>

### 3.1 Política y filosofía

**1. ¿Cuál es la diferencia entre fragmentación interna y externa? Explica cómo cada una afecta el rendimiento de la memoria**

El primer sistema de direccionamiento que se usó fue el CHS (cilindro-cabeza-sector),
ya que con estos tres valores se puede situar un dato cualquiera del disco. Más adelante se
creó otro sistema más sencillo: LBA (direccionamiento lógico de bloques), que consiste en
dividir la memoria en sectores y asignar a cada uno un único número.
 
Un aspecto muy importante es la elección del tamaño del bloque, para esto hay que
entender que si el tamaño del bloque es muy grande, aun cuando el proceso sea de un tamaño
muy pequeño, se le asignará el bloque entero con lo que se desperdiciará gran parte de la
capacidad del disco (fragmentación interna).
 
Por otra parte, si el tamaño del bloque es demasiado pequeño para almacenar un
proceso, harán falta muchos bloques con lo que se producirá un retraso en la lectura del
archivo al tener que localizar todos los bloques que componen dicho proceso (fragmentación externa).

En la memoria del sistema la fragmentación se produce cuando los procesos
asignados han ocupado posiciones no contiguas de memoria dejando demasiados bloques
libres de pequeño tamaño, en los que no "caben" nuevos procesos.
 
En sistemas de ficheros, la desfragmentación trata de resolver este problema,
alineando los bloques de datos contiguos y juntando los bloques libres, produciendo así
fragmentos mayores que sí serán elegidos para futuros ficheros. En la memoria principal se
soluciona compactando los procesos para que estos ocupen posiciones contiguas y dejar los
bloques libres juntos, o también se soluciona con la paginación de memoria.
</br>

**2. Investiga y explica las políticas(algoritmos) de reemplazo de páginas en sistemas operativos. ¿Cuál consideras más eficiente y por qué?**

Las políticas o algoritmos de reemplazo de páginas son algoritmos que deciden qué página eliminar de la memoria principal cuando está llena y es necesario cargar una nueva página. 
</br>

##### 1.- Algoritmo FIFO
FIFO significa primero en entrar, primero en salir, lo que significa que la página que ha estado en la memoria por más tiempo es la que se reemplaza. Esta directiva es sencilla y fácil de implementar, pero puede provocar altas tasas de errores de página y un uso deficiente de la memoria. Por ejemplo, si se accede con frecuencia a una página, pero se cargó antes, se eliminará aunque siga siendo útil. La política FIFO no tiene en cuenta la antigüedad ni la frecuencia de las referencias a las páginas.
</br>

##### 2.- Algoritmo LRU
LRU son las siglas de Least-Recently Used, lo que significa que la página a la que se ha accedido menos recientemente es la que se reemplaza. Esta política trata de capturar la localidad temporal de referencia, que es la tendencia de los programas a acceder a las mismas páginas repetidamente en un corto período de tiempo. La directiva LRU puede reducir las tasas de errores de página y mejorar la utilización de la memoria, pero requiere soporte de hardware o estructuras de datos complejas para realizar un seguimiento del historial de acceso de cada página.
</br>

##### 3.- Algoritmo NRU
Para permitir que el sistema operativo recolecte estadísticas útiles sobre el uso de páginas, la ma
yor parte de las computadoras con memoria virtual tienen dos bits de estado asociados a cada página. 
R se establece cada vez que se hace referencia a la página (lectura o escritura); M se establece
cuando se escribe en la página (es decir, se modifica). Los bits R y M se pueden utilizar para construir un algoritmo simple de paginación de la siguiente manera. Cuando se inicia un proceso, ambos bits de página para todas sus páginas se establecen en 0 mediante el sistema operativo. El bit R se borra en forma periódica (en cada interrupción de reloj) para diferenciar las páginas a las que no se ha hecho referencia recientemente de las que si se han referenciado. Cuando ocurre un fallo de página, el sistema operativo inspecciona todas las páginas y las divide en 4 categorías con base en los valores actuales de sus bits R y M:

    Clase 0: no ha sido referenciada, no ha sido modificada.
    Clase 1: no ha sido referenciada, ha sido modificada.
    Clase 2: ha sido referenciada, no ha sido modificada.
    Clase 3: ha sido referenciada, ha sido modificada.

El algoritmo NRU (Not Recently Used, No usada recientemente) elimina una página al azar 
de la clase de menor numeración que no esté vacía. En este algoritmo está implícita la idea de que
es mejor eliminar una página modificada a la que no se haya hecho referencia en al menos un pul
so de reloj (por lo general, unos 20 mseg) que una página limpia de uso frecuente. La principal
atracción del NRU es que es fácil de comprender, moderadamente eficiente de implementar y pro
porciona un rendimiento que, aunque no es óptimo, puede ser adecuado.
</br>

##### 4.- Algoritmo OPT
OPT significa Optimal, lo que significa que la página que no se utilizará durante más tiempo en el futuro es la que se reemplaza. Esta política es teóricamente la mejor, ya que puede minimizar las tasas de error de página y maximizar la utilización de la memoria. Sin embargo, la política OPT no es práctica, ya que requiere el conocimiento de las futuras referencias de la página, lo que suele ser imposible o muy costoso de obtener.
</br>

##### 5.- Algoritmo de segunda oportunidad
Una modificación simple al algoritmo FIFO que evita el problema de descartar una página de uso
frecuente consiste en inspeccionar el bit R de la página más antigua. Si es 0, la página es antigua y no se ha
utilizado, por lo que se sustituye de inmediato. Si el bit R es 1, el bit se borra, la página se pone al
final de la lista de páginas y su tiempo de carga se actualiza, como si acabara de llegar a la memoria. Después la búsqueda continúa.
Aunque el algoritmo segunda oportunidad es razonable, también es innecesariamente ineficiente de
bido a que está moviendo constantemente páginas en su lista. 
</br>

##### 6.- Algoritmo de reloj
Consiste en mantener todos los marcos de página en una lista circular en forma de reloj. La
manecilla apunta a la página más antigua.
Cuando ocurre un fallo de página, la página a la que apunta la manecilla se inspecciona. Si el bit R es 0, la página se desaloja, se inserta la nueva página en el reloj en su lugar y la manecilla se avanza una posición. Si R es 1, se borra y la manecilla se avanza a la siguiente página. Este proceso se repite hasta encontrar una página con R = 0.
</br>

##### 7.- Algoritmo NFU
NFU (Not Frequently Used, No utilizadas frecuentemente) requiere un contador de software asociado con cada página, que al principio es cero. En cada interrupción de reloj, el sistema operativo explora todas las páginas en memoria. Para cada página se agrega el bit R, que es 0 o 1, al contador. Los contadores llevan la
cuenta aproximada de la frecuencia con que se hace referencia a cada página. Cuando ocurre un fallo de página, se selecciona la página con el contador que sea menor para sustituirla. 
El principal problema con el algoritmo NFU es que nunca olvida nada. Por ejemplo, en un compilador con varias pasadas, las páginas que se utilizaron con frecuencia durante la pasada 1 podrían tener todavía una cuenta alta en las siguientes pasadas. De hecho, si la pasada 1 tiene el tiempo de ejecución más largo de todas las pasadas, las páginas que contienen el código para las pasadas subsiguientes pueden tener siempre cuentas menores que las páginas de la pasada 1. En consecuencia, el sistema operativo eliminará páginas útiles, en vez de páginas que ya no se hayan utilizado.
</br>

##### 7.- Algoritmo de envejecimiento
Surje a partir de una pequeña modificación al algoritmo NFU. La modificación consta de dos partes. Primero, cada uno de los contadores se desplaza a la derecha 1 bit antes de agregar el bit R. Después, el bit R se agrega al bit de más a la izquierda,en lugar de sumarse al bit de más a la derecha.

Suponga que después del primer pulso de reloj los bits R para las páginas de la 0 a la 5 tienen los valores 1, 0, 1, 0, 1 y 1, respectivamente (la página 0 es 1, la página 1 es 0, la página 2 es 1, etc.). 
En otras palabras, entre los pulsos 0 y 1 se hizo referencia a las páginas 0, 2, 4 y 5, estableciendo sus bits R en 1, mientras que los de las otras páginas se quedaron en 0.
Cuando ocurre un fallo de página, se elimina la página cuyo contador sea el menor. Está claro
que una página a la que no se haya hecho referencia durante, por ejemplo, cuatro pulsos de reloj,
tendrá cuatro ceros a la izquierda en su contador, y por ende tendrá un valor menor que un conta
dor al que no se haya hecho referencia durante tres pulsos de reloj.
</br>

##### 8.- Algoritmo de conjunto de trabajo
El conjunto de páginas que utiliza un proceso en un momento dado se conoce como su conjunto de trabajo. 
Si todo el conjunto de trabajo está en memoria, el proceso se ejecutará sin producir muchos fallos hasta que avance a otra fase de ejecución. Si la memoria disponible es demasiado pequeña como para contener todo el conjunto de trabajo completo, el proceso producirá muchos fallos de página y se ejecutará lentamente. Se dice que un programa que produce fallos de página cada pocas instrucciones está sobrepaginando.

El algoritmo funciona de la siguiente manera. Se supone que el hardware debe establecer los
bits R y M, como vimos antes. De manera similar, se supone que una interrupción periódica de reloj 
hace que se ejecute software para borrar el bit Referenciada en cada pulso de reloj. En cada fallo
de página se explora la tabla de páginas en busca de una página adecuada para desalojarla.
Amedida que se procesa cada entrada, se examina el bit R. Si es 1, el tiempo virtual actual se
escribe en el campo Tiempo de último uso en la tabla de páginas, indicando que la página estaba en
uso al momento en que ocurrió el fallo de página. Como se hizo referencia a la página durante el
pulso de reloj actual, es evidente que está en el conjunto de trabajo y no es candidata para la eliminación. 
 Si R es 0, no se ha hecho referencia a la página durante el pulso de reloj actual y puede ser can
didata para la eliminación. Para ver si debe o no eliminarse, se calcula su edad (el tiempo virtual
actual menos su Tiempo de último uso) y se compara con τ. Si la edad es mayor que τ, la página ya
no se encuentra en el conjunto de trabajo y la nueva página la sustituye. La exploración continúa
actualizando las entradas restantes.
 No obstante, si R es 0 pero la edad es menor o igual que τ, la página está todavía en el conjunto
de trabajo. La página se reserva temporalmente, pero se apunta la página con la mayor edad (el me
nor valor de Tiempo de último uso). Si toda la tabla completa se explora sin encontrar un candidato
para desalojar, eso significa que todas las páginas están en el conjunto de trabajo. En ese caso, si se
encontraron una o más páginas con R = 0, se desaloja la más antigua. En el peor caso, se ha hecho referencia a todas las páginas durante el pulso de reloj actual (y por ende, todas tienen R = 1) por lo que se selecciona una al azar para eliminarla, de preferencia una página limpia, si es que existe.

Al algoritmo básico del conjunto de trabajo es incómodo ya que exige explorar toda la tabla de pá
ginas en cada fallo de página hasta localizar un candidato adecuado.
</br>

##### 9.- Algoritmo WSclock
Un algoritmo mejorado, basado en el algoritmo de reloj pero que también utiliza la información del conjunto de trabajo, se conoce como WSClock. 
La estructura de datos necesaria es una lista circular de marcos de página, como en el algorit
mo de reloj. Al principio, esta lista está vacía. Cuando se carga la primera página, se agrega a la lista.
A medida que se agregan más páginas, pasan a la lista para formar un anillo. Cada entrada contiene el campo Tiempo de último uso del algoritmo básico del conjunto de trabajo, así como el bit R (mostrado) y el bit M (no mostrado). Al igual que con el algoritmo de reloj, en cada fallo de página se examina primero la página a
la que apunta la manecilla. Si el bit R es 1, la página se ha utilizado durante el pulso actual, por lo
que no es candidata ideal para la eliminación. Después el bit R se establece en 0, la manecilla se avanza 
a la siguiente página y se repite el algoritmo para esa página.
Ahora considere lo que ocurre si la página a la que apunta la manecilla tiene R = 0. Si la edad es mayor que τ y la página está limpia, significa que no se encuentra en el conjunto de trabajo y existe una copia válida en el disco. El marco de página simplemente se reclama y la nueva página se coloca ahí.
Por otro lado, si la página está sucia no se puede reclamar de inmediato, ya que no hay una copia válida 
presente en el disco. Para evitar una conmutación de procesos, la escritura al disco se planifica pero la
manecilla avanza y el algoritmo continúa con la siguiente página. Después de todo, podría haber una página antigua y limpia más allá de la línea que se pueda utilizar de inmediato.

¿Qué ocurre si la manecilla llega otra vez a su punto inicial? Hay dos casos a considerar:
 1. Se ha planificado por lo menos una escritura.
 2. No se han planificado escrituras.
   
En el primer caso, la manecilla sólo sigue moviéndose, buscando una página limpia. Como se han
planificado una o más escrituras, en algún momento se completará alguna escritura y su página se
marcará como limpia. La primera página limpia que se encuentre se desaloja.

En el segundo caso, todas las páginas están en el conjunto de trabajo, de otra manera se hubie
ra planificado por lo menos una escritura. Sin información adicional, lo más simple por hacer es re
clamar cualquier página limpia y usarla. 
Si no existen páginas limpias, entonces se selecciona la página actual como la
víctima y se escribe de vuelta al disco.
</br>

##### Conclusión:

El mejor algoritmo es el WSclock ya que no solo es eficiente y rapido si no que es muy dificil que prsente algun fallo.

</br>

### 3.2 Memoria real

**1. Escribe un programa en C o Python que simule la administración de
 memoria mediante particiones fijas.**
</br>

~~~
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PARTICIONES 100
#define MAX_PROCESOS 100

typedef struct {
    int tamano;
    int id_de_proceso; // -1 si el proceso no es asignado
} Particion;

void imprime_memoria(Particion Particions[], int numero_de_particiones) {
    printf("\nEstado de la memoria:\n");
    for (int i = 0; i < numero_de_particiones; i++) {
        if (Particions[i].id_de_proceso == -1) {
            printf("Partición %d: %d KB (Libre)\n", i + 1, Particions[i].tamano);
        } else {
            printf("Partición %d: %d KB (Proceso %d)\n", i + 1, Particions[i].tamano, Particions[i].id_de_proceso);
        }
    }
    printf("\n");
}

int main() {
    int memoria_total, numero_de_particiones;
    Particion Particions[MAX_PARTICIONES];

    // Solicitar tamaño total de la memoria
    printf("Ingrese el tamaño total de la memoria (KB): ");
    scanf("%d", &memoria_total);

    // Solicitar número de particiones
    printf("Ingrese el número de particiones: ");
    scanf("%d", &numero_de_particiones);

    if (numero_de_particiones > MAX_PARTICIONES) {
        printf("Número máximo de particiones excedido (%d).\n", MAX_PARTICIONES);
        return 1;
    }

    // Solicitar tamaños de las particiones
    int tamano_total_particion = 0;
    for (int i = 0; i < numero_de_particiones; i++) {
        printf("Ingrese el tamaño de la partición %d (KB): ", i + 1);
        scanf("%d", &Particions[i].tamano);
        Particions[i].id_de_proceso = -1; // Inicialmente, todas están libres
        tamano_total_particion += Particions[i].tamano;
    }

    if (tamano_total_particion > memoria_total) {
        printf("Error: El tamaño total de las particiones excede el tamaño de la memoria.\n");
        return 1;
    }

    int op;
    do {
        printf("\n--- Menú ---\n");
        printf("1. Asignar proceso\n");
        printf("2. Liberar proceso\n");
        printf("3. Mostrar estado de la memoria\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &op);

        switch (op) {
            case 1: {
                int id_de_proceso, tam_proceso;
                printf("Ingrese el ID del proceso: ");
                scanf("%d", &id_de_proceso);
                printf("Ingrese el tamaño del proceso (KB): ");
                scanf("%d", &tam_proceso);

                int asignado = 0;
                for (int i = 0; i < numero_de_particiones; i++) {
                    if (Particions[i].id_de_proceso == -1 && Particions[i].tamano >= tam_proceso) {
                        Particions[i].id_de_proceso = id_de_proceso;
                        asignado = 1;
                        printf("Proceso %d asignado a la partición %d.\n", id_de_proceso, i + 1);
                        break;
                    }
                }
                if (!asignado) {
                    printf("No se encontró una partición disponible para el proceso %d.\n", id_de_proceso);
                }
                break;
            }
            case 2: {
                int id_de_proceso;
                printf("Ingrese el ID del proceso a liberar: ");
                scanf("%d", &id_de_proceso);

                int libre = 0;
                for (int i = 0; i < numero_de_particiones; i++) {
                    if (Particions[i].id_de_proceso == id_de_proceso) {
                        Particions[i].id_de_proceso = -1;
                        libre = 1;
                        printf("Proceso %d liberado de la partición %d.\n", id_de_proceso, i + 1);
                        break;
                    }
                }
                if (!libre) {
                    printf("No se encontró el proceso %d en ninguna partición.\n", id_de_proceso);
                }
                break;
            }
            case 3:
                imprime_memoria(Particions, numero_de_particiones);
                break;
            case 4:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (op != 4);

    return 0;
}

~~~
</br>

**Ejecucion:**
</br>

![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/3.2_1.png)
</br>

![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/3.2_2.png)

</br>

**2. Diseña un algoritmo para calcular qué procesos pueden ser asignados
 a un sistema con memoria real(principal) limitada utilizando el algoritmo de
 "primer ajuste".**

Empezamos cargando los procesos en una cola de entrada, cada proceso tiene asignada la cantidad de memoria que necesita para poder ejecutarse. Iniciamos con toda nuestra memoria disponible la cual esta formada por bloques de memoria del mismo tamaño. Ahora le asignamos a los primeros procesos de la cola uno o varios bloques(segun se requiera), estos solo tomaran la memoria que necesiten y dejaran el restante libre formando un **"agujero"** en el que tendremos que revisar si cabe el siguiente proceso, de no ser el caso asignamos el siguiente bloque y dejaremos el agujero vacio. Este procedimiento continuara hasta que el siguiente proceso de la cola no quepa en el ultimo bloque o agujero disponible.
Entonces revisaremos los agujeros que hemos dejado atras y basado en el algoritmo del **primer ajuste** buscaremos al primero lo suficientemente grande como para cargar el proceso. Si logramos encontrar el agujero entonces cargaremos el proceso y si sobra memoria esta se convertira en un nuevo agujero, si el nuevo agujero se encuentren adyacente a otro estos se conbinaran formando uno de mayor tamaño. 
En caso de no encontrar un agujero con la memoria suficiente procederemos a recorrer la cola en busca de un proceso que requiera de menos memoria y revisaremos nuevamente los agujeros asignandole uno para despues realizar la carga. Ya sea un exito o no seguiremos comparando los procesos de la cola con los agujeros restantes, realizaremos las cargas correspondientes y cuando hayamos comparado todos los procesos solo nos quedara esperar a que algun proceso termine su ejecucion liberando espacio y generando nuevos agujeros en los que podremos cargar nuevos procesos siguiendo el procedimiento anterior.

</br>

### 3.3 Organización de memoria virtual

**1. Investiga y explica el concepto de "paginación" y "segmentación".
¿Cuáles son las ventajas y desventajas de cada técnica?**

#### Paginación

La paginación se trata de un modelo de organización de memoria física en el que se divide toda la memoria en porciones del mismo tamaño. Esas porciones reciben el nombre de marcos o páginas físicas. Si dividimos la memoria en páginas, podremos gestionarla mejor.

Los marcos se identifican con un número que se denomina **número de página física**. A su vez, cada página física se asigna a un proceso de forma exclusiva. Por otro lado, cada proceso tiene un espacio de páginas lógicas, y cada una se mapea o se asocia a un marco.
La tabla de páginas es el mapeo resultante entre páginas lógicas y físicas. Por tanto, cada proceso tiene su tabla de páginas. Luego, hay que entender que el proceso tiene un direccionamiento lógico que usará para satisfacer sus necesidades. Por ejemplo, un procesador de 32 bits ofrece al proceso 2^32 = 4 GB de memoria.

La paginación consta de dos funciones principales:

**1. Transforma una dirección virtual a física.**

**2. Transfiere páginas de la memoria secundaria a la memoria principal y viceversa.**

Y usa 2 posibles estructuras de datos:

**Tabla de páginas:** Guarda la dirección del marco en la que está almacenada cada página. Existe una tabla por proceso y tantas entradas como páginas tiene éste. Transforma direcciones virtuales o lógicas a físicas. 

**Lista de marcos libres:** Guarda los marcos sin asignar, habiendo una tabla para todo el sistema (no para cada proceso). Hay tantas entradas como marcos libres.

Cada dirección lógica contiene 2 cosas: el número de página y el desplazamiento.

##### Ventajas
* Los procesos pueden albergar distintas posiciones de memoria, pudiendo ser desplazados sin problema. Esto ofrece versatilidad.

* En segundo lugar, no existen conflictos entre procesos que quieren acceder a ciertas posiciones de memorias. Es decir, no se da el caso de que un proceso acceda a una posición de memoria de otro proceso.

##### Desventajas
* El costo del hardware y software se incrementan, por la nueva información que debe manejarse y el mecanismo de traducción de direcciones necesarias, se consume mucho mas recurso e memoria, tiempo en la CPU para su implantación.

* Se deben reservar áreas de memoria para las PMT de los procesos, al no ser fijas el tamaño de estas se crea un problema semejante al de los programas.

* Aparece el problema de fragmentación interna. La fragmentación interna es un fenómeno que ocurre en computación cuando se asigna más espacio de memoria del que se necesita, lo que deja espacio sin utilizar dentro de los bloques asignados.

#### Segmentación

En informática la segmentación de memoria es una técnica de gestión de memoria que pretende acercarse más al punto de vista del usuario. Los programas se desarrollan, generalmente, en torno a un núcleo central (principal) desde el que se bifurca a otras partes (rutinas) o se accede a zonas de datos (tablas, pilas, etc).

Desde este punto de vista, un programa es un conjunto de componentes lógicos de tamaño variable o un conjunto de segmentos, es decir, el espacio lógico de direcciones se considera como un conjunto de segmentos, cada uno definido por un identificador, y consistente de un punto de inicio y el tamaño asignado.1​

La segmentación de un programa la realiza el compilador y en ella cada dirección lógica se expresará mediante dos valores: Número de segmento (s) y desplazamiento dentro del segmento (d).

Una de las implementaciones más obvias y directas de un espacio de memoria segmentado es asignar un segmento distinto a cada una de las secciones del espacio en memoria de un proceso. La segmentación también ayuda a incrementar la modularidad de un programa.

##### Ventajas
* El programador puede conocer las unidades lógicas de su programa.

* Es posible compilar módulos separados como segmentos el enlace entre los segmentos puede suponer hasta tanto se haga una referencia entre segmentos.

* Es fácil compartir segmentos.

* Existe la posibilidad de definir segmentos que aun no existan.

* La compartición de segmentos permite ahorrar memoria.

##### Desventajas
* Hay un incremento en el costo del hardware y   software para llevar a cabo la implantación, asi como mayor recurso de consumo de memoria, tiempo de CPU.

* Se compila el manejo de memoria virtual, ya que los discos almacenan información en bloques de tamaños fijos.

* No se puede garantizar que al salir de un segmento de la memoria este pueda ser traído fácilmente de nuevo,ya que sera necesario  encontrar nuevamente un área de memoria libre ajustada a su tamaño.

* Aparece el problema de la fracmentacion externa. La fragmentación externa es un problema informático que se produce cuando la memoria libre se divide en bloques pequeños y se intercala con la memoria asignada.
</br>

**2. Escribe un programa que simule una tabla de páginas para procesos con acceso aleatorio 
a memoria virtual.**

</br>

### 3.4 Administración de memoria virtual

**1. Escribe un código que implemente el algoritmo de reemplazo de página
 "Least Recently Used" (LRU).**
</br>

**2. Diseña un diagrama que represente el proceso de traducción de direc
ciones virtuales a físicas en un sistema con memoria virtual.**
</br>

![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/3.4_2.jpeg)

</br>

### Integración

**1. Analiza un sistema operativo moderno (por ejemplo, Linux o Windows)
 e identifica cómo administra la memoria virtual.**

La administración de memoria virtual en Windows se realiza mediante el administrador de memoria, 
un componente del kernel.

La memoria virtual es una técnica que permite a un sistema operativo utilizar más memoria que la RAM física
instalada en un ordenador. Funciona mediante la creación de un espacio de direcciones virtuales que se asigna 
a la memoria real y el espacio en disco disponible, e intercambiando páginas de datos entre ellos según sea necesario.

El espacio de direcciones virtuales es el rango de direcciones de memoria que un proceso puede utilizar, 
independientemente del tamaño real de la RAM. El sistema operativo administra el espacio de direcciones virtuales 
y lo divide en unidades de tamaño fijo llamadas páginas. Cada página tiene un marco de página correspondiente 
en la memoria física o en el disco, donde se almacenan los datos reales. El sistema operativo mantiene una 
estructura de datos llamada tabla de páginas, que registra la asignación entre las direcciones virtuales y 
físicas de cada página.

El intercambio de páginas es el proceso de mover páginas entre la memoria física y el disco, en función de la 
demanda y la disponibilidad de recursos de memoria. El sistema operativo utiliza un algoritmo llamado política
de reemplazo de páginas, que decide qué páginas intercambiar dentro y fuera, en función de factores como la 
frecuencia de acceso, la antigüedad del uso y la prioridad del proceso. El sistema operativo también utiliza 
un mecanismo llamado controlador de errores de página, que detecta cuando un proceso intenta acceder a una página 
que no está en la memoria física y desencadena el intercambio de páginas en consecuencia.

En el momento en que en el sistema empieza a escasear la memoria, se crea un fichero SWAP (intercambio) en el
disco que sirve como ampliación auxiliar de memoria. En el caso de Windows, cuando tenemos muchas aplicaciones
en funcionamiento y la memoria RAM se agota, el sistema se apoya en el fichero SWAP para realizar movimientos de paginas
desde el disco duro a la RAM y viceversa, a esto se le conoce como SWAPPING. De ese modo crean espacios en memoria 
física para ir ejecutando las órdenes. Esto, evidentemente, hace que el sistema vaya más lento.

La memoria virtual también tiene algunos desafíos y compensaciones con los que el sistema operativo y las aplicaciones
tienen que lidiar. Uno de los principales desafíos es la sobrecarga de rendimiento del intercambio de páginas,
que implica operaciones de E/S de disco que son más lentas que el acceso a la memoria. El sistema operativo 
tiene que equilibrar el equilibrio entre minimizar los errores de página, que reducen la velocidad de ejecución, 
y maximizar la utilización de la memoria, lo que aumenta el nivel de multiprogramación. 
Otro desafío es la complejidad y el costo de implementar y mantener el sistema de memoria virtual, que requiere 
soporte de hardware, diseño de software y estructuras de datos. Las aplicaciones también tienen que adaptarse al 
entorno de memoria virtual, evitando la asignación excesiva de memoria, la fragmentación y el thrashing.
</br>

**2. Realiza una simulación en cualquier lenguaje de programación que
 emule el swapping de procesos en memoria virtual.**

</br>

## Administración de Entrada/Salida
</br>

### 4.1 Dispositivos y manejadores de dispositivos

**1. Explica la diferencia entre dispositivos de bloque y dispositivos de carácter. 
Da un ejemplo de cada uno.**

Los dispositivos de bloque y los dispositivos de carácter son dos tipos de dispositivos de E/S (entrada/salida) 
en sistemas informáticos. 

##### Dispositivos de Bloque:

* Trabajan con datos en bloques de tamaño fijo.
  
* Los tamaños de bloque comunes varían desde 512 bytes hasta 32,768 bytes.
  
* La E/S se realiza en bloques de datos completos, lo que permite una transferencia eficiente de grandes 
  cantidades de datos.

* Suelen ser más adecuados para el almacenamiento de datos a largo plazo y la transferencia de archivos grandes.
 
* Ejemplos comunes incluyen discos duros, SSDs (Unidades de Estado Sólido) y cintas magnéticas.

##### Dispositivos de Carácter:

* Trabajan con datos en forma de caracteres individuales.

* La E/S se realiza carácter por carácter, lo que los hace más adecuados para la interacción humana y la comunicación en tiempo real.

* Suelen ser más utilizados para la entrada de datos, la visualización de información y la comunicación con dispositivos externos.

* Ejemplos incluyen teclados, ratones, impresoras y puertos serie.
</br>

** 2. Diseña un programa que implemente un manejador de dispositivos sen
cillo para un dispositivo virtual de entrada.**

</br>

### 4.2 Mecanismos y funciones de los manejadores de dispositivos

**1. Investiga qué es la interrupción por E/S y cómo la administra el sistema operativo. 
Escribe un ejemplo en pseudocódigo para simular este proceso.**

Además de proporcionar abstracciones como los procesos (e hilos), espacios de direcciones y ar
chivos, un sistema operativo también controla todos los dispositivos de E/S (Entrada/Salida) de la
computadora. Debe emitir comandos para los dispositivos, captar interrupciones y manejar errores.
Adicionalmente debe proporcionar una interfaz —simple y fácil de usar— entre los dispositivos y
el resto del sistema. 

A nivel de hardware, las interrupciones funcionan de la siguiente manera. Cuando un dispositivo de E/S 
ha terminado el trabajo que se le asignó, produce una interrupción (suponiendo que el sistema operativo 
haya habilitado las interrupciones). Para ello, impone una señal en una línea de bus que se le haya asignado.
Esta señal es detectada por el chip controlador de interrupciones en la tarjeta principal, que después decide 
lo que debe hacer.

Si no hay otras interrupciones pendientes, el controlador de interrupciones procesa la interrupción de 
inmediato. Si hay otra en progreso, o si otro dispositivo ha realizado una petición simultánea en una 
línea de petición de interrupción de mayor prioridad en el bus, el dispositivo sólo se ignora por el momento. 
En este caso, continúa imponiendo una señal de interrupción en el bus hasta que la CPU la atiende.

Para manejar la interrupción, el controlador coloca un número en las líneas de dirección que
especifican cuál dispositivo desea atención e impone una señal para interrumpir a la CPU.
La señal de interrupción hace que la CPU deje lo que está haciendo y empiece a hacer otra cosa. 
El número en las líneas de dirección se utiliza como índice en una tabla llamada vector de interrupciones 
para obtener un nuevo contador del programa. Este contador del programa apunta alinicio del procedimiento de 
servicio de interrupciones correspondiente. Por lo general, las trampas e interrupciones utilizan el mismo 
mecanismo desde este punto en adelante, y con frecuencia comparten el mismo vector de interrupción. 
La ubicación del vector de interrupción se puede determinar de manera estática (hardwired) en la máquina, 
o puede estar en cualquier parte de la memoria, con un registro de la CPU (cargado por el sistema operativo) 
apuntando a su origen. Poco después de que se empieza a ejecutar, el procedimiento de servicio de interrupciones
reconoce la interrupción al escribir cierto valor en uno de los puertos de E/S del controlador de interrupciones. 
Este reconocimiento indica al controlador que puede emitir otra interrupción. Al hacer que la CPU retrase este 
reconocimiento hasta que esté lista para manejar la siguiente interrupción, se pueden evitar las condiciones de 
competencia que involucran varias interrupciones (casi simultáneas).

El hardware siempre guarda cierta información antes de iniciar el procedimiento de servicio.
La información que se guarda y el lugar en donde se guarda varía de manera considerable, entre una
CPU y otra. Como mínimo se debe guardar el contador del programa para que se pueda reiniciar el
proceso interrumpido. En el otro extremo, todos los registros visibles y un gran número de registros
internos se pueden guardar también.
</br>

![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/4.2_1.png)

</br>

**2. Escribe un programa que utilice el manejo de interrupciones en un sistema básico de simulación.

</br>

### 4.3 Estructuras de datos para manejo de dispositivos

**1. Investiga y explica qué es una cola de E/S. Diseña una simulación de una cola con prioridad.

Una cola es una estructura de datos que almacena elementos en una lista, donde los nuevos elementos se 
insertan en el final y los existentes se eliminan en el principio. 

En informática, las colas son una herramienta esencial para gestionar el flujo de personas o procesos en 
diferentes industrias. Permiten organizar y controlar el flujo de manera eficiente, garantizando una distribución 
equitativa de recursos y reduciendo los tiempos de espera.

Asi pues una cola de E/S es un contenedor de solicitudes de E/S que recibe un controlador en un sistema operativo. 
Cada controlador puede crear una o más colas de E/S para cada dispositivo.
</br>

~~~
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _nodo {
    int valor;
    int prioridad;
    struct _nodo *siguiente;
} nodo;

int numero_aleatorio() {
    return (rand() % 4) + 1;
}

nodo* genera_proceso() {
    static int contador = 1;
    nodo* nuevo = (nodo*)malloc(sizeof(nodo));
    if (nuevo == NULL) {
        printf("Error al asignar memoria.\n");
        exit(1);
    }
    nuevo->valor = contador++;
    nuevo->prioridad = numero_aleatorio();
    nuevo->siguiente = NULL;
    return nuevo;
}

void insertar_final(nodo** cabeza) {
    nodo* nuevoNodo = genera_proceso();

    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
    } else {
        nodo* temp = *cabeza;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

void imprimir_lista(nodo* cabeza) {
    nodo* temp = cabeza;
    while (temp != NULL) {
        printf("%p |Proceso %d| (Prioridad %d) |direct %p| -> ", temp, temp->valor, temp->prioridad, &temp->prioridad);
        temp = temp->siguiente;
        
    }
    printf("NULL\n");
}

void atender_prioridad_mas_alta(nodo** cabeza) {
    if (*cabeza == NULL) {
        printf("No hay procesos para atender.\n");
        return;
    }

    nodo* temp = *cabeza;
    nodo* maxNodo = temp;
    nodo* maxNodoPrevio = NULL;
    nodo* previo = NULL;

    // Buscar el nodo con la prioridad más alta
    while (temp != NULL) {
        if (temp->prioridad > maxNodo->prioridad) {
            maxNodo = temp;
            maxNodoPrevio = previo;
        }
        previo = temp;
        temp = temp->siguiente;
    }

    // Atender el nodo con prioridad más alta
    printf("Atendiendo proceso %d con prioridad %d\n", maxNodo->valor, maxNodo->prioridad);

    // Eliminar el nodo de la lista
    if (maxNodoPrevio == NULL) {
        *cabeza = maxNodo->siguiente;  // El nodo con mayor prioridad es la cabeza
    } else {
        maxNodoPrevio->siguiente = maxNodo->siguiente;
    }

    free(maxNodo);
}

int main() {
    srand(time(NULL));
    nodo* cabeza = NULL;
    int op = 0;

    do {
        printf("1. Genera proceso\n");
        printf("2. Atiende proceso\n");
        printf("3. Mostrar Lista de Procesos\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                insertar_final(&cabeza);
                break;
            case 2:
                atender_prioridad_mas_alta(&cabeza);
                break;
            case 3:
                imprimir_lista(cabeza);
                break;
            case 4:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida\n");
        }
    } while (op != 4);

    return 0;
}

~~~
</br>

**Ejecucion:**
</br>

![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/4.3_1.png)
</br>

**2. Escribe un programa que simule las operaciones de un manejador de dispositivos utilizando una 
tabla de estructuras.**

</br>

### 4.4 Operaciones de Entrada/Salida

**1. Diseña un flujo que describa el proceso de lectura de un archivo desde un disco magnético. 
Acompáñalo con un programa básico que simule el proceso.**
</br>

**2. Implementa un programa en Python, C o java que realice operaciones
de entrada/salida asíncronas usando archivos.**

</br>

### Integración

**1. Escribe un programa que implemente el algoritmo de planificación de
 discos "Elevator (SCAN)".**
</br>

**2. Diseña un sistema que maneje múltiples dispositivos simulados (disco duro, impresora, teclado) 
y muestra cómo se realiza la comunicación entre ellos.**

</br>

### Avanzados

**1. Explica cómo los sistemas operativos modernos optimizan las operaciones de entrada/salida
con el uso de memoria caché.**

Cuando el procesador necesita acceder a una información para hacer sus tareas, esta información es pedida a la 
RAM que la proporciona al procesador tan rápido como puede. Este proceso no es instantáneo, sino que se necesita 
un tiempo, varios ciclos de reloj dependiendo de la latencia, solo son unos nanosegundos, pero, aunque a nosotros 
nos parezca que no es nada en realidad es un mundo y mientras el procesador está esperando se pierde la oportunidad 
de hacer otros cálculos y operaciones.

Para solucionar este problema se creó la memoria caché, esta no es más que una pequeña cantidad de memoria que 
está dentro del procesador, la finalidad de la memoria caché es hacer que el acceso a la información por parte 
del procesador sea lo más rápida posible. La memoria caché está dentro del procesador por lo que la información 
tiene que viajar muy poco hasta llegar al lugar donde se procesa, por lo que el tiempo que se necesita para 
acceder a ella es mucho más reducido que en el caso de la RAM.

Por lo tanto la memoria caché es una capa de almacenamiento de alta velocidad que reduce las operaciones de E/S 
al almacenar los datos más utilizados en una memoria más rápida. Esto permite que las solicitudes futuras de 
esos datos se atiendan más rápido.

</br>

#+begin_src bash

#+end_src
