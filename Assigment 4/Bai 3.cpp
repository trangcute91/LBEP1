#include <stdio.h>
#include <math.h>

int main(){
	printf("Tinh gia tri n! ");
	int n, i;
	printf("\nNhap gia tri n = ");
	scanf("%d",&n);
	int s;
	s=1;
	i=1;
	while(i<=n){
		s=s*i;
		i=i+1;
	}
	printf("\nGia tri la = %d",s);

}
