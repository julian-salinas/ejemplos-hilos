# Ejemplo: fork - dividir la ejecución entre proceso padre e hijo
Al utilizar la función `fork()`, dividimos nuestra ejecución en **2 procesos**, proceso padre y proceso hijo.

## ¿Cómo funciona `fork`?
Al invocar a `fork` creamos un proceso hijo y recibimos su ID, que será un valor entero que puede ser -1 en caso de que haya explotado todo. 
Luego, la ejecución del programa se dividirá en el condicional que utiliza el resultado del fork, entre proceso padre (PID: 0) y proceso hijo (PID: N).

## Compilar y ejecutar
_Compilar_
```bash
gcc fork.c
``` 

_Ejecutar_
```bash
./a.out
```

# 

[Referencia](https://man7.org/linux/man-pages/man2/fork.2.html)