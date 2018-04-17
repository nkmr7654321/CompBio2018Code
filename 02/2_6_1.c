#include <stdio.h>

int main(void){
  int i;
  FILE *fp;
  fp=fopen("hello.dat", "w");

  for(i=0; i<100; i++){
   fprintf(fp, "Hello,World!" );
 }

  fclose(fp);
  return 0;
}
