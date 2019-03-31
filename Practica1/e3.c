#include <stdio.h>
#include <unistd.h>



int main() {
	int pid,x=1;
	
	pid = fork();
	
	if (pid==0 ) {
		printf("hijo  %d\n",getpid());
	} else {
	printf("padre  %d\n", getppid());
	sleep(x);
	}

	return 0;
	}
