#include<stdio.h>

int main(void){

  double x=10,xx,r,k=100.0;
  int t;
  FILE *fp;

  r=5.0;

  fp=fopen("output.dat","w");
  for(t=0;t<50;t+=1){
    xx=x+r*(1.0-x/k)*x;
    fprintf(fp,"%.1f\n",xx);
    x=xx;
}

fclose(fp);

printf("COMPLETE\n");
return 0;
}
