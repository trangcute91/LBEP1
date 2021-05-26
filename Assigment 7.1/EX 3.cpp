//tim so luong cac so duong lien tiep nhieu nhat
#include <stdio.h>
#include <math.h>

int main(){
	int mang[9];
	int i; 

	for(i=0; i<9; i++){
	printf("Nhap gia tri %d = ",i);
	scanf("%d",&mang[i]);
	}
	 
	int d = 1;
	int max = 0;
	for(i=0; i<9; i++){
	if(mang[i] > 0){
		if(mang[i] == mang[i+1]){
			d++;
			if(d>max){
				max=d;
				}
			}else{
				d=1;
			}
		}
		}
		printf("So luong so duong lien tiep nhieu nhat la %d",max);
		return 0;
	}
