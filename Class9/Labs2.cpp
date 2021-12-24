#include <stdio.h>
#include "service9.h"
int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	printf("Tong cac chu so cua %d la: %d",n,SumOfNumber(n));
}
