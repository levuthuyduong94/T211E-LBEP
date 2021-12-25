#include <stdio.h>
void nhapmang(int arr[], int &x)
{ printf("nhap kich thuong mang :" );
  scanf("%d",&x);
  for(int i=0;i<x;i++)
  { printf("arr[%d] =",i);
    scanf("%d",&arr[i]);
  }
}
int xuatmang(int arr[],int x)
 {
  for(int i=0;i<x;i++)
     {
        printf("%d \t",arr[i]);
     }
 }
void reverseArray(int arr[],int &x){
	 for(int i=x;i>=0;i--){
		printf("%d \t",arr[i]);
		}
	printf("Mang dao nguoc la: ");
	for(int i=0;i<x;i++)
     {
        printf("%d  ",arr[i]);
     } 
}
int main(){
	int n;
	int arr[n];
	nhapmang(arr,n);
 	xuatmang(arr,n);
    reverseArray(arr,n);
}
