//tính tbc các so le trong mang
#include <stdio.h>
#include <math.h>

int main(){
	int mang[5];
	int i; 
	int tbc, tbc2, d;
	for(i=1; i<5; i++){
	printf("Nhap gia tri %d = ",i);
	scanf("%d",&mang[i]);
	if(mang[i]%2!= 0){
		tbc=tbc+mang[i];
		d++;
		}
	}
	tbc2=tbc/d++;
	printf("Trung binh cong cua cac so le la: %d", tbc2);
}
