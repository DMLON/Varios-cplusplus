# Lista Global

En este ejemplo se puede observar como utilizar una lista global al estilo C. Es necesario agregarle el extern al [Globals.h](Globals.h) Debido a que sino va a arrojar errores de que ya existe ese objeto instanciado, el extern define que ese objeto está definido en algún otro lado ([Globals.cpp](Globals.cpp))

En este caso es obligatorio llamar la funcion Poblacionar_Ciudades debido a que sino la lista global no contiene elementos

Tener ciudado que es necesario eliminar el contenido de Ciudades_global una vez finalizado el programa, ya que está instanciando memoria dinamica!
