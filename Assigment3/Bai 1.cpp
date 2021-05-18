#include <stdio.h>
#include <math.h>

int main(){
	
	int a, a1, a2, a3, a4, n1, n2, n3, n4;
	printf("Nhap so can nghich dao =");
	scanf("%d",&a);
	
	if( a>0 && a<1000){
		a1 = a/10;
		n1 = a%10;
		a2 = a1/10;
		n2 = a1%10;
		a3 = a2/10;
		n3 = a2%10;
		a4 = (n1*100) + (n2*10) + (n3*1) + a3;
		printf("So nghich dao = %d",a4);
		}else{
		if (a<999 && a>0){
		a1 = a/10;
		n1 = a%10;
		a2 = a1/10;
		n2 = a1%10;
		a4 = (n1*10) + (n2*1) + a2;
		printf("So nghich dao = %d",a4);
		}else{
			if(a<99 && a>0 ){
				a1 = a/10;
				n1 = a%10;
				a4 = (n1*10)+a1;
				printf("So nghich dao = %d",a4);
			}else{
				if(a<10){
					printf("Vui long nhap lai so");
				}else{
					printf("Vui long nhap lai so");
				}
			}
		}
		
	}

}
