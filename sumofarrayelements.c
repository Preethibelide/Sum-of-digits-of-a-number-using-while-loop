#include<stdio.h>
#include<stdlib.h>
int SumOfElements(int a[],int n){
	int sum=0,i;
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	return sum;
}
int main(){
	int a[10],n,i,fun;
	printf("\nEnter the array size:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	fun=SumOfElements(a,n);
	printf("%d",fun);
}
