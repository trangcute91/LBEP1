#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, c;
	printf("Nhap 3 canh de tao thanh 1 tam giac");
	while(a+b<=c || a+c<=b || b+c<=a){
	printf("\nNhap canh a =");
	scanf("%f",&a);
	
	printf("\nNhap canh b =");
	scanf("%f",&b);
	
	printf("\nNhap canh c =");
	scanf("%f",&c); 
	if(a+b<=c || a+c<=b || b+c<=a){
		printf("\n3 so vua nhap khong phai la 1 tam giac, xin nhap lai 3 so khac");
		}
		}
	float d,p,s;
	d = a+b+c;
	p = d/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\nChu vi cua tam giac = %f",d );
	printf("\nDien tich cua tam giac =%f",s );
	}
