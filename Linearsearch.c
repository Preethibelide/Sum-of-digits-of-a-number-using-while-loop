#include<stdio.h>
#include<stdlib.h>
int LinearSearch(int a[],int n,int target){
	int i;
	for(i=0;i<n;i++){
		if(a[i]==target){
			return 1;
		}
	}
	return 0;
}
int main(){
	int a[20],n,i,ele,c;
	printf("\nEnter the array size:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the element to search:");
	scanf("%d",&ele);
	c=LinearSearch(a,n,ele);
	if(c==1)
	printf("Found");
	else
	printf("Not found");
	return(0);
}
