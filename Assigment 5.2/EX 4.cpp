#include <stdio.h>
#include <math.h>

int main(){
	int x,y,a,b,z;
	do{
	printf("\nNhap so nguyen a =");
	scanf("%d",&a);
	printf("\nNhap so nguyen b =");
	scanf("%d",&b);
	}
	while(a <= 0 || b<=0);
	x = a;
	y = b;
	while (a!=b){
		if(a>b)
		a -= b;
		else
		b -= a;
		z = (x*y)/a;
		}
	printf("Boi chung nho nhat cua 2 so la: %d",z);
}
