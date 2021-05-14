#include <stdio.h>
#include <math.h>
float chuvi(int a, int b, int c){
	return a+b+c;
	}
float dientich(int a, int b, int c){
	float p = chuvi(a,b,c) /2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
	}

int main(){
	float a, b, c;
	printf("Nhap canh a =");
	scanf("%f",&a);
	printf("Nhap canh b = ");
	scanf("%f",&b);
	printf("Nhap canh c = ");
	scanf("%f",&c);
	
	if(a>0 && b>0 && c>0){
		if(a+b>c && a+c>b && b+c>a){
			printf("Day la 3 canh cua 1 tam giac, chu vi c?a tam giac = %.2f, dien tich tam giac = %.2f", chuvi(a,b,c), dientich(a,b,c));
		}else{
			printf("3 canh nay khong phai la 3 canh cua 1 tam giac");
			}
		}
		}
	
