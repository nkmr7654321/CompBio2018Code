#include<stdio.h>

int main(void){
  int i;
  for(i=0;i<10;i++){
    printf("%d:",i);
    if(i>5){
      printf("iがうんぬん5,");
    }
    if(i==3){
  printf("i=3,");
    }
     if((i>=3)&&(i<=6)){
       printf("3<3i<6,");
     }
     if(!(i==1||i==2)){
       printf("i=1or2");
     }
     printf("\n");
  }
  return 0;
}
