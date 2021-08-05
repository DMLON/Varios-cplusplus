# Claves de busqueda dinamicas template

Este proyecto contiene ejemplos de utilizaciones de claves de busqueda custom utilizando templates de clases pequeñas para poder filtrar una persona por ejemplo por si apellido o su DNI unicamente. Utilizando varios metodos es posible, pero pierde la gracia de utilizar listas Template, porque un electrodomestico no tiene DNI por ejemplo.

Para esto se generan las pequeñas clases de [cb_DNI y cb_Apellido](clavesBusqueda.h) (cb de Clave de Busqueda) que unicametne son friend con Persona y contienen la clave propiamente dicha. Esto requiere que la persona tenga sobrecargado el metodo de comparación "==" para poder saber que comparar

Ejemplo:

`bool operator==(cb_DNI& DNI) { return this->DNI == DNI.DNI; }`

De esta forma al comparar un objeto de tipo persona con un objeto de tipo cb_DNI sabe como hacerlo y permite asociar debilmente las clases

Para poder ver un funcionamiento, ver el [main.cpp](main.cpp)
