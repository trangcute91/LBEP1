#include <stdio.h>
#include <math.h>

int main(){
	int n;
	long s = 0;
	do{
	printf("\nNhap so nguyen n =");
	scanf("%d",&n);
	if(n<=0){
		printf("Vui long nhap so n > 0");
		}
	}
	while(n <= 0);
	printf("Cac uoc so cua %d la: ",n);
	
	for(int i = 1; i<=n; i++){
		if (n%i == 0){
			printf("%4d",i);
			s = s+i;
			}
		}
		
		printf("\nTong uoc cua %d la: %ld",n,s);
		
	}
