#include <stdio.h>
#include <math.h>
int giaiPT(float a, float b, float c, float &x1, float &x2){
	float delta = b*b - 4*a*c;
	if(delta<0){
		x1=x2=0.0;
		return 0;
	}
	else if(delta==0){
		x1 = x2 = -b/(2*a);
		return 1;
	}else{
		delta = sqrt(delta);
		x1 = (-b - delta)/(2*a);
		x2 = (-b + delta)/(2*a);
		return 2;
	}
	}

int main(){
	float a,b,c;
	float x1, x2;
	do{
		printf("Giai phuong trinh a*x^2+b*x+c=0");
		printf("Nhap so a =");
		scanf("%f",&a);
		printf("Nhap so b =");
		scanf("%f",&b);
		printf("Nhap so c =");
		scanf("%f",&c);}
	
	while(!a);
		int numNo = giaiPT(a,b,c,x1,x2);
		if (numNo == 0){
			printf("Phuong trinh vo nghiem");
			}else{
				if(numNo == 1){
					printf("Phuong trinh co nghiem kep x=%.4%f", x1);
			}else{
				printf("Phuong trinh co 2 nghiem phan biet \nx1=%.4f \nx2=%.4f", x1, x2);
				}
	}
}
