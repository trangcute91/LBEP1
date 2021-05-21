#include <stdio.h>
#include <math.h>

int main(){
	int n,x;
	printf("Nhap n =");
	scanf("%d",&n);
	int s1 = 1;
	int s2 = 1;
	if (n == 0){
		printf("So cua nhap khong co tiem can nao trong day fibonacci");
	}else{
		while (x<n){
			x = s1 + s2;
			s1 = s2;
			s2 = x;
			}
			printf("So tiem can duoi %d trong day fibonaci la: %d", n, s1);
}
}
	
