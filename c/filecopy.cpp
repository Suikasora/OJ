#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *srcFile,*destFile;
	int ch;

	if( argc != 3 ){
		printf("input error.\n");
		exit(1)
	}

	if( (srcFile = fopen( , "rb" )) == NULL ){
		printf("open error\n");
		exit(2);
	}

	if( (destFile = fopen( , "wb" )) == NULL ){
		fclose(srcFile);
		printf("cannot open\n");
	}
	return 0;
}

