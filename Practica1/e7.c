#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

pid_t pid;

void manejador(int signum){
	signal(signum, manejador);
	kill(pid,signum);
}

void manejador2(int signum){
signal(signum, manejador2);
if(signum == SIGTERM){
		printf("Proceso interrupido\n");
		fflush(stdout);
		
}
if (signum == SIGTSTP){
exit(0);
}
}


int main() {
  pid = fork();

  if (pid == 0) {
	  signal(SIGINT, manejador2);
	  signal(SIGTSTP, manejador2);
    while (1) {}
  } else {
	 printf("\npadre pid:%d\n", getppid());
	  signal(SIGINT, manejador);
	  signal(SIGTSTP, manejador);
	 
  }
  return 0;
}
