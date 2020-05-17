#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	int n;
	n=7;	
	int i,j;
	for(i=n;i>=1;i--){
		for (j=1;j<=i;j++){
			printf("*");
	}
	printf("\n");
}
	return 0;
}
