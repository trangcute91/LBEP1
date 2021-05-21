#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
	
	if(n<=2){
		printf("\n%d khong phai la so nguyen to",n);
		}
	int d=0;
	for (int i=2; i<sqrt(n); i++){
		if(n%i==0){
			d++;
			}
		}
	if (d == 0){
		printf("\n%d la so nguyen to", n);
	}else{
		printf("\n%d khong phai la so nguyen to",n);
	}
}
