#include<stdio.h>
int main (){
int i,j,k;
	for(i=1;i<=5;i++){
		for(j=i;j<=i;j++)
			{
				if(j==1 || j==3){
					printf("* * * * *");
				}
				else if(j==2){
					printf("*       *");
				}
				else {
					printf("*");
				}
			}
				
		
		printf("\n");
	}	
}
