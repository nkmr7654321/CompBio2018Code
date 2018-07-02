#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N 100

int main(void){
  int i,j,t,r1,r2,r,x;
  double p,p1,k,c,b,a[N],aa[N],d;
  srand(time(NULL));

  k=rand()%N;
  p=k/N;
  p1=0.0;
  x=(int)N*(1-p);
  d=0.0;
  c=0.0;
  b=0.0;

  for(j=0;j<100;j++){
    k=rand()%N;
    p=k/N;
    p1=0.0;
    x=(int)N*(1-p);
    d=0.0;
    for(i=0;i<N;i++){
      if(i<(p*N)){
        a[i]=1.0;
      }
      else{
        a[i]=0.0;
      }
    }
    for(t=0;t<100;t++){
      d=0;
      for(i=0;i<N;i++){
        r1=rand()%N;
        r2=rand()%N;
        r=rand()%2;
        if(r==1){
          aa[i]=a[r1];
        }
        else{
          aa[i]=a[r2];
        }
        d=d+aa[i];
      }
      p1=d/(double)N;
      if(p==p1){
        printf("%d,%f\n",t,p1);
        c=(double)t;
        b=c+d;
        break;
      }
      else{
        p=p1;
      }
    }
  }
  printf("average\n");
  printf("%f",b/j);
  return 0;
}
