
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
//#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){

FILE *pipe;
char bufer[2];

int i=0;
int result=0;
result= mkfifo("tubo" , S_IWUSR);

if (result==0){ //el usuario tiene permiso para escribir
printf("se creo una tuberia con el nobre prueba");
}

return 0;
}
