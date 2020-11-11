#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

int main(void)
{
	FILE *fp;
	char filename[] = "te.c";
	fp = fopen(filename,"r");
	if( fp == NULL ){
		puts("File open error!");
		return 0;
	}
	putchar(fgetc(fp));
	fclose(fp);
	return 0;
}
