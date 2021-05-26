//Nhap 1 so x. TIm cem x co trong mang ko
#include <stdio.h>
#include <math.h>

int main(){
	int mang[6];
	int i; 
	int x, d;
	printf("Nhap so phan tu x can tim =");
	scanf("%d",&x);
	printf("\nNhap cac gia tri mang");
	for(i=1; i<6; i++){
	printf("Nhap gia tri %d = ",i);
	scanf("%d",&mang[i]);
	if(mang[i]==x){
		d++;
	}
	}
		if(d!=0){
		printf(" Phan tu %d co trong mang", x);
		}else{
			printf("Phan tu %d khong co trong mang", x);
	}
}
