#include <stdio.h>
void reverseArray(int arr[],int x){
	printf("Mang dao nguoc la: ");
	for(int i=0;i<x;i++){
		int t=arr[i];
		arr[i]=arr[x-1-i];
		arr[x-1-i]=t;
	}
	for(int i=0;i<x;i++)
     {
        printf("%d  ",arr[i]);
     } 
}
int main(){
	int n;
	printf("Nhap kich thuoc cua mang = ");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap gia tri cua mang:\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    reverseArray(arr,n);
}
