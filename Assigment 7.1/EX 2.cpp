//tim so duong nho nhat
#include <stdio.h>
#include <math.h>

int main(){
	int mang[9];
	int i; 
	int min, d=0;

	for(i=0; i<9; i++){
	printf("Nhap gia tri %d = ",i);
	scanf("%d",&mang[i]);
	}
	min=mang[0];
	for(i=1; i<9; i++){	
	if(mang[i]<min && mang[i]>0){
		min=mang[i];
	}
}printf("So duong nho nhat trong mang la %d", min);
}
