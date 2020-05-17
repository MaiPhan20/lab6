#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int num1,num2,i,sum=0;
		printf("Nhap so nguyen num1 = ");
	scanf("%d",&num1);
		printf("Nhap so nguyen num2 = ");
	scanf("%d",&num2);
	for( i=num1;i<=num2;i++){
	if(i%2==1){
	sum+=i;}
		}
	printf("Tong cac so le trong doan tu num1 den num2 la: %d", sum);
	return 0;
}
