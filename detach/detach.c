#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include "imprimir.h"

int main(int argc, char** argv) {
  pthread_t thread_1, thread_2;
  
  pthread_create(&thread_1, NULL, (void*) imprimir, "hola");
  pthread_detach(thread_1);

  pthread_create(&thread_2, NULL, (void*) imprimir, "chau");
  pthread_detach(thread_2);

  return 0;
}