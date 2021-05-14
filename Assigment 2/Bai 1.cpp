#include <stdio.h>
int main(){
	int a,b,c;
	printf("Nhap so a =");
	scanf("%d", &a);
	printf("Nhap so b =");
	scanf("%d",&b);
	printf("Nhap so c =");
	scanf("%d",&c);
	if(a < b){
		if(a < c){
		printf("So nho nhat la: %d", a);
		}else{
			printf("So nho nhat la: %d", c);}
	}else{
		if(b < c){
		printf("So nho nhat la: %d", b);
		}else{
			printf("So nho nhat la %d", c);
		}
		
	}
	
}
