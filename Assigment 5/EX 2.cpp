#include <stdio.h>
#include <math.h>

int main(){
	int n,x;
	printf("Nhap n =");
	scanf("%d",&n);
	int f, f1, f2;
	f = f2 = 1;
	f1 = 0;
	for(int i=3; i<=n; i++){
		f1 = f2;
		f2 = f;
		f = f1 + f2;
		}
		printf("So %d trong fiboracci thu tu la %d",n,f);
		return 0;
	}
		
