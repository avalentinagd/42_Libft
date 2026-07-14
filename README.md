*Este proyecto ha sido creado como parte del currículo de 42 por angalleg.*

# Libft

# Descripción

Libft consiste en recrear una parte importante de la biblioteca estándar de C (`libc`) e implementar un conjunto de funciones adicionales que servirán como base para los siguientes proyectos del cursus de 42.

El objetivo principal del proyecto es comprender el funcionamiento interno de funciones ampliamente utilizadas, aprender a gestionar memoria de forma segura, trabajar con cadenas de caracteres, manipular bloques de memoria y construir una biblioteca reutilizable.

Al finalizar el proyecto se obtiene una biblioteca estática (`libft.a`) que puede enlazarse con cualquier otro programa escrito en C.

---

## Características

La librería está organizada en tres grandes grupos de funciones:

- Reimplementación de funciones de la biblioteca estándar (`libc`).
- Funciones adicionales para manipulación de cadenas y memoria.
- Funciones para trabajar con listas enlazadas.

Todas las funciones siguen la Norm de 42 y cumplen las restricciones del proyecto.

---

## Contenido de la librería

## Parte 1 - Funciones de libc

### Comprobación de caracteres

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint

### Conversión de caracteres

- ft_toupper
- ft_tolower

### Cadenas

- ft_strlen
- ft_strlcpy
- ft_strlcat
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_strdup

### Memoria

- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

### Conversión

- ft_atoi

---

## Parte 2 - Funciones adicionales

### Manipulación de cadenas

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi
- ft_striteri

### Conversión

- ft_itoa

### Escritura sobre descriptores de archivo

- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

---

## Parte 3 - Listas enlazadas

La estructura utilizada es:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Funciones implementadas:

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

---

# Instrucciones

## Compilar

```bash
make
```

Se generará la biblioteca:

```
libft.a
```

### Otras reglas disponibles

```bash
make clean
make fclean
make re
```

---

# Ejemplo de uso

```c
#include "libft.h"

int main(void)
{
    char *str;

    str = ft_strdup("Hola 42");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```

Compilar:

```bash
cc main.c libft.a
```

---

# Decisiones técnicas

- No se utilizan variables globales.
- Las funciones auxiliares se declaran como `static` cuando es necesario.
- La biblioteca se genera utilizando `ar`.
- Todos los archivos se compilan con:

```text
-Wall -Wextra -Werror
```

- Se ha prestado especial atención al manejo correcto de memoria para evitar fugas (`memory leaks`) y comportamientos indefinidos.

---

# Recursos

## Documentación

- Manuales POSIX (`man`)
- The Open Group Base Specifications
  https://pubs.opengroup.org/

- Linux man-pages
  https://man7.org/linux/man-pages/

- cppreference
  https://en.cppreference.com/

- Beej's Guide to C Programming
  https://beej.us/guide/

---

## Uso de IA

La IA se ha utilizado únicamente como herramienta de apoyo para:

- Resolver dudas conceptuales sobre el lenguaje C.
- Comprender el comportamiento de determinadas funciones de la libc.
- Obtener explicaciones sobre algoritmos y estructuras de datos.
- Revisar la documentación y mejorar la redacción de este README.

No se ha utilizado para generar directamente el código fuente entregado.

---

# Objetivos de aprendizaje

Durante este proyecto se practican conceptos fundamentales como:

- Gestión dinámica de memoria.
- Manipulación de cadenas.
- Manipulación de memoria.
- Punteros.
- Arrays.
- Listas enlazadas.
- Bibliotecas estáticas.
- Modularización del código.
- Buenas prácticas en programación en C.

---
