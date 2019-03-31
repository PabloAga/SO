#include <stdio.h>


int main() {
	int pid;
	int STATUS;
	
	pid = fork();

	if (pid==0 ) {
		int i=0;
		printf("hijo  %d\n",getpid());
		for(i=0;i<5;i++){
			printf("%d\n",i);
		}
	} else {
		wait(&STATUS); //espera el proceso padre hasta que termine el hijo
		printf("\npadre  %d\n", getppid());
	}
return 0;
}
