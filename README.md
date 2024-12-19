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

| | | | | |turno| |eligiendo[]| | | |nodo1| | |nodo2| | |
|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|
|L|Sentencia|i|id_productor|id_consumidor|[0]|[1]|[0]|[1]|cabeza|temp|valor|prioridad|siguiente|valor|prioridad|siguiente|
|14| nodo* cabeza = NULL;| | | | | | | |Null| | | | | | | |
|16| int turno = [2];| | | | | | | | | | | | | | | |
|17| int eligiendo[2] = {0, 0};| | | | | |0|0| | | | | | | | |
|81| Inicia int main() {| | | | | | | | | | | | | | | |
|82| iniciamos para crear pseudoaleatorios --> srand(time(NULL));| | | | | | | | | | | | | | | |
|83| declarar  hilos --> pthread_t hilo_productor, hilo_consumidor;| | | | | | | | | | | | | | | |
|84| int id_productor = 1, id_consumidor = 2;| |1|2| | | | | | | | | | | | |
|86| crear hilo_productor --> pthread_create(&hilo_productor, NULL, productor, id_productor);| | | | | | | | | | | | | | | |
|87| crear hilo_consumidor --> pthread_create(&hilo_consumidor, NULL, consumidor, id_consumidor);| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|35| inicia funcion  --> void* productor(void* arg) {| | | | | | | | | | | | | | | |
|36| desenpaquetar id_productor --> int id = *(int*)arg;| | | | | | | | | | | | | | | |
|37| inicio ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | | |
|37| int i = 0|0| | | | | | | | | | | | | | |
|37| i < 5 --> i=0 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=null, turno[0]=1 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=10| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | |10| | | | | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | |3| | | | |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | |Null| | | |
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | |Null| | | |
|47| cabeza = nuevo;| | | | | | | |nodo1| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|56| inicia funcion --> void* consumidor(void* arg) {| | | | | | | | | | | | | | | |
|57| desenpaquetar id_consumidor--> int id = *(int*)arg;| | | | | | | | | | | | | | | |
|58| inicio ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | | |
|58| int i = 0|0| | | | | | | | | | | | | | |
|58| i < 5 --> i=0 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=0, turno[1]=null --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo1 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |nodo1| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Null| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | |free|free|free| | | |
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|1| | | | | | | | | | | | | | |
|37| i < 5 --> i=1 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=11| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | |11| | | | | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | |1| | | | |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | |Null| | | |
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | |Null| | | |
|47| cabeza = nuevo;| | | | | | | |nodo1| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++|1| | | | | | | | | | | | | | |
|58| i < 5 --> i=1 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo1 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |nodo1| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Null| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | |free|free|free| | | |
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|2| | | | | | | | | | | | | | |
|37| i < 5 --> i=2 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=12| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | |12| | | | | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | |1| | | | |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | |Null| | | |
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | |Null| | | |
|47| cabeza = nuevo;| | | | | | | |Nodo1| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
| | Tiempo de espera insuficiente vuelve a ejecutarse hilo_productor| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|3| | | | | | | | | | | | | | |
|37| i < 5 --> i=3 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=13| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | | | | |13| | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | | | | |2| |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | | | | |Null|
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | | | | |Nodo1|
|47| cabeza = nuevo;| | | | | | | |Nodo2| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++|2| | | | | | | | | | | | | | |
|58| i < 5 --> i=2 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo2 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |Nodo2| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Nodo1| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | | | | |free|free|free|
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|4| | | | | | | | | | | | | | |
|37| i < 5 --> i=4 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=14| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | | | | |14| | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | | | | |3| |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | | | | |Null|
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | | | | |Nodo1|
|47| cabeza = nuevo;| | | | | | | |Nodo2| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++|3| | | | | | | | | | | | | | |
|58| i < 5 --> i=3 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo2 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |Nodo2| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Nodo1| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | | | | |free|free|free|
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|5| | | | | | | | | | | | | | |
|37| i < 5 --> i=5 --> false| | | | | | | | | | | | | | | |
|52| termina ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | | |
|53| finaliza hilo_productor --> return NULL;| | | | | | | | | | | | | | | |
|54| termina funcion --> productor| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++|4| | | | | | | | | | | | | | |
|58| i < 5 --> i=4 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo1 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |nodo1| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Null| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | |free|free|free| | | |
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++| | | | | | | | | | | | | | | |
|58| i < 5 --> i=5 --> false| | | | | | | | | | | | | | | |
|77| termina ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | | |
|78| finaliza hilo_consumidor --> return NULL;| | | | | | | | | | | | | | | |
|79| termina funcion --> consumidor| | | | | | | | | | | | | | | |
|92| return 0;| | | | | | | | | | | | | | | |
|93| finalza main| | | | | | | | | | | | | | | |
| | Fin del programa| | | | | | | | | | | | | | | |
</br>

#### PE_APeterson
 
| | | | | | |interesado[]| | | |nodo1| | |nodo2| | |
|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|
|L|Sentencia|i|id_productor|id_consumidor|turno|[0]|[1]|cabeza|temp|valor|prioridad|siguiente|valor|prioridad|siguiente|
|14| nodo* cabeza = NULL;| | | | | | |Null| | | | | | | |
|15| int turno = 0;| | | |0| | | | | | | | | | |
|16| int interesado[2] = {0, 0};| | | | |0|0| | | | | | | | |
|71| Inicia int main() {| | | | | | | | | | | | | | |
|72| iniciamos para crear pseudoaleatorios --> srand(time(NULL));| | | | | | | | | | | | | | |
|73| declarar  hilos --> pthread_t hilo_productor, hilo_consumidor;| | | | | | | | | | | | | | |
|74| int id_productor = 1, id_consumidor = 2;| |1|2| | | | | | | | | | | |
|76| crear hilo_productor --> pthread_create(&hilo_productor, NULL, productor, id_productor);| | | | | | | | | | | | | | |
|77| crear hilo_consumidor --> pthread_create(&hilo_consumidor, NULL, consumidor, id_consumidor);| | | | | | | | | | | | | | |
|79| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | |
|31| inicia funcion  --> void* productor(void* arg) {| | | | | | | | | | | | | | |
|32| desenpaquetar id_productor --> int id = *(int*)arg;| |1| | | | | | | | | | | | |
|33| inicio ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | |
|33| int i = 0|0| | | | | | | | | | | | | |
|33| i < 5 --> i=0 --> true| | | | | | | | | | | | | | |
|34| interesado[0] = 1;| | | | |1| | | | | | | | | |
|35| turno = 1;| | | |1| | | | | | | | | | |
|36| while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false| | | | | | | | | | | | | | |
|38| nodo* nuevo = genera_proceso(id * 10 + i); | |1| | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id = 10| | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | |10| | | | | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | |1| | | | |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | |Null| | | |
|28| return nuevo;| | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | |
|39| nuevo->siguiente = cabeza;| | | | | | | | | | |Null| | | |
|40| cabeza = nuevo;| | | | | | |nodo1| | | | | | | |
|41| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | |
|43| interesado[0] = 0;| | | | |0| | | | | | | | | |
|44| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | |
|80| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | |
|49| inicia funcion --> void* consumidor(void* arg) {| | | | | | | | | | | | | | |
|50| desenpaquetar id_consumidor--> int id = *(int*)arg;| | |2| | | | | | | | | | | |
|51| inicio ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | |
|51| int i = 0|0| | | | | | | | | | | | | |
|51| i < 5 --> i=0 --> true| | | | | | | | | | | | | | |
|52| interesado[1] = 1;| | | | | |1| | | | | | | | |
|53| turno = 0;| | | |0| | | | | | | | | | |
|54| while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false| | | | | | | | | | | | | | |
|56| if (cabeza != NULL) { --> cabeza = nodo1 --> true| | | | | | | | | | | | | | |
|57| nodo* temp = cabeza;| | | | | | | |nodo1| | | | | | |
|58| cabeza = cabeza->siguiente;| | | | | | |Null| | | | | | | |
|59| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | |
|60| free(temp);| | | | | | | | |free|free|free| | | |
|65| interesado[1] = 0;| | | | | |0| | | | | | | | |
|66| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | |
|79| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | |
|33| i++|1| | | | | | | | | | | | | |
|33| i < 5 --> i=1 --> true| | | | | | | | | | | | | | |
|34| interesado[0] = 1;| | | | |1| | | | | | | | | |
|35| turno = 1;| | | |1| | | | | | | | | | |
|36| while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false| | | | | | | | | | | | | | |
|38| nodo* nuevo = genera_proceso(id * 10 + i); | |1| | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id = 11| | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | |11| | | | | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | |4| | | | |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | |Null| | | |
|28| return nuevo;| | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | |
|39| nuevo->siguiente = cabeza;| | | | | | | | | | |Null| | | |
|40| cabeza = nuevo;| | | | | | |nodo1| | | | | | | |
|41| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | |
|43| interesado[0] = 0;| | | | |0| | | | | | | | | |
|44| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | |
|80| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | |
|51| i++|1| | | | | | | | | | | | | |
|51| i < 5 --> i=1 --> true| | | | | | | | | | | | | | |
|52| interesado[1] = 1;| | | | | |1| | | | | | | | |
|53| turno = 0;| | | |0| | | | | | | | | | |
|54| while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false| | | | | | | | | | | | | | |
|56| if (cabeza != NULL) { --> cabeza = nodo1 --> true| | | | | | | | | | | | | | |
|57| nodo* temp = cabeza;| | | | | | | |nodo1| | | | | | |
|58| cabeza = cabeza->siguiente;| | | | | | |Null| | | | | | | |
|59| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | |
|60| free(temp);| | | | | | | | |free|free|free| | | |
|65| interesado[1] = 0;| | | | | |0| | | | | | | | |
|66| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | |
|79| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | |
|33| i++|2| | | | | | | | | | | | | |
|33| i < 5 --> i=2 --> true| | | | | | | | | | | | | | |
|34| interesado[0] = 1;| | | | |1| | | | | | | | | |
|35| turno = 1;| | | |1| | | | | | | | | | |
|36| while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false| | | | | | | | | | | | | | |
|38| nodo* nuevo = genera_proceso(id * 10 + i); | |1| | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id = 12| | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | |12| | | | | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | |4| | | | |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | |Null| | | |
|28| return nuevo;| | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | |
|39| nuevo->siguiente = cabeza;| | | | | | | | | | |Null| | | |
|40| cabeza = nuevo;| | | | | | |nodo1| | | | | | | |
|41| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | |
|43| interesado[0] = 0;| | | | |0| | | | | | | | | |
|44| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | |
| | Tiempo de espera insuficiente vuelve a ejecutarse hilo_productor| | | | | | | | | | | | | | |
|79| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | |
|33| i++|3| | | | | | | | | | | | | |
|33| i < 5 --> i=3 --> true| | | | | | | | | | | | | | |
|34| interesado[0] = 1;| | | | |1| | | | | | | | | |
|35| turno = 1;| | | |1| | | | | | | | | | |
|36| while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false| | | | | | | | | | | | | | |
|38| nodo* nuevo = genera_proceso(id * 10 + i); | |1| | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id = 13| | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | |12|4|Null|13| | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | | | |2| |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | | | |Null|
|28| return nuevo;| | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | |
|39| nuevo->siguiente = cabeza;| | | | | | | | | | | | | |nodo1|
|40| cabeza = nuevo;| | | | | | |nodo2| | | | | | | |
|41| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | |
|43| interesado[0] = 0;| | | | |0| | | | | | | | | |
|44| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | |
|80| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | |
|51| i++|2| | | | | | | | | | | | | |
|51| i < 5 --> i=2 --> true| | | | | | | | | | | | | | |
|52| interesado[1] = 1;| | | | | |1| | | | | | | | |
|53| turno = 0;| | | |0| | | | | | | | | | |
|54| while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false| | | | | | | | | | | | | | |
|56| if (cabeza != NULL) { --> cabeza = nodo2 --> true| | | | | | | | | | | | | | |
|57| nodo* temp = cabeza;| | | | | | | |nodo2| | | | | | |
|58| cabeza = cabeza->siguiente;| | | | | | |nodo1| | | | | | | |
|59| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | |
|60| free(temp);| | | | | | | | | | | |free|free|free|
|65| interesado[1] = 0;| | | | | |0| | | | | | | | |
|66| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | |
|79| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | |
|33| i++|4| | | | | | | | | | | | | |
|33| i < 5 --> i=4 --> true| | | | | | | | | | | | | | |
|34| interesado[0] = 1;| | | | |1| | | | | | | | | |
|35| turno = 1;| | | |1| | | | | | | | | | |
|36| while (interesado[1] && turno == 1); --> interesado[1] = 0, turno = 1 --> false| | | | | | | | | | | | | | |
|38| nodo* nuevo = genera_proceso(id * 10 + i); | |1| | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id = 14| | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | | | |14| | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | | | |4| |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | | | |Null|
|28| return nuevo;| | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | |
|39| nuevo->siguiente = cabeza;| | | | | | | | | | | | | |nodo1|
|40| cabeza = nuevo;| | | | | | |nodo2| | | | | | | |
|41| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | |
|43| interesado[0] = 0;| | | | |0| | | | | | | | | |
|44| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | |
|80| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | |
|51| i++|3| | | | | | | | | | | | | |
|51| i < 5 --> i=3 --> true| | | | | | | | | | | | | | |
|52| interesado[1] = 1;| | | | | |1| | | | | | | | |
|53| turno = 0;| | | |0| | | | | | | | | | |
|54| while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false| | | | | | | | | | | | | | |
|56| if (cabeza != NULL) { --> cabeza = nodo2 --> true| | | | | | | | | | | | | | |
|57| nodo* temp = cabeza;| | | | | | | |nodo2| | | | | | |
|58| cabeza = cabeza->siguiente;| | | | | | |nodo1| | | | | | | |
|59| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | |
|60| free(temp);| | | | | | | | |12|4|Null|free|free|free|
|65| interesado[1] = 0;| | | | | |0| | | | | | | | |
|66| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | |
|79| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | |
|33| i++|5| | | | | | | | | | | | | |
|33| i < 5 --> i=5 --> false| | | | | | | | | | | | | | |
|45| termina ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | |
|46| finaliza hilo_productor --> return NULL;| | | | | | | | | | | | | | |
|47| termina funcion --> productor| | | | | | | | | | | | | | |
|80| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | |
|51| i++|4| | | | | | | | | | | | | |
|51| i < 5 --> i=4 --> true| | | | | | | | | | | | | | |
|52| interesado[1] = 1;| | | | | |1| | | | | | | | |
|53| turno = 0;| | | |0| | | | | | | | | | |
|54| while (interesado[0] && turno == 0); --> interesado[0] = 0, turno = 0 --> false| | | | | | | | | | | | | | |
|56| if (cabeza != NULL) { --> cabeza = nodo1 --> true| | | | | | | | | | | | | | |
|57| nodo* temp = cabeza;| | | | | | | |nodo1| | | | | | |
|58| cabeza = cabeza->siguiente;| | | | | | |Null| | | | | | | |
|59| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | |
|60| free(temp);| | | | | | | | |free|free|free| | | |
|65| interesado[1] = 0;| | | | | |0| | | | | | | | |
|66| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | |
|80| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | |
|51| i++|5| | | | | | | | | | | | | |
|51| i < 5 --> i=5 --> false| | | | | | | | | | | | | | |
|67| termina ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | |
|68| finaliza hilo_consumidor --> return NULL;| | | | | | | | | | | | | | |
|69| termina funcion --> consumidor| | | | | | | | | | | | | | |
|82| return 0;| | | | | | | | | | | | | | |
|83| finalza main| | | | | | | | | | | | | | |
| | Fin del programa| | | | | | | | | | | | | | |
</br>

#### PE_ALamport´s Backery

| | | | | |turno| |eligiendo[]| | | |nodo1| | |nodo2| | |
|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|:----|
|L|Sentencia|i|id_productor|id_consumidor|[0]|[1]|[0]|[1]|cabeza|temp|valor|prioridad|siguiente|valor|prioridad|siguiente|
|14| nodo* cabeza = NULL;| | | | | | | |Null| | | | | | | |
|16| int turno = [2];| | | | | | | | | | | | | | | |
|17| int eligiendo[2] = {0, 0};| | | | | |0|0| | | | | | | | |
|81| Inicia int main() {| | | | | | | | | | | | | | | |
|82| iniciamos para crear pseudoaleatorios --> srand(time(NULL));| | | | | | | | | | | | | | | |
|83| declarar  hilos --> pthread_t hilo_productor, hilo_consumidor;| | | | | | | | | | | | | | | |
|84| int id_productor = 1, id_consumidor = 2;| |1|2| | | | | | | | | | | | |
|86| crear hilo_productor --> pthread_create(&hilo_productor, NULL, productor, id_productor);| | | | | | | | | | | | | | | |
|87| crear hilo_consumidor --> pthread_create(&hilo_consumidor, NULL, consumidor, id_consumidor);| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|35| inicia funcion  --> void* productor(void* arg) {| | | | | | | | | | | | | | | |
|36| desenpaquetar id_productor --> int id = *(int*)arg;| | | | | | | | | | | | | | | |
|37| inicio ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | | |
|37| int i = 0|0| | | | | | | | | | | | | | |
|37| i < 5 --> i=0 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=null, turno[0]=1 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=10| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | |10| | | | | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | |3| | | | |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | |Null| | | |
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | |Null| | | |
|47| cabeza = nuevo;| | | | | | | |nodo1| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|56| inicia funcion --> void* consumidor(void* arg) {| | | | | | | | | | | | | | | |
|57| desenpaquetar id_consumidor--> int id = *(int*)arg;| | | | | | | | | | | | | | | |
|58| inicio ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | | |
|58| int i = 0|0| | | | | | | | | | | | | | |
|58| i < 5 --> i=0 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=0, turno[1]=null --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo1 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |nodo1| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Null| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | |free|free|free| | | |
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|1| | | | | | | | | | | | | | |
|37| i < 5 --> i=1 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=11| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | |11| | | | | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | |1| | | | |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | |Null| | | |
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | |Null| | | |
|47| cabeza = nuevo;| | | | | | | |nodo1| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++|1| | | | | | | | | | | | | | |
|58| i < 5 --> i=1 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo1 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |nodo1| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Null| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | |free|free|free| | | |
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|2| | | | | | | | | | | | | | |
|37| i < 5 --> i=2 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=12| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | |12| | | | | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | |1| | | | |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | |Null| | | |
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | |Null| | | |
|47| cabeza = nuevo;| | | | | | | |Nodo1| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
| | Tiempo de espera insuficiente vuelve a ejecutarse hilo_productor| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|3| | | | | | | | | | | | | | |
|37| i < 5 --> i=3 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=13| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | | | | |13| | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | | | | |2| |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | | | | |Null|
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | | | | |Nodo1|
|47| cabeza = nuevo;| | | | | | | |Nodo2| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++|2| | | | | | | | | | | | | | |
|58| i < 5 --> i=2 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo2 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |Nodo2| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Nodo1| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | | | | |free|free|free|
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|4| | | | | | | | | | | | | | |
|37| i < 5 --> i=4 --> true| | | | | | | | | | | | | | | |
|38| eligiendo[0] = 1;| | | | | |1| | | | | | | | | |
|39| turno[0] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false | | | |1| | | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|40| eligiendo[0] = 0;| | | | | |0| | | | | | | | | |
|42| while (eligiendo[1]); --> eligiendo[1]=0 --> false| | | | | | | | | | | | | | | |
|43| while (turno[1] != 0 && (turno[1] < turno[0] \|\| (turno[1] == turno[0] && 1 < 0))); --> turno[1]=0 --> false| | | | | | | | | | | | | | | |
|45| nodo* nuevo = genera_proceso(id * 10 + i);| |1| | | | | | | | | | | | | |
|23| inicia metodo  --> nodo* genera_proceso(int id) { --> id=14| | | | | | | | | | | | | | | |
|24| nodo* nuevo = (nodo*)malloc(sizeof(nodo));| | | | | | | | | | | | | | | |
|25| nuevo->valor = id;| | | | | | | | | | | | |14| | |
|26| nuevo->prioridad = numero_aleatorio();| | | | | | | | | | | | | | | |
|19| inicia metodo  --> int numero_aleatorio() {| | | | | | | | | | | | | | | |
|20| return (rand() % 4) + 1;| | | | | | | | | | | | | |3| |
|21| termina metodo  --> numero_aleatorio| | | | | | | | | | | | | | | |
|27| nuevo->siguiente = NULL;| | | | | | | | | | | | | | |Null|
|28| return nuevo;| | | | | | | | | | | | | | | |
|29| termina metodo  --> genera_proceso| | | | | | | | | | | | | | | |
|46| nuevo->siguiente = cabeza;| | | | | | | | | | | | | | |Nodo1|
|47| cabeza = nuevo;| | | | | | | |Nodo2| | | | | | | |
|48| printf("Productor %d generó proceso %d con prioridad %d\n", id, nuevo->valor, nuevo->prioridad);| | | | | | | | | | | | | | | |
|50| turno[0] = 0;| | | |0| | | | | | | | | | | |
|51| sleep(1); --> tiempo de espera permite al hilo_consumidor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++|3| | | | | | | | | | | | | | |
|58| i < 5 --> i=3 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo2 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |Nodo2| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Nodo1| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | | | | |free|free|free|
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|89| esperar a que finalice hilo_productor --> pthread_join(hilo_productor, NULL);| | | | | | | | | | | | | | | |
|37| i++|5| | | | | | | | | | | | | | |
|37| i < 5 --> i=5 --> false| | | | | | | | | | | | | | | |
|52| termina ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | | |
|53| finaliza hilo_productor --> return NULL;| | | | | | | | | | | | | | | |
|54| termina funcion --> productor| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++|4| | | | | | | | | | | | | | |
|58| i < 5 --> i=4 --> true| | | | | | | | | | | | | | | |
|59| eligiendo[1] = 1;| | | | | | |1| | | | | | | | |
|60| turno[1] = max_turno() + 1;| | | | | | | | | | | | | | | |
|31| inicia metodo  --> int max_turno() {| | | | | | | | | | | | | | | |
|32| return turno[0] > turno[1] ? turno[0] : turno[1]; --> turno[0]=turno[1] --> false| | | | |1| | | | | | | | | | |
|33| termina metodo  --> max_turno| | | | | | | | | | | | | | | |
|61| eligiendo[1] = 0;| | | | | | |0| | | | | | | | |
|63| while (eligiendo[0]); --> eligiendo[0]=0 --> false| | | | | | | | | | | | | | | |
|64| while (turno[0] != 0 && (turno[0] < turno[1] \|\| (turno[0] == turno[1] && 0 < 1))); --> turno[0]=0 --> false| | | | | | | | | | | | | | | |
|66| if (cabeza != NULL) { --> cabeza = nodo1 --> true| | | | | | | | | | | | | | | |
|67| nodo* temp = cabeza;| | | | | | | | |nodo1| | | | | | |
|68| cabeza = cabeza->siguiente;| | | | | | | |Null| | | | | | | |
|69| printf("Consumidor %d atendió proceso %d con prioridad %d\n", id, temp->valor, temp->prioridad);| | | | | | | | | | | | | | | |
|70| free(temp);| | | | | | | | | |free|free|free| | | |
|75| turno[1] = 0;| | | | |0| | | | | | | | | | |
|76| sleep(2); -->  tiempo de espera permite al hilo_productor trabajar| | | | | | | | | | | | | | | |
|90| esperar a que finalice hilo_consumidor --> pthread_join(hilo_consumidor, NULL);| | | | | | | | | | | | | | | |
|58| i++| | | | | | | | | | | | | | | |
|58| i < 5 --> i=5 --> false| | | | | | | | | | | | | | | |
|77| termina ciclo for --> for (int i = 0; i < 5; i++) {| | | | | | | | | | | | | | | |
|78| finaliza hilo_consumidor --> return NULL;| | | | | | | | | | | | | | | |
|79| termina funcion --> consumidor| | | | | | | | | | | | | | | |
|92| return 0;| | | | | | | | | | | | | | | |
|93| finalza main| | | | | | | | | | | | | | | |
| | Fin del programa| | | | | | | | | | | | | | | |
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

* No se puede garantizar que al salir de un segmento de la memoria este pueda ser traído fácilmente de nuevo, ya que sera necesario  encontrar nuevamente un área de memoria libre ajustada a su tamaño.

* Aparece el problema de la fracmentacion externa. La fragmentación externa es un problema informático que se produce cuando la memoria libre se divide en bloques pequeños y se intercala con la memoria asignada.
</br>

**2. Escribe un programa que simule una tabla de páginas para procesos con acceso aleatorio 
a memoria virtual.**

</br>

### 3.4 Administración de memoria virtual

**1. Escribe un código que implemente el algoritmo de reemplazo de página
 "Least Recently Used" (LRU).**
</br>

**2. Diseña un diagrama que represente el proceso de traducción de direcciones virtuales a físicas en un sistema con memoria virtual.**
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
</br><br>

---

## Actividades: Dispositivos de entrada y salida en Linux

### Actividad 1: Listar dispositivos conectados

En este ejercicio, aprenderá a listar, verificar y analizar los dispositivos de entrada y salida en Linux. 
Usarán comandos básicos y herramientas comunes disponibles en cualquier distribución.

**Objetivo**
Conocer los dispositivos de entrada y salida conectados al sistema.

**Instrucciones**
1.- Abra una terminal en su entorno Linux.
2.- Ejecute los siguientes comandos y anote sus observaciones:

* **`lsblk`: Enumera los dispositivos de bloque.**
```bash
ubuntu@Diego:~$ lsblk
NAME   MAJ:MIN RM   SIZE RO TYPE MOUNTPOINTS
fd0      2:0    1     4K  0 disk 
loop0    7:0    0     4K  1 loop /snap/bare/5
loop1    7:1    0  55,4M  1 loop /snap/core18/2846
loop2    7:2    0  74,2M  1 loop /snap/core22/1380
loop3    7:3    0  73,9M  1 loop /snap/core22/1663
loop4    7:4    0 269,6M  1 loop /snap/firefox/4173
loop5    7:5    0   274M  1 loop /snap/firefox/5361
loop6    7:6    0  11,1M  1 loop /snap/firmware-updater/147
loop7    7:7    0  10,7M  1 loop /snap/firmware-updater/127
loop8    7:8    0 505,1M  1 loop /snap/gnome-42-2204/176
loop9    7:9    0  91,7M  1 loop /snap/gtk-common-themes/1535
loop10   7:10   0 499,2M  1 loop /snap/netbeans/111
loop11   7:11   0 256,5M  1 loop /snap/openjdk/2020
loop12   7:12   0  10,4M  1 loop /snap/snap-store/1134
loop13   7:13   0  10,7M  1 loop /snap/snap-store/1218
loop14   7:14   0  38,7M  1 loop /snap/snapd/21465
loop15   7:15   0   476K  1 loop /snap/snapd-desktop-integration/157
loop16   7:16   0  38,8M  1 loop /snap/snapd/21759
loop17   7:17   0   568K  1 loop /snap/snapd-desktop-integration/253
loop18   7:18   0 150,3M  1 loop /snap/thunderbird/562
loop19   7:19   0 150,3M  1 loop /snap/thunderbird/571
sda      8:0    0    25G  0 disk 
├─sda1   8:1    0     1M  0 part 
└─sda2   8:2    0    25G  0 part /var/snap/firefox/common/host-hunspell
                                 /
sr0     11:0    1    88M  0 rom  /media/ubuntu/CDROM
sr1     11:1    1  1024M  0 rom
```
</br>

* **`lsusb`: Lista los dispositivos conectados a los puertos USB.**
```bash
ubuntu@Diego:~$ lsusb
Bus 001 Device 001: ID 1d6b:0001 Linux Foundation 1.1 root hub
Bus 001 Device 002: ID 0e0f:0003 VMware, Inc. Virtual Mouse
Bus 001 Device 003: ID 0e0f:0002 VMware, Inc. Virtual USB Hub
Bus 001 Device 004: ID 0e0f:0008 VMware, Inc. Virtual Bluetooth Adapter
Bus 002 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub
```
</br>

* **`lspci`: Muestra los dispositivos conectados al bus PCI.**
```bash
ubuntu@Diego:~$ lspci
00:00.0 Host bridge: Intel Corporation 440BX/ZX/DX - 82443BX/ZX/DX Host bridge (rev 01)
00:01.0 PCI bridge: Intel Corporation 440BX/ZX/DX - 82443BX/ZX/DX AGP bridge (rev 01)
00:07.0 ISA bridge: Intel Corporation 82371AB/EB/MB PIIX4 ISA (rev 08)
00:07.1 IDE interface: Intel Corporation 82371AB/EB/MB PIIX4 IDE (rev 01)
00:07.3 Bridge: Intel Corporation 82371AB/EB/MB PIIX4 ACPI (rev 08)
00:07.7 System peripheral: VMware Virtual Machine Communication Interface (rev 10)
00:0f.0 VGA compatible controller: VMware SVGA II Adapter
00:10.0 SCSI storage controller: Broadcom / LSI 53c1030 PCI-X Fusion-MPT Dual Ultra320 SCSI (rev 01)
00:11.0 PCI bridge: VMware PCI bridge (rev 02)
00:15.0 PCI bridge: VMware PCI Express Root Port (rev 01)
00:15.1 PCI bridge: VMware PCI Express Root Port (rev 01)
00:15.2 PCI bridge: VMware PCI Express Root Port (rev 01)
00:15.3 PCI bridge: VMware PCI Express Root Port (rev 01)
00:15.4 PCI bridge: VMware PCI Express Root Port (rev 01)
00:15.5 PCI bridge: VMware PCI Express Root Port (rev 01)
00:15.6 PCI bridge: VMware PCI Express Root Port (rev 01)
00:15.7 PCI bridge: VMware PCI Express Root Port (rev 01)
00:16.0 PCI bridge: VMware PCI Express Root Port (rev 01)
00:16.1 PCI bridge: VMware PCI Express Root Port (rev 01)
00:16.2 PCI bridge: VMware PCI Express Root Port (rev 01)
00:16.3 PCI bridge: VMware PCI Express Root Port (rev 01)
00:16.4 PCI bridge: VMware PCI Express Root Port (rev 01)
00:16.5 PCI bridge: VMware PCI Express Root Port (rev 01)
00:16.6 PCI bridge: VMware PCI Express Root Port (rev 01)
00:16.7 PCI bridge: VMware PCI Express Root Port (rev 01)
00:17.0 PCI bridge: VMware PCI Express Root Port (rev 01)
00:17.1 PCI bridge: VMware PCI Express Root Port (rev 01)
00:17.2 PCI bridge: VMware PCI Express Root Port (rev 01)
00:17.3 PCI bridge: VMware PCI Express Root Port (rev 01)
00:17.4 PCI bridge: VMware PCI Express Root Port (rev 01)
00:17.5 PCI bridge: VMware PCI Express Root Port (rev 01)
00:17.6 PCI bridge: VMware PCI Express Root Port (rev 01)
00:17.7 PCI bridge: VMware PCI Express Root Port (rev 01)
00:18.0 PCI bridge: VMware PCI Express Root Port (rev 01)
00:18.1 PCI bridge: VMware PCI Express Root Port (rev 01)
00:18.2 PCI bridge: VMware PCI Express Root Port (rev 01)
00:18.3 PCI bridge: VMware PCI Express Root Port (rev 01)
00:18.4 PCI bridge: VMware PCI Express Root Port (rev 01)
00:18.5 PCI bridge: VMware PCI Express Root Port (rev 01)
00:18.6 PCI bridge: VMware PCI Express Root Port (rev 01)
00:18.7 PCI bridge: VMware PCI Express Root Port (rev 01)
02:00.0 USB controller: VMware USB1.1 UHCI Controller
02:01.0 Ethernet controller: Intel Corporation 82545EM Gigabit Ethernet Controller (Copper) (rev 01)
02:02.0 Multimedia audio controller: Ensoniq ES1371/ES1373 / Creative Labs CT2518 (rev 02)
02:03.0 USB controller: VMware USB2 EHCI Controller
02:04.0 SATA controller: VMware SATA AHCI controller
```
</br>

* **`dmesg | grep usb`: Muestra los mensajes del kernel relacionados con dispositivos USB.**
```bash
sudo dmesg | grep usb
[sudo] contraseña para ubuntu: 
[    1.997897] usbcore: registered new interface driver usbfs
[    1.997908] usbcore: registered new interface driver hub
[    1.998659] usbcore: registered new device driver usb
[    2.293740] usb usb1: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 6.08
[    2.293744] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.293747] usb usb1: Product: UHCI Host Controller
[    2.293749] usb usb1: Manufacturer: Linux 6.8.0-49-generic uhci_hcd
[    2.293751] usb usb1: SerialNumber: 0000:02:00.0
[    2.306199] usb usb2: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 6.08
[    2.306202] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    2.306205] usb usb2: Product: EHCI Host Controller
[    2.306207] usb usb2: Manufacturer: Linux 6.8.0-49-generic ehci_hcd
[    2.306209] usb usb2: SerialNumber: 0000:02:03.0
[    2.521640] usb 1-1: new full-speed USB device number 2 using uhci_hcd
[    2.664842] usb 1-1: New USB device found, idVendor=0e0f, idProduct=0003, bcdDevice= 1.03
[    2.664855] usb 1-1: New USB device strings: Mfr=1, Product=2, SerialNumber=0
[    2.664859] usb 1-1: Product: VMware Virtual USB Mouse
[    2.664863] usb 1-1: Manufacturer: VMware
[    2.786754] usb 1-2: new full-speed USB device number 3 using uhci_hcd
[    2.981344] usb 1-2: New USB device found, idVendor=0e0f, idProduct=0002, bcdDevice= 1.00
[    2.981354] usb 1-2: New USB device strings: Mfr=1, Product=2, SerialNumber=0
[    2.981357] usb 1-2: Product: VMware Virtual USB Hub
[    2.981361] usb 1-2: Manufacturer: VMware, Inc.
[    3.290735] usb 1-2.1: new full-speed USB device number 4 using uhci_hcd
[    3.394929] usb 1-2.1: New USB device found, idVendor=0e0f, idProduct=0008, bcdDevice= 1.00
[    3.394939] usb 1-2.1: New USB device strings: Mfr=1, Product=2, SerialNumber=3
[    3.394943] usb 1-2.1: Product: Virtual Bluetooth Adapter
[    3.394946] usb 1-2.1: Manufacturer: VMware
[    3.394949] usb 1-2.1: SerialNumber: 000650268328
[    3.815644] usbcore: registered new interface driver usbhid
[    3.815649] usbhid: USB HID core driver
[    3.953423] input: VMware VMware Virtual USB Mouse as /devices/pci0000:00/0000:00:11.0/0000:02:00.0/usb1/1-1/1-1:1.0/0003:0E0F:0003.0001/input/input5
[    3.956797] hid-generic 0003:0E0F:0003.0001: input,hidraw0: USB HID v1.10 Mouse [VMware VMware Virtual USB Mouse] on usb-0000:02:00.0-1/input0
[   14.586983] usbcore: registered new interface driver btusb
```
</br>

3.- Conteste:

* ¿Qué tipos de dispositivos se muestran en la salida de `lsblk`?
  
   Programas y aplicaciones.
   </br>
* ¿Cuál es la diferencia entre `lsusb` y `lspci`?
  
   lsusb muestra los dispositivos que estan conectados a los puertos USB y lspci muestra los
   dispositivos que estan conectados al bus PCI.
   </br>
* ¿Qué información adicional proporciona `dmesg | grep usb`?
  
   credenciales del USB o proceso relacionado e información sobre su estado y origen.
   </br><br>

### Actividad 2: Verificar dispositivos de almacenamiento

**Objetivo**

Aprender cómo identificar discos duros, particiones y su configuración.

**Instrucciones**

1.- Use el comando `fdisk -l` para listar todos los discos y particiones.

```bash
ubuntu@Diego:~$ sudo fdisk -l
[sudo] contraseña para ubuntu: 
Disco /dev/loop0: 4 KiB, 4096 bytes, 8 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop1: 55,36 MiB, 58052608 bytes, 113384 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop2: 74,24 MiB, 77844480 bytes, 152040 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop3: 73,88 MiB, 77463552 bytes, 151296 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop4: 269,63 MiB, 282722304 bytes, 552192 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop5: 274,05 MiB, 287358976 bytes, 561248 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop6: 11,11 MiB, 11649024 bytes, 22752 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop7: 10,72 MiB, 11239424 bytes, 21952 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/fd0: 1,41 MiB, 1474560 bytes, 2880 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes
Tipo de etiqueta de disco: dos
Identificador del disco: 0x90909090

Dispositivo Inicio   Comienzo      Final   Sectores Tamaño Id Tipo
/dev/fd0p1         2425393296 4850786591 2425393296   1,1T 90 desconocido
/dev/fd0p2         2425393296 4850786591 2425393296   1,1T 90 desconocido
/dev/fd0p3         2425393296 4850786591 2425393296   1,1T 90 desconocido
/dev/fd0p4         2425393296 4850786591 2425393296   1,1T 90 desconocido


Disco /dev/sda: 25 GiB, 26843545600 bytes, 52428800 sectores
Disk model: VMware Virtual S
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes
Tipo de etiqueta de disco: gpt
Identificador del disco: E4C04A8C-38B9-4062-96E4-7CA64D3937C9

Dispositivo Comienzo    Final Sectores Tamaño Tipo
/dev/sda1       2048     4095     2048     1M Arranque de BIOS
/dev/sda2       4096 52426751 52422656    25G Sistema de ficheros de Linux


Disco /dev/loop8: 505,09 MiB, 529625088 bytes, 1034424 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop9: 91,69 MiB, 96141312 bytes, 187776 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop10: 499,23 MiB, 523476992 bytes, 1022416 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop11: 256,54 MiB, 269000704 bytes, 525392 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop12: 10,36 MiB, 10862592 bytes, 21216 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop13: 10,67 MiB, 11186176 bytes, 21848 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop14: 38,73 MiB, 40615936 bytes, 79328 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop15: 476 KiB, 487424 bytes, 952 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop16: 38,83 MiB, 40714240 bytes, 79520 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop17: 568 KiB, 581632 bytes, 1136 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop18: 150,3 MiB, 157601792 bytes, 307816 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes


Disco /dev/loop19: 150,31 MiB, 157609984 bytes, 307832 sectores
Unidades: sectores de 1 * 512 = 512 bytes
Tamaño de sector (lógico/físico): 512 bytes / 512 bytes
Tamaño de E/S (mínimo/óptimo): 512 bytes / 512 bytes
```
</br>

2.- Utilice `blkid` para ver los identificadores UUID y los tipos de sistema de archivos.

```bash
ubuntu@Diego:~$ blkid
/dev/sda2: UUID="a8f5dedd-9c2f-468c-a861-6fd93b12b81a" BLOCK_SIZE="4096" TYPE="ext4" PARTUUID="b516a9f6-b2eb-4861-bce7-7ef975a10d10"
/dev/sr0: BLOCK_SIZE="2048" UUID="2024-05-08-15-07-21-00" LABEL="CDROM" TYPE="iso9660"
```
</br>

3.- Use `df -h` para listar los dispositivos montados y su espacio disponible.

```bash
ubuntu@Diego:~$ df -h
S.ficheros     Tamaño Usados  Disp Uso% Montado en
tmpfs            790M   2,0M  788M   1% /run
/dev/sda2         25G    13G   11G  57% /
tmpfs            3,9G      0  3,9G   0% /dev/shm
tmpfs            5,0M   8,0K  5,0M   1% /run/lock
tmpfs            790M   132K  790M   1% /run/user/1000
/dev/sr0          88M    88M     0 100% /media/ubuntu/CDROM
```
</br>

4.- Conteste:

* ¿Qué dispositivos de almacenamiento están conectados a su sistema?
  
   Disco /dev/loop --> 0 a 19, Disco /dev/fd --> 0 a 4 y Disco /dev/sda --> 0 a 2,

   </br>
* ¿Qué particiones están montadas actualmente?
  
   tmpfs, /dev/sda2 y /dev/sr0
   </br>
* ¿Qué tipo de sistemas de archivos se usan en las particiones?
  
   ext4 y iso9660
   </br><br>

### Actividad 3: Explorar dispositivos de entrada

**Objetivo**

Identificar dispositivos como teclados, ratones y cámaras.

**Instrucciones**

1.- Ejecute `cat /proc/bus/input/devices` para listar los dispositivos de entrada.

```bash
ubuntu@Diego:~$ cat /proc/bus/input/devices
I: Bus=0019 Vendor=0000 Product=0001 Version=0000
N: Name="Power Button"
P: Phys=LNXPWRBN/button/input0
S: Sysfs=/devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
U: Uniq=
H: Handlers=kbd event0 
B: PROP=0
B: EV=3
B: KEY=8000 10000000000000 0

I: Bus=0011 Vendor=0001 Product=0001 Version=ab41
N: Name="AT Translated Set 2 keyboard"
P: Phys=isa0060/serio0/input0
S: Sysfs=/devices/platform/i8042/serio0/input/input1
U: Uniq=
H: Handlers=sysrq kbd event1 leds 
B: PROP=0
B: EV=120013
B: KEY=402000000 3803078f800d001 feffffdfffefffff fffffffffffffffe
B: MSC=10
B: LED=7

I: Bus=0011 Vendor=0002 Product=0013 Version=0006
N: Name="VirtualPS/2 VMware VMMouse"
P: Phys=isa0060/serio1/input1
S: Sysfs=/devices/platform/i8042/serio1/input/input4
U: Uniq=
H: Handlers=mouse0 event2 
B: PROP=0
B: EV=b
B: KEY=70000 0 0 0 0
B: ABS=3

I: Bus=0011 Vendor=0002 Product=0013 Version=0006
N: Name="VirtualPS/2 VMware VMMouse"
P: Phys=isa0060/serio1/input0
S: Sysfs=/devices/platform/i8042/serio1/input/input3
U: Uniq=
H: Handlers=mouse1 event3 
B: PROP=1
B: EV=7
B: KEY=30000 0 0 0 0
B: REL=103

I: Bus=0003 Vendor=0e0f Product=0003 Version=0110
N: Name="VMware VMware Virtual USB Mouse"
P: Phys=usb-0000:02:00.0-1/input0
S: Sysfs=/devices/pci0000:00/0000:00:11.0/0000:02:00.0/usb1/1-1/1-1:1.0/0003:0E0F:0003.0001/input/input5
U: Uniq=
H: Handlers=mouse2 event4 
B: PROP=0
B: EV=17
B: KEY=ff0000 0 0 0 0
B: REL=903
B: MSC=10

I: Bus=0000 Vendor=0000 Product=0000 Version=0000
N: Name="VMware DnD UInput pointer"
P: Phys=
S: Sysfs=/devices/virtual/input/input6
U: Uniq=
H: Handlers=mouse3 event5 js0 
B: PROP=0
B: EV=b
B: KEY=10000 0 0 0 0
B: ABS=3
```
</br>

2.- Use `evtest` para monitorear eventos de dispositivos de entrada (requiere permisos de superusuario).

```bash
ubuntu@Diego:~$ sudo evtest
sudo: evtest: orden no encontrada
```
</br>

3.- Investigue los siguientes dispositivos:
   
   * Teclado
   
     El teclado es un dispositivo de entrada que utiliza una disposición de teclas, para que actúen como interruptores electrónicos que envían información a la computadora.
     El teclado tiene entre 99 y 108 teclas; y, está dividido en cuatro bloques: de funciones, alfanumérico, especial y numérico.
    
     Un teclado realiza sus funciones mediante un microcontrolador que tiene un programa instalado para su funcionamiento, que es ejecutado y realiza la exploración matricial 
     de las teclas cuando se presiona alguna, y así determinar cuales están pulsadas.

     Por cada pulsación o liberación de una tecla el microcontrolador envía un código identificativo que se llama Scan Code. Para permitir que varias teclas sean pulsadas simultáneamente, 
     el teclado genera un código diferente cuando una tecla se pulsa y cuando dicha tecla se libera. Si el microcontrolador nota que ha cesado la pulsación de la tecla, el nuevo código generado (Break Code) 
     tendrá un valor de pulsación incrementado en 128. Estos códigos son enviados al circuito microcontrolador donde serán tratados gracias al administrador de teclado, que no es más que un programa de la BIOS 
     y que determina qué carácter le corresponde a la tecla pulsada comparándolo con una tabla de caracteres que hay en el kernel, generando una interrupción por hardware y enviando los datos al procesador. 
     El microcontrolador también posee cierto espacio de memoria RAM que hace que sea capaz de almacenar las últimas pulsaciones en caso de que no se puedan leer a causa de la velocidad de tecleo del usuario. 
     Hay que tener en cuenta, que cuando realizamos una pulsación se pueden producir rebotes que duplican la señal. Con el fin de eliminarlos, el teclado también dispone de un circuito que limpia la señal.
   </br>

   * Mouse
   
     El ratón o mouse es un dispositivo apuntador utilizado para facilitar el manejo de un entorno gráfico en una computadora.

     Detecta su movimiento relativo en dos dimensiones por la superficie plana en la que se apoya, reflejándose a través 
     de un puntero, cursor o flecha en el monitor. El ratón se puede conectar de forma cableada (puertos PS/2 y USB), 
     o inalámbricamente por medio de un adaptador USB que se conecta al ordenador y este recibe la señal del ratón, 
     aunque también pueden ser por medio de conectividad infrarroja o Bluetooth.
    
     Es, desde hace un tiempo, común en cualquier equipo informático, de tal manera que todos los sistemas operativos
     modernos suelen incluir de serie un controlador software básico para que este pueda funcionar de manera inmediata y 
     correcta. No obstante, es normal encontrar software propio del fabricante que puede añadir una serie de funciones 
     opcionales, o propiamente los controladores si son necesarios.

   </br>

   * Controladores USB adicionales
  
      * **Controlador de dispositivo de audio USB**
  
        El controlador de dispositivo de audio USB soporta dispositivos USB isocronos como altavoces de audio USB. 
        Cada dispositivo de audio USB se representa como las siguientes interfaces: control de audio y transmisión
        de audio. Aunque estas interfaces están asociadas con el dispositivo único, las interfaces se tratan como 
        dispositivos separados virtualmente. El archivo especial /dev/paud0 se crea para la interfaz de control de audio 
        y el archivo especial /dev/paudas0 se crea para la interfaz de streaming de audio.

        La interfaz de control de audio se utiliza para acceder a las funciones internas de un dispositivo de audio. 
        Cualquier solicitud para cambiar los controles de audio dentro de las unidades o terminales de la función
        de audio se dirige a la interfaz de control de audio de la función.
      </br>
 
      * **Controlador de dispositivo de cliente de teclado USB**
      
        El cliente de teclado consta de un programa de fondo que interactúa con el controlador del sistema USB (USBD) 
        y un programa frontal que interactúa con las aplicaciones AIX® como, por ejemplo, el terminal de baja función (LFT) 
        y las aplicaciones de servidor X. El controlador del cliente del teclado USB no tiene conocimiento del hardware del 
        adaptador USB subyacente. En su lugar, el controlador de cliente envía solicitudes de control al teclado USB a través 
        de USBD y recibe sucesos de entrada a través de USBD. El controlador de cliente de teclado se identifica a sí mismo 
        como un controlador de teclado genérico estableciendo el campo devid en sus datos predefinidos de Object Data Manager (ODM) en 030101. 
        El dispositivo padre del cliente de teclado es el pseudo dispositivo, usb0. El cliente de teclado no tiene ningún hijo. 
        Cada dispositivo de teclado que está conectado al sistema AIX se representa como /dev/kbd0, /dev/kbd1, etc.

        El controlador de cliente de teclado USB da soporte a la conexión de varios dispositivos de teclado USB. 
        Cada dispositivo se enumera en ODM y se marca como disponible. El controlador de cliente trata todos los 
        teclados como un único dispositivo lógico. Los valores de diodo emisor de luz (LED) se envían a todos los 
        teclados y los sucesos de entrada de todos los teclados se envían a un único anillo de entrada. 
        El seguimiento de estado por parte del controlador de cliente garantiza que una clave no genere sucesos 
        de interrupción consecutivos y que el retardo y la repetición de tipo gráfico se manejen adecuadamente.

        Se crean archivos especiales (por ejemplo, /dev/kbd0, /dev/kbd1, etc.) para cada dispositivo de teclado USB. 
        Si hay al menos un dispositivo de teclado USB disponible, una aplicación (normalmente la aplicación de servidor 
        LFT o X) puede abrir cualquiera de los archivos especiales del teclado USB.
      </br>

      * **Controlador de dispositivo de cliente de ratón USB**
      
        El controlador de dispositivo de cliente de ratón USB consta de un programa de fondo que interactúa con el controlador 
        del sistema USB (USBD) y un programa frontal que interactúa con una aplicación AIX® como la aplicación de servidor X. 
        El controlador de cliente no tiene conocimiento del hardware del adaptador USB subyacente. En su lugar, el controlador de 
        cliente envía solicitudes de control al ratón USB a través de USBD y recibe sucesos de entrada a través de USBD. 
        El controlador del cliente USB del ratón da soporte a la conexión de varios dispositivos USB del ratón. 
        Cada dispositivo se enumera en el Gestor de datos de objeto (ODM) y se marca como disponible. El controlador de cliente 
        trata todos los dispositivos del ratón como un único dispositivo lógico. Los sucesos de entrada de todos los dispositivos 
        se envían a un único anillo de entrada.

        Se crea un archivo especial de dispositivo para cada dispositivo de ratón USB. Hasta que haya al menos un dispositivo de 
        ratón USB que esté marcado como disponible, una aplicación (normalmente la aplicación de servidor X) puede abrir cualquiera 
        de los archivos especiales del ratón USB porque el controlador del cliente ignora la especificación de número menor. 
        Dispositivo de ratón USB que se añade y configura después de que la operación abierta se añada automáticamente al conjunto 
        abierto. Los archivos especiales de dispositivo (por ejemplo, /dev/mouse0, /dev/mouse1, etc.) se crean para cada dispositivo de ratón USB.
      </br>

4.- Conteste:
   
* ¿Qué eventos genera cada dispositivo al interactuar con ellos?
   
   interrupciones de hardware y e/s.
   </br>

* ¿Cómo se identifican los dispositivos en `/proc/bus/input/devices`?
  
   Por medio de letras y numeros.
   </br><br>

### Actividad 4: Examinar dispositivos de salida

**Objetivo**

Entender cómo identificar dispositivos de salida como monitores y tarjetas de sonido.

**Instrucciones**

1.- Use `xrandr` para listar las pantallas conectadas y sus resoluciones.

```bash
ubuntu@Diego:~$ xrandr
Screen 0: minimum 16 x 16, current 1920 x 947, maximum 32767 x 32767
Virtual-1 connected primary 1920x947+0+0 (normal left inverted right x axis y axis) 0mm x 0mm
   1920x947      59.88*+
   1152x864      59.96  
   1024x768      59.92  
   800x600       59.86  
   640x480       59.38  
   320x240       59.52  
   1440x900      59.89  
   1280x800      59.81  
   1152x720      59.75  
   960x600       59.63  
   928x580       59.88  
   800x500       59.50  
   768x480       59.90  
   720x480       59.71  
   640x400       59.95  
   320x200       58.96  
   1600x900      59.95  
   1368x768      59.88  
   1280x720      59.86  
   1024x576      59.90  
   864x486       59.92  
   720x400       59.55  
   640x350       59.77  
```
</br>

2.- Ejecute `aplay -l` para listar las tarjetas de sonido disponibles.

```bash
ubuntu@Diego:~$ aplay -l
**** Lista de PLAYBACK dispositivos hardware ****
tarjeta 0: AudioPCI [Ensoniq AudioPCI], dispositivo 0: ES1371/1 [ES1371 DAC2/ADC]
  Subdispositivos: 1/1
  Subdispositivo #0: subdevice #0
tarjeta 0: AudioPCI [Ensoniq AudioPCI], dispositivo 1: ES1371/2 [ES1371 DAC1]
  Subdispositivos: 1/1
  Subdispositivo #0: subdevice #0
```
</br>

3.- Use `lsof /dev/snd/*` para ver qué procesos están utilizando la tarjeta de sonido.

```bash
ubuntu@Diego:~$ lsof /dev/snd/*
COMMAND    PID   USER   FD   TYPE DEVICE SIZE/OFF NODE NAME
pipewire  2406 ubuntu   59u   CHR  116,1      0t0  436 /dev/snd/seq
pipewire  2406 ubuntu   60u   CHR  116,1      0t0  436 /dev/snd/seq
wireplumb 2412 ubuntu   35u   CHR  116,6      0t0  802 /dev/snd/controlC0
```
</br>

4.- Conteste:

* ¿Qué salidas de video están disponibles en su sistema?
    
   1920x947, 1152x864, 1024x768, 800x600, 640x480, 320x240, 1440x900, 1280x800, 1152x720, 960x600, 928x580, 
   800x500, 768x480, 720x480, 640x40, 320x200, 1600x900, 1368x768, 1280x720, 1024x576, 864x486, 720x400, 640x350         
   </br>

* ¿Qué dispositivos de sonido se detectaron?
    
   tarjeta 0: AudioPCI [Ensoniq AudioPCI], dispositivo 0: ES1371/1 [ES1371 DAC2/ADC] 
   y tarjeta 0: AudioPCI [Ensoniq AudioPCI], dispositivo 1: ES1371/2 [ES1371 DAC1]
   </br>

* ¿Qué procesos están usando la tarjeta de sonido?
    
   pipewire y wireplumb
   </br><br>

### Actividad 5: Crear un script de resumen

**Objetivo**

Automatizar la recopilación de información de dispositivos de entrada y salida.

**Instrucciones**

1.- Cree un archivo llamado `dispositivos.sh` y agregue el siguiente contenido: 
#!/bin/bash echo "Dispositivos de bloque:" lsblk echo "Dispositivos USB:" lsusb echo "Dispositivos PCI:" 
lspci echo "Dispositivos de entrada:" cat /proc/bus/input/devices echo "Salidas de video:" xrandr echo "Tarjetas de sonido:" aplay -l

</br>

![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/archivo_es.png)

</br>

2.- Ejecute el script usando `bash dispositivos.sh`.

```bash
ubuntu@Diego:~$ touch dispositivos.sh
ubuntu@Diego:~$ nano dispositivos.sh
ubuntu@Diego:~$ bash dispositivos.sh
lsblk: echo: no es un dispositivo de bloques
lsblk: Dispositivos USB:: no es un dispositivo de bloques
Usage: lsusb [options]...
List USB devices
  -v, --verbose
      Increase verbosity (show descriptors)
  -s [[bus]:][devnum]
      Show only devices with specified device and/or
      bus numbers (in decimal)
  -d vendor:[product]
      Show only devices with the specified vendor and
      product ID numbers (in hexadecimal)
  -D device
      Selects which device lsusb will examine
  -t, --tree
      Dump the physical USB device hierarchy as a tree
  -V, --version
      Show version of program
  -h, --help
      Show usage and help
Usage: lspci [<switches>]

Basic display modes:
-mm		Produce machine-readable output (single -m for an obsolete format)
-t		Show bus tree

Display options:
-v		Be verbose (-vv or -vvv for higher verbosity)
-k		Show kernel drivers handling each device
-x		Show hex-dump of the standard part of the config space
-xxx		Show hex-dump of the whole config space (dangerous; root only)
-xxxx		Show hex-dump of the 4096-byte extended config space (root only)
-b		Bus-centric view (addresses and IRQ's as seen by the bus)
-D		Always show domain numbers
-P		Display bridge path in addition to bus and device number
-PP		Display bus path in addition to bus and device number

Resolving of device ID's to names:
-n		Show numeric ID's
-nn		Show both textual and numeric ID's (names & numbers)
-q		Query the PCI ID database for unknown ID's via DNS
-qq		As above, but re-query locally cached entries
-Q		Query the PCI ID database for all ID's via DNS

Selection of devices:
-s [[[[<domain>]:]<bus>]:][<slot>][.[<func>]]	Show only devices in selected slots
-d [<vendor>]:[<device>][:<class>]		Show only devices with specified ID's

Other options:
-i <file>	Use specified ID database instead of /usr/share/misc/pci.ids.gz
-p <file>	Look up kernel modules in a given file instead of default modules.pcimap
-M		Enable `bus mapping' mode (dangerous; root only)

PCI access options:
-A <method>	Use the specified PCI access method (see `-A help' for a list)
-O <par>=<val>	Set PCI access parameter (see `-O help' for a list)
-G		Enable PCI access debugging
-H <mode>	Use direct hardware access (<mode> = 1 or 2)
-F <file>	Read PCI configuration dump from a given file
I: Bus=0019 Vendor=0000 Product=0001 Version=0000
N: Name="Power Button"
P: Phys=LNXPWRBN/button/input0
S: Sysfs=/devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
U: Uniq=
H: Handlers=kbd event0 
B: PROP=0
B: EV=3
B: KEY=8000 10000000000000 0

I: Bus=0011 Vendor=0001 Product=0001 Version=ab41
N: Name="AT Translated Set 2 keyboard"
P: Phys=isa0060/serio0/input0
S: Sysfs=/devices/platform/i8042/serio0/input/input1
U: Uniq=
H: Handlers=sysrq kbd event1 leds 
B: PROP=0
B: EV=120013
B: KEY=402000000 3803078f800d001 feffffdfffefffff fffffffffffffffe
B: MSC=10
B: LED=7

I: Bus=0011 Vendor=0002 Product=0013 Version=0006
N: Name="VirtualPS/2 VMware VMMouse"
P: Phys=isa0060/serio1/input1
S: Sysfs=/devices/platform/i8042/serio1/input/input4
U: Uniq=
H: Handlers=mouse0 event2 
B: PROP=0
B: EV=b
B: KEY=70000 0 0 0 0
B: ABS=3

I: Bus=0011 Vendor=0002 Product=0013 Version=0006
N: Name="VirtualPS/2 VMware VMMouse"
P: Phys=isa0060/serio1/input0
S: Sysfs=/devices/platform/i8042/serio1/input/input3
U: Uniq=
H: Handlers=mouse1 event3 
B: PROP=1
B: EV=7
B: KEY=30000 0 0 0 0
B: REL=103

I: Bus=0003 Vendor=0e0f Product=0003 Version=0110
N: Name="VMware VMware Virtual USB Mouse"
P: Phys=usb-0000:02:00.0-1/input0
S: Sysfs=/devices/pci0000:00/0000:00:11.0/0000:02:00.0/usb1/1-1/1-1:1.0/0003:0E0F:0003.0001/input/input5
U: Uniq=
H: Handlers=mouse2 event4 
B: PROP=0
B: EV=17
B: KEY=ff0000 0 0 0 0
B: REL=903
B: MSC=10

I: Bus=0000 Vendor=0000 Product=0000 Version=0000
N: Name="VMware DnD UInput pointer"
P: Phys=
S: Sysfs=/devices/virtual/input/input6
U: Uniq=
H: Handlers=mouse3 event5 js0 
B: PROP=0
B: EV=b
B: KEY=10000 0 0 0 0
B: ABS=3

cat: echo: No existe el archivo o el directorio
cat: 'Salidas de video:': No existe el archivo o el directorio
xrandr: unrecognized option 'echo'
Try 'xrandr --help' for more information.
**** Lista de PLAYBACK dispositivos hardware ****
tarjeta 0: AudioPCI [Ensoniq AudioPCI], dispositivo 0: ES1371/1 [ES1371 DAC2/ADC]
  Subdispositivos: 1/1
  Subdispositivo #0: subdevice #0
tarjeta 0: AudioPCI [Ensoniq AudioPCI], dispositivo 1: ES1371/2 [ES1371 DAC1]
  Subdispositivos: 1/1
  Subdispositivo #0: subdevice #0
```
</br>

3.- Modifique el script para guardar la salida en un archivo llamado `resumendispositivos.txt`.

</br>

![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/archivo_es2.png)

</br>

```bash
buntu@Diego:~$ cat resumendispositivos.txt

I: Bus=0019 Vendor=0000 Product=0001 Version=0000
N: Name="Power Button"
P: Phys=LNXPWRBN/button/input0
S: Sysfs=/devices/LNXSYSTM:00/LNXPWRBN:00/input/input0
U: Uniq=
H: Handlers=kbd event0 
B: PROP=0
B: EV=3
B: KEY=8000 10000000000000 0

I: Bus=0011 Vendor=0001 Product=0001 Version=ab41
N: Name="AT Translated Set 2 keyboard"
P: Phys=isa0060/serio0/input0
S: Sysfs=/devices/platform/i8042/serio0/input/input1
U: Uniq=
H: Handlers=sysrq kbd event1 leds 
B: PROP=0
B: EV=120013
B: KEY=402000000 3803078f800d001 feffffdfffefffff fffffffffffffffe
B: MSC=10
B: LED=7

I: Bus=0011 Vendor=0002 Product=0013 Version=0006
N: Name="VirtualPS/2 VMware VMMouse"
P: Phys=isa0060/serio1/input1
S: Sysfs=/devices/platform/i8042/serio1/input/input4
U: Uniq=
H: Handlers=mouse0 event2 
B: PROP=0
B: EV=b
B: KEY=70000 0 0 0 0
B: ABS=3

I: Bus=0011 Vendor=0002 Product=0013 Version=0006
N: Name="VirtualPS/2 VMware VMMouse"
P: Phys=isa0060/serio1/input0
S: Sysfs=/devices/platform/i8042/serio1/input/input3
U: Uniq=
H: Handlers=mouse1 event3 
B: PROP=1
B: EV=7
B: KEY=30000 0 0 0 0
B: REL=103

I: Bus=0003 Vendor=0e0f Product=0003 Version=0110
N: Name="VMware VMware Virtual USB Mouse"
P: Phys=usb-0000:02:00.0-1/input0
S: Sysfs=/devices/pci0000:00/0000:00:11.0/0000:02:00.0/usb1/1-1/1-1:1.0/0003:0E0F:0003.0001/input/input5
U: Uniq=
H: Handlers=mouse2 event4 
B: PROP=0
B: EV=17
B: KEY=ff0000 0 0 0 0
B: REL=903
B: MSC=10

I: Bus=0000 Vendor=0000 Product=0000 Version=0000
N: Name="VMware DnD UInput pointer"
P: Phys=
S: Sysfs=/devices/virtual/input/input6
U: Uniq=
H: Handlers=mouse3 event5 js0 
B: PROP=0
B: EV=b
B: KEY=10000 0 0 0 0
B: ABS=3

Salidas de video:
**** Lista de PLAYBACK dispositivos hardware ****
tarjeta 0: AudioPCI [Ensoniq AudioPCI], dispositivo 0: ES1371/1 [ES1371 DAC2/ADC]
  Subdispositivos: 1/1
  Subdispositivo #0: subdevice #0
tarjeta 0: AudioPCI [Ensoniq AudioPCI], dispositivo 1: ES1371/2 [ES1371 DAC1]
  Subdispositivos: 1/1
  Subdispositivo #0: subdevice #0
```
</br>

4.- Conteste:

* ¿Qué ventajas tiene usar un script para recopilar esta información?
    
   Ahorra una gran cantidad de tiempo al no tener que ejecutar cada instrucción manualmente,
   permite guardar la informacion resultante para revisarla en otro momento y permite darle una mejor 
   apariencia a la informacion mostrada.
   </br>

* ¿Qué cambios realizaría para personalizar el script?
 
   Darle mas espacio a cada instruccion y diferenciarlas de mejor manera. 
   </br><br>

### Actividad 6: Reflexión y discusión

**Objetivo**

Analizar la importancia del manejo de dispositivos en sistemas Linux.

**Instrucciones**

Reflexione sobre lo aprendido y discuta en equipo:

* ¿Qué comando encontró más útil y por qué?
    
   `df -h` y `evtest` porque nos permiten conocer mas informacion de nuestros dispositivos de e/s.
   </br>

* ¿Qué tan importante es conocer los dispositivos conectados al sistema?
   
   Es muy importante pues al conocer mas informacion sobre estos podemos trabajar de mejor manera con ellos.
   </br>

* ¿Cómo podrían estos conocimientos aplicarse en la administración de sistemas?
    
   Verificar el estado de algun dispositivo para encontrar errores, crear scrips que nos permitan realizar tareas
   de comprovacion y mantenimiento mas rapidamente y encontrar peligros que pongan en riesgo nuestro sistema.  
   </br>

---
</br>

## Actividad Final

### Sistemas de Archivos

#### **Ejercicio 1: Concepto y noción de archivo real y virtual**

**Descripción:**

Define los conceptos de archivo real y archivo virtual y explica sus diferencias.
Identifica ejemplos prácticos de cada tipo en sistemas operativos actuales.

**Tareas:**

* Define el concepto de archivo real y archivo virtual.

   **Archivo virtual:**
   Un archivo virtual, es un archivo de uso temporal que es utilizado por los procesos del sistema mientras 
   se están ejecutando dichos procesos. estos archivos se crean durante la ejecución de un sistema y los 
   utiliza para el almacenamiento de información, intercambio y organización mientras se ejecuta el sistema, 
   su tamaño es muy variable y terminan al detener la ejecución del sistema, muchos de ellos son borrados.
   </br>

   **Archivo real:**
   Es un objeto que contiene programas, datos o cualquier otro elemento. Un archivo se muestra de manera real, 
   en la información del espacio que ocupa en un disco duro o sistema de almacenamiento, en otras palabras su tamaño en bytes.
   Una característica de este tipo de archivos es que a mayor texto que almacena el archivo, mayor es el espacio en disco que consume dicho archivo.

   Estos archivos se crean durante la ejecución de un sistema y los utiliza para el almacenamiento de información, 
   intercambio y organización mientras se ejecuta el sistema su tamaño es muy variable y terminan al detener la 
   ejecución del sistema, muchos de ellos son borrados, por ejemplo, los archivos.*.tmp
   Archivo con extensión TMP es más comúnmente utilizado para referirse a un archivo de copia de seguridad 
   o de carácter temporal.
   </br>

* Proporciona ejemplos de cómo los sistemas operativos manejan archivos 
  reales y virtuales.
   </br>
   
   **Sistemas de archivos virtuales**
    
   Para comprender cómo funciona el VFS (virtual file system, Sistema de archivos virtual), veamos un ejemplo en forma cronológica.
   Cuando se arranca el sistema, el sistema de archivos raíz se registra con el VFS. Además, cuando se montan otros sistemas de 
   archivos (ya sea en tiempo de arranque o durante la operación), éstos también se deben registrar con el VFS. Cuando un sistema de archivos se registra, lo que hace
   básicamente es proveer una lista de las direcciones de las funciones que requiere la VFS, ya sea como un vector (tabla) de llamadas extenso 
   o como varios de ellos, uno por cada objeto VFS, según lo demande el VFS. Así, una vez que se ha registrado un sistema de archivos con el VFS, 
   éste sabe cómo leer un bloque de ese sistema, por ejemplo: simplemente llama a la cuarta (o cualquier otra) función en el vector suministrado
   por el sistema de archivos. De manera similar, el VFS sabe entonces también cómo llevar a cabo cada una de las demás funciones 
   que debe suministrar el sistema de archivos concreto: sólo llama a la función cuya dirección se suministró cuando se registró el sistema de archivos.
   
   Una vez que se ha montado un sistema de archivos, se puede utilizar. Por ejemplo, si se ha montado un sistema de archivos en /usr y un proceso realiza la llamada
   </br>

   **open(“/usr/include/unistd.h”, O_RDONLY)**
   </br>

   al analizar sintácticamente la ruta, el VFS ve que se ha montado un nuevo sistema de archivos en /usr y localiza su superbloque, 
   para lo cual busca en la lista de superbloques de los sistemas de archivos montados. Habiendo realizado esto, puede encontrar 
   el directorio raíz del sistema de archivos montado y buscar la ruta include/unistd.h ahí. Entonces, el VFS crea un nodo-v y 
   hace una llamada al sistema de archivos concreto para que devuelva toda la información en el nodo-i del archivo. 
   Esta información se copia al nodo-v (en RAM) junto con otra información, siendo la más importante el apuntador 
   a la tabla de funciones a llamar para las operaciones con los nodos-v, como read, write, close, etcétera.
   
   Una vez que se ha creado el nodo-v, el VFS crea una entrada en la tabla de descriptores de archivos para el proceso que está haciendo 
   la llamada y la establece para que apunte al nuevo nodov. Por último, el VFS devuelve el descriptor de archivo al llamador, de manera 
   que lo pueda utilizar para leer, escribir y cerrar el archivo.
 
   Posteriormente, cuando el proceso realiza una operación read utilizando el descriptor de archivo, el VFS localiza el nodo-v 
   del proceso y las tablas de descriptores de archivos, siguiendo el apuntador hasta la tabla de funciones, todas las cuales son 
   direcciones dentro del sistema de archivos concreto en el que reside el archivo solicitado. La función que maneja a read se llama 
   ahora y el código dentro del sistema de archivos concreto obtiene el bloque solicitado. El VFS no tiene idea acerca de si los datos 
   provienen del disco local, de un sistema de archivos remoto a través de la red, un CD-ROM, una memoria USB o de algo distinto. 
   
   </br>
   
   ![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/d_arvirtuales.png)

   </br>

   **Archivos reles**
   </br>
   
   Por lo general los archivos se almacenan en disco, así que la administración del espacio en disco es una cuestión importante para los diseñadores de sistemas de archivos. Hay dos estrategias generales
   posibles para almacenar un archivo de n bytes: se asignan n bytes consecutivos de espacio en disco
   o el archivo se divide en varios bloques (no necesariamente) contiguos. La misma concesión está pre
   sente en los sistemas de administración de memoria, entre la segmentación pura y la paginación. 
   Como hemos visto, almacenar un archivo como una secuencia contigua de bytes tiene el problema obvio 
   de que si un archivo crece, probablemente tendrá que moverse en el disco. El mismo
   problema se aplica a los segmentos en memoria, excepto que la operación de mover un segmento
   en memoria es rápida, en comparación con la operación de mover un archivo de una posición en el
   disco a otra. Por esta razón, casi todos los sistemas de archivos dividen los archivos en bloques de
   tamaño fijo que no necesitan ser adyacentes.
   
   Una vez que se ha elegido un tamaño de bloque, la siguiente cuestión es cómo llevar registro de los
   bloques libres. Hay dos métodos utilizados ampliamente, como se muestra en la figura 4-22. El primero consiste en utilizar una lista enlazada de bloques de disco, donde cada bloque contiene tantos números 
   de bloques de disco libres como pueda. Con un bloque de 1 KB y un número de bloque de disco de 32 bits, cada bloque en la lista de bloques libres contiene los números de 255 bloques libres (se requiere una ranura para el apuntador al siguiente bloque). Considere un disco de 500 GB, que tiene aproximadamente 488 millones de bloques de disco. Para almacenar todas estas direcciones a 255 por bloque, se requiere una cantidad aproximada de 1.9 millones de bloques. En general se utilizan bloques libres para mantener la lista de bloques libres, por lo que en esencia el almacenamiento es gratuito.

   </br>
   
   ![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/d_arreales.png)

   </br>

   ![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/d_arreales2.png)

   </br>

* Explica un caso práctico donde un archivo virtual sea más útil que un
  archivo real.
 
   Imagina que tenemos un programa que debe hacer el registro de los lanzamientos de una moneda para luego  guardarlos en otra ubicación, sin enbargo cada archivo real solo puede contener la informacion referente 
   a 10 lnzamientos. Para solucionarlo crearemos un archivo virtual donde se registrara la cantidad de lanzamientos que tiene cada uno de los archivos, así evitando que se exceda el numero maximo de  lanzamientos. Una vez finalizado el programa eliminaremos este archivo pues ya no es necesario, de forma  que liberaremos espacio y asi evitaremos desperdiciar el espacio que un archivo real hubiera ocupado.
   
   </br>

#### **Ejercicio 2: Componentes de un sistema de archivos**

**Descripción:**

Investiga los componentes principales de un sistema de archivos y compáralos entre dos sistemas operativos, como Linux y Windows.

**Tareas:**

* Identifica los componentes clave de un sistema de archivos (por ejemplo, metadatos, tablas de asignación, etc.).

   Métodos de acceso, Administración de archivos, Administracion de almacenamiento auxiliar, Mecanismos de integridad y Organización de archivos física y lógica. 
   </br>

* Crea un cuadro comparativo de cómo estos componentes funcionan en sistemas como EXT4 y NTFS.
   
   ![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/Tcomp_SA.png)
   
   </br>

* Describe las ventajas y desventajas de cada sistema basado en sus
  componentes.
   
   #### **NTFS**

   Ventajas:

      * Versatilidad.
      * Seguridad.
      * Compatibilidad con archivos grandes.
      * Compresión de archivos.
      * Recuperación ante errores.
      * Soporte de Metadatos para permitirle al usuario guardar informacion adicional.

   Desventajas:

      * Compatibilidad limitada.
      * Graves problemas de fragmentación.
      * Complejidad.
      * Mayor uso de recursos.

   </br>

   #### **ext4**

   Ventajas:

      * Desempeño mejorado.
      * Compatibilidad con versiones anteriores.
      * Reduce la fragmentación.
      * Compatible con otros sitemas operativos ademas de linux.
      * Buen rendimiento.
      * Mantiene un registro de las transacciones en curso.
  
   Desventajas:

      * Escalabilidad limitada.
      * Sin cifrado nativo.
      * Fragmentación.

   </br>

#### **Ejercicio 3: Organización lógica y física de archivos**

**Descripción:**

Crea un esquema que muestre la organización lógica y física de un sistema
de archivos. Explica cómo se relacionan las estructuras lógicas con las físicas
en el disco.

**Tareas:**

* Diseña un árbol jerárquico que represente la organización lógica de
  directorios y subdirectorios.

   ![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/AA_img.jpeg)
   
   </br>

* Explica cómo se traduce la dirección lógica a la dirección física en el
  disco.
   
   La direccion lógica esta compuesta por un numero de pagina y un desplazamiento de página. El número de página 
   se utiliza como índice para una tabla de páginas. La tabla de páginas contiene la dirección base de cada página en 
   memoria física; esta dirección base se combina con el desplazamiento de página para definir la dirección de memoria 
   física que se envía a la unidad de memoria. 

   </br>

* Proporciona un ejemplo práctico de cómo un archivo se almacena físicamente.

   El esquema de asignación más simple es almacenar cada archivo como una serie contigua de 
   bloques de disco. Así, en un disco con bloques de 1 KB, a un archivo de 50 KB se le asignarían 
   50 bloques consecutivos. Con bloques de 2 KB, se le asignarían 25 bloques consecutivos.
    
   En la figura 4-10(a) podemos ver un ejemplo de asignación de almacenamiento contigua. Aquí
   se muestran los primeros 40 bloques de disco, empezando con el bloque 0, a la izquierda. Al principio el 
   disco estaba vacío, después se escribió un archivo A de cuatro bloques de longitud al disco, empezando 
   desde el principio (bloque 0). Posteriormente se escribió un archivo de seis bloques llamado B, 
   empezando justo después del archivo A. Observe que cada archivo empieza al inicio de un nuevo bloque, 
   por lo que si el archivo A fuera realmente de 31/2 bloques, se desperdiciaría algo de espacio al final 
   del último bloque. En la figura se muestra un total de siete archivos, cada uno empezando en el bloque 
   que va después del final del archivo anterior. Se utiliza sombreado sólo para facilitar la distinción 
   de cada archivo. No tiene un significado real en términos de almacenamiento.


   ![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/AC_img.png)
   
   </br>

   Un ejemplo de un sistema de archivos que utiliza la asignación contigua de bloques es ext4 y NTFS.

   </br>

#### **Ejercicio 4: Mecanismos de acceso a los archivos**

**Descripción:**

Simula diferentes mecanismos de acceso a archivos (secuencial, directo e indexado) en un entorno práctico.

**Tareas:**

* Define los diferentes mecanismos de acceso.   

   **Método de Acceso Secuencial**
  
   Cuando se usa el método de acceso secuencial, lo único que se puede hacer es leer los bytes del archivo en orden, 
   empezando por el principio. No puede saltar de una posición del archivo a otra o leerlo desordenado. Si se quiere 
   volver atrás, hay que volver al principio y releer todo el archivo hasta el punto deseado. Las operaciones más comunes 
   son lecturas y escrituras. Este método organiza los registros secuencialmente en el orden en que se ingresan. Un conjunto 
   de datos que tiene esta organización es un conjunto de datos secuenciales. El usuario organiza registros con otros registros 
   en bloques, cada registro debe examinarse hasta llegar al archivo deseado.

   </br>

   **Método de Acceso Directo**

   Con la llegada de los dispositivos de acceso directo (como los discos magnéticos), surgió la forma de acceso directo, 
   o aleatorio, a un archivo. El archivo se considera como un conjunto de registros, cada uno de los cuales puede ser 
   un byte. Se puede acceder al mismo desordenadamente moviendo el apuntador de acceso al archivo a uno u otro registro. 
   Esta forma de acceso se basa en un modelo de archivo almacenado en disco, ya que se asume que el dispositivo se 
   puede mover de forma aleatoria entre los distintos bloques que componen el archivo.

   Organiza registros en cualquier secuencia que indique su programa, y recupera registros por dirección relativa. 
   Si no conoce la ubicación exacta de un registro, puede especificar un punto en el conjunto de datos donde comenzará 
   la búsqueda del registro. Los conjuntos de datos organizados de esta manera se llaman conjuntos de datos directos.

   </br>

   **Método de Acceso Indexado**

   Es un modo de organización de archivos en el cual al archivo le acompaña un índice que tiene la función de permitir 
   el acceso directo a los registros del disco. El índice se puede organizar de diversas formas, las más típicas son: 
   secuencial, multinivel y árbol. A través del índice podremos procesar un archivo de forma secuencial o de forma directa 
   según la clave de indización, y esto independientemente de cómo esté organizado el archivo por sí mismo.

   Los registros se organizan en una secuencia basada en un campo clave presentando dos características, un índice del 
   archivo para soportar los accesos aleatorios y un archivo de desbordamiento. El índice proporciona una capacidad de 
   búsqueda para llegar rápidamente al registro deseado y el archivo de desbordamiento es similar al archivo de registros 
   usado en un archivo acceso secuencial, pero está integrado de forma que los archivos de desbordamiento se ubiquen 
   siguiendo un puntero desde su registro predecesor.

   </br>

* Escribe un pseudocódigo que muestre cómo acceder a:

   * Un archivo secuencialmente.
 
   \<Archivo 1\> --> Archivo 2 --> Archivo 3 --> Archivo 4

   Se quiere acceder al archivo 3, por lo tanto debemos recorrer el archivo 1 y 2 para llegar a el. Si ahora quiciéramos
   acceder al archivo 4 nos veriamos obligados a recorrer todos los archivos anteriores nuevamente. En el caso de agregar 
   un nuevo archivo este será asignado a la ultima posición.

   \<Archivo 1\> --> Archivo 2 --> Archivo 3 --> Archivo 4 --> Archivo 5

   </br>

   * Un archivo directamente mediante su posición.
  
    Archivo 1  --> A1.r1 A1.r2 \<A1.r3\> A1.r4

    Archivo 2  --> A2.r1 A2.r2 A2.r3 A2.r4
    
    Archivo 3  --> A3.r1 A3.r2 A3.r3 A3.r4
    
    Archivo 4  --> A4.r1 A4.r2 A4.r3 A4.r4
                    
   Cada archivo esta conformado por varios registros, se puede acceder a cualquier archivo y a cualquiera de sus registros
   a travez de un apuntador de acceso y direcciones relativas.

   </br>

   * Un archivo utilizando un índice.

    (\<IA1\>) Archivo 1  --> A1.r1 A1.r2 A1.r3 A1.r4
    
    (IA1) Archivo 2  --> A1.r1 A1.r2 A1.r3 A1.r4
    
    (IA3) Archivo 3  --> A1.r1 A1.r2 A1.r3 A1.r4
    
    (IA4) Archivo 4  --> A1.r1 A1.r2 A1.r3 A1.r4
    
    A cada archivo le acompaña un indice que permite acceder a los archivos ya sea de forma secuencial, recorriendo los indices,
    o de forma directa usando el indice como direccion. 

   </br>
  
* Compara las ventajas de cada mecanismo dependiendo del caso de uso.
   
   **Acceso Secuencial:**

       * Menos propenso a errores
       * Ligero
       * Mejor utilización del espacio
       * Sencillo

   </br>

   **Acceso Directo:**

      * Mas rapido 
      * Mas eficiente
      * Menos propenso a fallos del sistema

   </br>

   **Acceso Indexado:**

      * Versatilidad
      * Menos propenso a errores
      * Mas rapido
      * Mas eficiente
      * Menos propenso a fallos del sistema

   </br>

#### **Ejercicio 5: Modelo jerárquico y mecanismos de recuperación en caso de falla**

**Descripción:**

Diseña una estructura jerárquica para un sistema de archivos y simula un escenario de falla en el sistema. 
Describe cómo recuperar los datos utilizando mecanismos de recuperación.

**Tareas:**

* Diseña un modelo jerárquico para un sistema de archivos con al menos tres niveles de directorios.


   </br>

*  Simula una falla en un directorio específico y describe los pasos necesarios para recuperarlo.


   </br>

* Explica qué herramientas o técnicas de respaldo (backup) utilizarías para evitar pérdida de datos.


   </br>