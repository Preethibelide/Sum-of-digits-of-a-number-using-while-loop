#include<stdio.h>
#include<stdlib.h>
int fact(int n){
    if(n==0 || n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int f,n;
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
}
