#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include "imprimir.h"

int main(int argc, char** argv) {
  pthread_t thread_1, thread_2;
  
  pthread_create(&thread_1, NULL, (void*) imprimir, "hola");
  pthread_join(thread_1, NULL);
  
  pthread_create(&thread_2, NULL, (void*) imprimir, "chau");
  pthread_join(thread_2, NULL);

  return 0;
}