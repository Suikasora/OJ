#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ


int main(void) {
  FILE *fp;
  FILE *r;
  char string[81];
  if( (fp = fopen("out.txt", "r")) == NULL ) {
    printf("cannot open file");
    exit(0);
    }
  if( fgets(string, 81, fp) != NULL )
    fputs(string, stdout);
  else
    cout << "rrat" << endl;
  fclose(fp);

  int a = 2;
  int b = 10;
  if(a == 2)
    cout << "YE";
  return 0;
  if(a + b == 10)
    cout << a;
  }
