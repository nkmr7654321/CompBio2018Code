#include <stdio.h>
#include<math.h>

int main(void){
  int t=0;
  double r,x,xx,k=100.0;
  FILE *fp;

  fp=fopen("outputt.dat","a");

for(r=1.0;r<2.0;r+=0.001){
  x=10.0;
 for(t=0;t<300;t++){
  xx=x+r*(1.0-x/k)*x;
  if(t>=250){
   fprintf(fp,"%.3f,%1f\n",t,xx );
 }
  x=xx;
 }
}

fclose(fp);
return 0;
}
