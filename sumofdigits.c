#include<stdio.h>//sumofdigits of a number
int main(){
  int i,n,sod,rem;
  printf("Enter the number:");
  scanf("%d",&n);
  while(n!=0){
      rem=n%10;
      sod=sod+rem;
      n=n/10;
  }
  printf("%d",sod);
  return(0);
}

