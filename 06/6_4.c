#include<stdio.h>
int main(void){
  double beta,gamma,S,SS,I,II,R,RR,t,dt;
  int i;
  FILE *fp;

  fp=fopen("6_4.dat","w");
  beta=1.0;
  gamma=0.3;
  S=0.99;
  I=0.01;
  R=0.0;
  t=0;
  dt=0.001;

  for(i=0;t<100;i++){
    SS=S+dt*(-beta*S*I);
    II=I+dt*(beta*S*I-gamma*I);
    RR=R+dt*gamma*I;
    S=SS;
    I=II;
    R=RR;
    if(i%1000==0){
      fprintf(fp,"%f,%f,%f,%f\n",t,S,I,R);
    }
    t+=dt;
  }
  fclose(fp);
  return 0;
}
