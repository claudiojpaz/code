# TP Estructuras

Completar el siguiente programa para que se almacenen estudiantes usando la siguiente estructura

```C
struct estudiante {
  unsigned int legajo;
  char nombre[80];
};
```

## Requisito 1
El programa debe preguntar al usuario cuantos estudiantes se cargarán.
Este valor se guardará en una variable `n` que deberá ser mayor que cero y menor o igual a N (definida con `#define`)

## Requisito 2
Luego el programa debe llamar a una función donde se cargarán todos los estudiantes.
El prototipo de la función debe ser el siguiente
```C
void cargar_estudiantes (struct estudiante [], int n);
```

## Requisito 3
Luego de ingresados los `n` estudiante, se deben ordenar todos los registros de menor a mayor respecto del legajo de cada alumno con una función de prototipo

```C
void ordenar (struct estudiante [], int n);
```

## Requisito 4
Para finalizar, se deben mostrar todos los estudiantes ordenados por número de legajo
con una función de prototipo

```C
void imprimir (struct estudiante *, int n);
```

