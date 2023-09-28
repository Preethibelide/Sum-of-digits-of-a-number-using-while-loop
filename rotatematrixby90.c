#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10][10],b[10][10],m,n,i,j,k,temp;
	printf("\nEnter the number of rows and columns:");
	scanf("%d%d",&m,&n);
	printf("\nEnter the elements row by row:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<m;i++){
	    for(j=0;j<n;j++){
			printf("Transpose:%d\n",b[i][j]);
		}
	}
	for(i=0;i<n;i++){
	    for(j=m-1;j>=0;j--){
	    	printf("%d\n",b[i][j]);
		}
	}
}
