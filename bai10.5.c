#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	void main() {
	int i, tuoi;
	char name[50];
	printf("Ho va Ten");
	fgets(name,sizeof(name),stdin);
	printf("Tuoi");
	scanf("%d",&tuoi);
	print("\n\n");
	for(i=0;i<=tuoi;i++)
	puts(name);
	return 0 ;

	
}

