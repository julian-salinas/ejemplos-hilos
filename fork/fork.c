#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char* argv[]) {
	int resultado_fork = fork();

	if (resultado_fork < 0) {
		fprintf(stderr, "Hubo un error al realizar el fork");
		exit(-1);
	}
	else if (resultado_fork == 0) {
		/* Inicio del código del proceso hijo */
    printf("Hago cosas\n");
    sleep(3);

		/* Finaliza proceso hijo */
		exit(0);
	}
	else {
		/* Inicio del código del proceso padre */
		printf("Tambien hago cosas\n");
		
		/* Esperar a que finalice proceso hijo */
		wait(NULL); 
		
		/* Finaliza proceso padre */
		exit(0);
	}
}