#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
	if(n <=0){
		printf("Vui long nhap n > 0");
		}else{
		for(int i =2; i < n; i+= 2){
		printf ("%d, ",i);
		}
	}
}
