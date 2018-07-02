#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
  int r,M,N,x,i,j,t;
  int n=1000;
  double ave;
  srand(time(NULL));
  M=1;
  N=6;
  x=0;
  t=0;
  printf("n=5d\n",n);
  for(j=0;j<n;j++){
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
      printf("%d\n",i);
      t+=i;
      x=0;
      break;
    }
  }
}
printf("\n");
ave=(double)t/n;
printf("%f\n",ave);
  return 0;
}
