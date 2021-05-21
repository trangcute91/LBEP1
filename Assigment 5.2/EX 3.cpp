#include <stdio.h>
#include <math.h>

int main(){
	int x,a,b;
	do{
	printf("\nNhap so nguyen a =");
	scanf("%d",&a);
	printf("\nNhap so nguyen b =");
	scanf("%d",&b);
	}
	while(a <= 0 || b<=0);
	x = a;
	x = b;
	while (a!=b){
		if(a>b)
		a -= b;
		else
		b -= a;
		}
	printf("Uoc chung lon nhat cua 2 so la: %d",a);
}
