#include <stdio.h>
#include <sys/types.h>

int main() {
	int pid;
	
	pid = fork();
	if (pid==0 ) {
		printf("hijo\n");
	} else {
	printf("padre\n");
	
	}
	return 0;
	}
