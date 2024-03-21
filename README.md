# code
Códigos de prueba para los slides de las clases, para bajar, probar y romper. Todo en C.

## Para arrancar
Desde linux se puede clonar este repsitorio con `git`. En una terminal, en el directorio donde se quiere dejar el repositorio escribir (sin el $)
```
$ git clone https://github.com/claudiojpaz/code.git
$ cd code
```

En el directorio inicial están las cosas comunes a todos los años. Para pasarse al código de este año hay que hacer
```
$ git checkout <año actual>
```
donde `<año actual>` es precisamente el año en curso (o del curso) sin los `< >`. Ejemplo, para 2024:

```
$ git checkout 2024
```

A partir de ahí, cada vez que se modifique el repositorio en clase, en cada computadora hay que hacer 

```
$ git pull
```
