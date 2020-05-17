#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, a, giaiThua;
	giaiThua=1;

 printf("nhap so = ");

 scanf("%d", &a);

 for (i = 1; i <= a; i++)

   giaiThua = giaiThua * i;

 printf("giai thua cua so ban vua nhap la %d\n", giaiThua);

 return 0;

}

