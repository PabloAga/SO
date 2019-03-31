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

//void sigmanager(int sig_num) {
  /* Reasignar la señal */
 /* signal(sig_num, sigmanager);
  if (pid == 0) {
    printf("Hijo recibio señal\n");
    printf("id hijo:%d\n", getpid());
    exit(sig_num);
    printf("asdasd\n");
  } else {
    if (sig_num == SIGTERM) {
      printf("Enviando señal al hijo\n");
      kill(pid, sig_num);
    }
  }
  fflush(stdout);
}*/

int main() {
  pid = fork();
  //signal(SIGTERM, sigmanager); // ctrl+z
  if (pid == 0) {
	  signal(SIGINT, manejador2);
	  signal(SIGTSTP, manejador2);
    while (1) {}
  } else {
	 printf("\npadre pid:%d\n", getppid());
	  signal(SIGINT, manejador);
	  signal(SIGTSTP, manejador);
	 
   // waitpid(-1);
  }
  return 0;
}
