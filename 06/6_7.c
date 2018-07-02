#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <math.h>
int main(void){
  int t;
  double dt,s,ss,i,ii,r,rr,b,c,x1,x2,y,sigma;
  srand(time(NULL));
  dt=0.005;
  s=950.0;
  i=50.0;
  r=0.0;
  b=0.005;
  c=0.3;
  sigma=5;

  FILE *fp;
  fp=fopen("kadai3_1.dat","w");
  fprintf(fp,"%d,%f,%f,%f\n",0,s,i,r);
  for(t=1;t<1000;t++){

    ss=s+dt*(-b)*s*i;
    ii=i+dt*(b*s*i-c*i);
    rr=r+dt*c*i;
    x1=(((double)rand()+1)/((double)RAND_MAX+1));
    x2=(((double)rand()+1)/((double)RAND_MAX+1));
    y=sqrt(-2*log(x1))*cos(2*M_PI*x2);
    s=ss;
    i=ii+(y*sigma);
    r=rr;
    fprintf(fp,"%d,%f,%f,%f\n",t,s,i,r);
    if(s<=0){
      break;
    }
}
fclose(fp);
return 0;
}
