#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a[20],n,i,j;
	printf("\nEnter the number of elements of the array:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("even number:%d\n",a[i]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<a[i];j++){
			if(pow(2,j)==a[i])
			printf("Powers of 2:%d\n",a[i]);
		}
	}
}
