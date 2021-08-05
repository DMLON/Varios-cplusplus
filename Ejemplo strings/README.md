# Generador Random Ciudades

Este proyecto contiene un ejemplo de creación de lista string de nombres de ciudades para la generación automática de ciudades aleatorias como objetos a partir
de los nombres de forma aleatoria.

Consiste en la utilizacion de una lista de strings y quitar posiciones random limitados entre 0 y Cantidad Actual de la lista para poder insertarlo como nombre 
en el constructor de ciudad, así como random en latitud y longitud

### Obtención de datos

Los datos son obtenidos mediante la página de [Generate Data](https://www.generatedata.com/) en donde uno puede crear diferentes datos como columnas y exportarlo como diferentes tipos

Lo ideal es crear ejemplo nombre de ciudades y exportarlo como CSV, luego en un editor de texto avanzado como Notepad++ Remplazar en modo extendido (Para que considere
los \n y \r como caracteres) los caractéres de \r\n (En windows son los 2 conjuntos) por "," y agregar al inicio y al final los corchetes y comillas dobles.

Los pasos son así:

1. Ir a [Generate Data](https://www.generatedata.com/)
1. Poner nombre de columna cualquier cosa
1. Poner tipo de dato que se quiere
1. Ir al notepad ++
1. Apretar CTRL + H
1. Poner Extended
1. En Find what escribir \n\r
1. En Replace with escribir ","
1. Reemplazar todo
1. Ir al principio del archivo y agregar ["
1. Ir al final del archivo y agregar "]
1. Utilizar el array de objetos como un array normalen un defines.h


Ver ejemplo en [main.cpp](main.cpp)