# Custom Logger Protected

Este es un ejemplo de herencia protected de una lista template para crear un logger custom.

El logger custom permite utilizar los metodos de la lista pero con un wrapper que solamente deja expuesto al usuario (de forma public) lo unico que se quiere. Para una lista de logs no necesito buscar, quitar o eliminar, solamente agregar y listar.

En este caso los Logs contienen la fecha del día con el metodo to string y una descripcion