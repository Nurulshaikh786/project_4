#include<stdio.h>
int main (){
int i,j,k,h;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++)
			printf("%d ",j);
			for(k=1;k<=2*(5-i) ;k++)
		printf("  ", k);	
		for(h=i;h>=1;h--)
			printf("%d ",h);
		printf("\n");
	}	
}
