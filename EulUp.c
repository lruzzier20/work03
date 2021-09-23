#include <stdio.h>
void main(){
  int one(int below);
  int six(int upTo);
  int arg1=10;
  int arg2=10;
  int ans1=one(arg1);
  int ans2=six(arg2);
  printf("one(%d)=%d, six(%d)=%d",arg1,ans1,arg2,ans2);
  printf("\n");
}
int one(int below){
  int sum=0;
  int a=0;
  for(a=0;a<below;a++){
    if(a%3==0||a%5==0){sum+=a;}
  }
  return sum;
}
int six(int upTo){
  int sum_of_squares=0;
  int square_of_sum=0;
  int a=0;
  for(a=0;a<upTo+1;a++){
    sum_of_squares+=(a*a);
    square_of_sum+=a;
  }
  square_of_sum*=square_of_sum;
  return square_of_sum-sum_of_squares;
}
