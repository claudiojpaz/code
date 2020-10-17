# Ejercicio Leer curso

dado el archivo `curso.txt` y el siguiente fragmento de programa

```
#include <stdio.h>

#define N 100

struct estudiante {
  int legajo;
  char nombre[40];
  char apellido[40];
  int nota;
};

void cargar (struct estudiante [], int, FILE *);
float promedio (struct estudiante *p, int);
void mostrar (struct estudiante [], int);
void mostrar_con_nota (struct estudiante [], int, int nota);

int main (void)
{
  struct estudiante estudiantes[N] = {0};
  FILE *fp;

  fp = fopen("curso.txt", "r");

  cargar(estudiantes, N, fp);
  // mostrar(estudiantes, N);
  // mostrar_con_nota(estudiantes, N, 1);
  printf("El promedio es %.2f\n", promedio(estudiantes, N));

  fclose(fp);
  return 0;
}
```

Implementar las funciones declaradas en el fragmento

## Requisito 1
Para cargar el contenido del archivo, tener en cuenta que los datos almacenados en el archivo son  
```
legajo nombre apellido nota
```

Implementar la función con el siguiente prototipo
```
void cargar (struct estudiante [], int, FILE *);
```

## Requisito 2
Para calcular el promedio entre todas las notas del curso usar el siguiente prototipo
```
float promedio (struct estudiante *p, int);
```
debe usarse notación de puntero para resolver este ejercicio

## Requisito 3
Para mostrar todos los registros leidos:
```
void mostrar (struct estudiante [], int);
```

## Requisito 4
Para mostrar todos los estudiantes con una nota en particular
```
void mostrar_con_nota (struct estudiante [], int, int nota);
```
