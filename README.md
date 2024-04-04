## .gitignore

### ¿Por qué es conveniente incluirlo?
- Ayuda a mantener tus repositorios de Git limpios y organizados.
- Evita que tengas que gestionar manualmente qué archivos incluir o excluir de tus commits.
- Ignora archivos que no deberían confirmarse por algún motivo, como artefactos de compilación, archivos generados en tiempo de ejecución, archivos ocultos del sistema, archivos personales de configuración de IDE, entre otros.

### ¿Cuándo se debe hacer?
- Agregar tu archivo .gitignore al inicio de tu proyecto.
- Cuando tengas nuevos archivos que quieras ignorar, deberás editar y confirmar manualmente el archivo .gitignore.

### ¿Cómo configuraría el archivo .gitignore?
Para configurar el archivo .gitignore, puedes seguir estos pasos:
1. Abre tu terminal o línea de comandos.
2. Navega hasta la raíz de tu repositorio de Git.
3. Escribe `touch .gitignore` y presiona Enter.
4. Abre el nuevo archivo .gitignore en tu editor de texto preferido.
5. Agrega las rutas de los archivos o directorios que quieres que Git ignore, cada una en una línea nueva.
6. Guarda y cierra el archivo.

¿Qué archivos vé?
.gitignore
primer commit

README.md
primer commit

tp1_1.c
segundo commit

tp1_1.exe
segundo commit

¿Cuál cree que no hace falta que esté?
Para mi el tp1_1.exe

¿A qué se debe que los resultados de los apartados 2 y 3 sean iguales?
Se debe a que en ambos casos estamos accediendo a la dirección de memoria de la variable x. Cuando utilizamos &x,
obtenemos la dirección de memoria de x, mientras que cuando usamos ptr, que apunta a x, también obtenemos la misma dirección de memoria.

¿Qué obtiene en el punto 4? ¿Es igual a los anteriores?
En el punto 4, estamos obteniendo la dirección de memoria del puntero ptr en sí mismo, no de la variable a la que apunta (x).
Por lo tanto, es la dirección de memoria donde está almacenado el puntero en el programa. Esta dirección de memoria puede ser
diferente de las direcciones de memoria de la variable x y del puntero ptr que obtuvimos en los puntos 2 y 3.
