#include <stdio.h>
#include "service9.h"
int main(){
	int n;
	do{
		printf("Nhap so n = ");
		scanf("%d",&n);
	} while(n<=1);
	printf("So nguyen to tiep theo cua %d la: %d",n,Prime(n));
}

