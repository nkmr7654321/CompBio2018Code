#include <stdio.h>
#include<math.h>
int main(void){
  int t;
  double r,x,xx,k;
  FILE *fp;
  x=1;
  k=100.0;

  fp=fopen("outputt.dat","a");

for(r=1.0;r<3.0;r+=0.1){
 for(t=250;t<300;t++){
  xx=x+r*(1-x/k)*x;
  fprintf(fp, "%d,%f\n",t,xx );
  x=xx;
}
}

fclose(fp);
return 0;
}
