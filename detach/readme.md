# Ejemplo: detach de un hilo
Al realizar un `detach` de un hilo, el hilo padre no espera a que el mismo finalice para continuar con la ejecución

## ¿Cual es la diferencia entre hacer un `detach` y no hacer nada?
En ambos casos, el hilo se ejecuta (ya que empieza a ejecutarse al momento de hacer `pthread_create`), la diferencia es que si no hacemos `pthread_detach`, no se liberarán los recursos asignados al hilo una vez finalizada su ejecución

## ¿Por qué no se imprime nada cuando ejecuto el programa?
No se imprime nada ya que al no esperar a que finalicen los hilos, el hilo padre finaliza, finalizando a los hilos hijos, sin darle tiempo a los mismos a terminar su ejecución

## Compilar y ejecutar
_Compilar_
```bash
gcc detach.c ../shared/*.c -I ../shared
```

_Ejecutar_
```bash
./a.out
```

#

[Referencia](https://man7.org/linux/man-pages/man3/pthread_detach.3.html)