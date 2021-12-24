#include <stdio.h>
#include "service9.h"
int main(){
	int a,b,c;
	printf("Nhap do dai a: ");
	scanf("%d",&a);
	printf("Nhap do dai b: ");
	scanf("%d",&b);
	printf("Nhap do dai c: ");
	scanf("%d",&c);
	if( a<b+c && b<a+c && c<a+b ){
		printf("Dien tich tam giac la: %d",Perimeter(a,b,c));
	} else{
		printf("Day khong phai 3 canh cua tam giac");
	}
}
