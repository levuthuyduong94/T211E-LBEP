int Prime(int x){
	int i;
	for(i=x+1;true;i++){
		int count=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==1){
			return i;
		}
	}
}
int SumOfNumber(int x){
	int SD, sum=0;
	while(x>0){
		SD=x%10;
		sum+=SD;
		x=x/10;
	}
	return sum;
}
int Perimeter(int x, int y, int z){
	int P;
	P=x+y+z;
	return P;
}
#include<math.h>
int Area(int x, int y, int z){
	int P,S;
	P=(x+y+z)/2;
	S=sqrt(P*(P-x)*(P+y)*(P-z));
	return S;
}
int UCLN(int x, int y){
	if(x==0 && y==0){
		return NULL;
	}
	if(x<0) x=-x;
	if(y<0) y=-y;
	for(int i=x;i>0;i--){
		if(x%i==0 && y%i==0){
			return i;
		}
	}
}
int BCNN(int x, int y){
	if(x==0 && y==0 ){
		return NULL;
	}
	if(x<0) x=-x;
	if(y<0) y=-y;
	for(int i=x;true;i++){
		if(i%x==0 && i%y==0){
			return i;
		}
	}
}
