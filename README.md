# Sistemas operativos
---

#### Alumno: Correa Cervantes Diego Ignacio, Grupo C
---

### Administración de Memoria
</br>

#### 3.1 Política y filosofía

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

---

#### 3.2 Memoria real

**1. Escribe un programa en C o Python que simule la administración de
 memoria mediante particiones fijas.**

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
![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/3.2_1.png)
</br>

![](https://github.com/DiegoIgnacioCorreaCervantes/RSistemas_operativos/blob/main/Imagenes_markdown/3.2_2.png)
</br>
