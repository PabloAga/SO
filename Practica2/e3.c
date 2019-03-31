
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAX 20

int main ( int argc , cha *argv[] ){ //argc recibe la cantidad de palabras
									// *argv contiene los argumentos de entrada salida
	char infile[20], outfile[20];
	int f_in=0 , f-out=0, count=0;
	char buff[MAX];

	strcpy( infile, argv[1] );
	strcpy( outfile, argv[2] );

printf ("Copiando %s a %s/n" , infile, outfile );

f_in = open( infile, O_RDONLY );
f_out = open( outfile, o_WRONLY | O_CREAT, S_IRUSR | S_IWUSR )

while( ( count = read ( f_in, buff, MAX ) )> 0 ){
	white ( f_out, buff, count );
	}

	close(f_in);
	close(f_out);

	return 0;
/*
									
   int fd;
    char * myfifo = "/tmp/myfifo";

    /* create the FIFO (named pipe) */
    mkfifo(myfifo, 0666);

    /* write "Hi" to the FIFO */
    fd = open(myfifo, O_WRONLY);
    write(fd, "Hi", sizeof("Hi"));
    close(fd);

    /* remove the FIFO */
    unlink(myfifo);

    return 0;



}*/

/*
 * #define MAX_BUF 1024

int main()
{
    int fd;
    char * myfifo = "/tmp/myfifo";
    char buf[MAX_BUF];

  //   open, read, and display the message from the FIFO 
    fd = open(myfifo, O_RDONLY);
    read(fd, buf, MAX_BUF);
    printf("Received: %s\n", buf);
    close(fd);

    return 0;*/
