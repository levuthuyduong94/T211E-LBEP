#include <stdio.h>
int main(){
	int n;
	float Sum=0;
	printf("Nhap so nguyen n = ");
	scanf("%d",&n);
	if(n>0){
		for(int i=1;i<=n;i++){
			Sum+=1.0/i;
		}
		printf("Tong vua tinh duoc la: %f",Sum);
	} else {
		printf("Error");
	}
}
