# Ejemplo: join de un hilo
Al realizar un `join` de un hilo, el hilo padre crea un hilo hijo y espera a que el mismo finalice para continuar con la ejecución

## ¿Cómo funciona `pthread_join`?
El hilo hijo comenzará a ejecutarse en el momento que el hilo padre lo cree, usando `pthread_create`, y justo en la línea `pthread_join(thread, **retval)` se detendrá hasta que dicho hilo finalice, y almacenará el resultado del mismo en el puntero enviado por parámetro a `pthread_join` (`retval`)

## Compilar y ejecutar
_Compilar_
```bash
gcc join.c ../shared/*.c -I ../shared
```

_Ejecutar_
```bash
./a.out
```

# 

[Referencia](https://man7.org/linux/man-pages/man3/pthread_join.3.html)