# Guía para lograr un PR

Se van a aceptar PR **solo** de ejercicios ya presentados en los slides del teórico de Info 1.

## Procedimiento

Primero, tenés que hacer el fork apretando el botón con ese nombre arriba a la derecha.

Luego, hay que clonar desde **tu propio** repositorio

```
git clone https://github.com/tu_nombre_de_usuario/code.git
```

Asegurate que estás en la rama 2020. Entrá al directorio `code` y hacé

```
git checkout 2020
```

Luego creá una rama con tu nombre de usuario anteponiendo la palabra `rama-` y un guión medio

```
git checkout -b rama-tu_nombre_de_usuario
```

Luego, elegí algún archivo que quieras completar (de los que no están) de alguna unidad entre la 3 y la 7

Si la carpeta de la unidad que elegiste no existe, creala (ejemplo u3) deben ser con la u minuscula y el número sin espacio

```
mkdir u3
```

Ingresar a la carpeta (seguimos el ejemplo de la u3)

```
cd u3
```

Abrí tu editor preferido y copiá en un archivo el programa que quieras (siempre que esté en los slides, en este caso de la u3)

Luego, agregalo al repo

```
git add archivo_agregado.c
```

Hacé el commit y push

```
git commit -m "Agrega el archivo archivo_agregado.c de la unidad 3"
git push -u origin rama-tu_nombre_de_usuario
```

En el entorno web, hacer el pull request y esperar

Suerte!!!!
