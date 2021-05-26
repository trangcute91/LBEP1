//tim so le cuoi cung cua mang
#include <stdio.h>
#include <math.h>

int main(){
	int mang[8];
	int i; 
	int cuoicung,d=0;
	for(i=1; i<8; i++){
	printf("Nhap gia tri %d = ",i);
	scanf("%d",&mang[i]);
	for(d=0; d<8; d++)
	if(mang[i]%2!=0){
		cuoicung=mang[i];
		}
	}printf("So le cuoi cung cua mang la %d", cuoicung);
}

