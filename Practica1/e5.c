#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>



int main() {
	int pid, x=1;
	int STATUS;
	
	pid = fork();
	
	if (pid==0 ) {
		printf("hijo  pid:%d\n",getpid());
		while(1){}
		
		
	} else {
	
	wait(&STATUS);
	printf("\npadre pid:%d\n", getppid());
	
	
	}
	if(WIFEXITED(STATUS)!=0){
		sleep(x);
		printf("El proceso hijo termino normalmente con el numero de senal %d ", WIFEXITED(STATUS));
	}
	else{
		sleep(x);
		printf("El proceso hijo fue muerto por el numero de senal:%d",WTERMSIG(STATUS));
	}
	return 0;
	}
