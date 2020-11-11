#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	char *filename = "out.txt";


	if ((fp = fopen(filename,"w"))==NULL) {
		printf("cannot open a file\n");
		exit(0);
	}
	printf("input string:");
	while ((ch = getchar())!= '#');
	{
		fputc(ch,fp);
	}
	fclose(fp);
	return 0;
}
