#include<stdio.h>
int main (){
int i,j,k;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++)
			printf("%d ",j);
			for(k=10;k>i;k=-2)
		printf("* ", k);	
		
		printf("\n");
	}	
}