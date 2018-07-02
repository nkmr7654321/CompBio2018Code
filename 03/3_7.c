#include<stdio.h>
#include<math.h>
int main(void){
  int i;
  double x0,xa,x,xx,a,k,r;
  double dt;
  r=0.5;
  x0=10.0;
  x=x0;
  xa=x0;
  a=1.2;
  k=100;
  dt=1;

  FILE *fp;
  fp=fopen("output3_7kadai.dat","w");
  fprintf(fp,"%f,%f,%f\n",0.0,xa,x);
  for(i=1;i<100;i++){
    xa=k/(1+(k/x0-1)*exp(-r*dt*i));

    xx=x+dt*r*(1-x/k)*x;
    x=xx;
    fprintf(fp,"%f,%f,%f\n",dt*i,xa,x);
  }
  fclose(fp);
  return 0;
}
