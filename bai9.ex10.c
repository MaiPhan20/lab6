#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num;
	label1:
		printf("\nThe enter a number (1)");
		scanf("%d",&num);
		if(num==1)
		goto Test;
		else
		goto label1;
		Test:
			printf("All done....");
}
