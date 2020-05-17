#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int cnt =0,num;
	do
	{
		printf("\nEnter a number :");
		scanf("%d",&num);
		printf("no is %d",num);
		cnt++;
	}
	while (num!=0);
	printf("\nThe total numbers entered were %d",--cnt)
}
