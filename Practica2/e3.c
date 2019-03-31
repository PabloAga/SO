
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define MAX 20

int main ( int argc, char *argv[] ){   //argc recibe la cantidad de palabras
					// *argv contiene los argumentos de entrada salida
	char infile[20], outfile[20];
	int f_in=0 , f_out=0, count=0;
	char buff[MAX];

	strcpy( infile, argv[1] );
	strcpy( outfile, argv[2] );

printf ("Copiando %s a %s/n" , infile, outfile );

f_in = open( infile, O_RDONLY );
f_out = open( outfile, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR );

while( ( count = read ( f_in, buff, MAX ) )> 0 ){
	while ( f_out, buff, count );
	}

	close(f_in);
	close(f_out);

	return 0;
	
}
