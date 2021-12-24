#include <stdio.h>
#include "service9.h"
int main(){
	int a,b;
	printf("Nhap so a = ");
	scanf("%d",&a);
	printf("Nhap so b = ");
	scanf("%d",&b);
	printf("Uoc chung lon nhat cua %d va %d la: %d",a,b,BCNN(a,b));
}
