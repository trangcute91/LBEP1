#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	printf("Nhap canh a =");
	scanf("%f",&a);
	printf("Nhap canh b =");
	scanf("%f",&b);
	printf("Nhap canh c =");
	scanf("%f",&c); 
	while(a+b>c && a+c>b && b+c>a){
	float d,p,s;
	d = a+b+c;
	p = d/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi cua tam giac = %f, Dien tich cua tam giac =%f",d,s );break;
	}
	}
