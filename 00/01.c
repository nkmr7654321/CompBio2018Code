#include<stdio.h>
#include<math.h>
#include<stdlib,h>
int main(void){
  int i,r,s,t,N,M,O,P;
  double x0,xa,x,xx,a;
  double dt;
  x0=10.0;
  x=x0;
  xa=x0;
  a=1.2;
  dt=0.01;
  srand(time(NULL));
  N=1;
  M=9;
  O=1;
  P=9;

  FILE *fp;
  fp=fopen("output0_0.dat","w");
  fprintf(fp,"%f,%f,%f\n",0.0,xa,x);

  for(i=1;i<1000;i++){
    r=rand()%(N-M);
    s=rand()%(O-P);
    xa=x0*exp(a*dt*1);

    xx=x+dt*a*x;
    x=xx;
    fprintf(fp,"%f,%f,%f\n",dt*i,xa,x,r,s);
  }
  fclose(fp);
  return 0;
}
