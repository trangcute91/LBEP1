//tim chuoi so duong lien tiep co tong lon nhat la bao nhieu
#include <stdio.h>
#include <math.h>

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
	int max=mang[0];
	int total = 0;
	for(i=1; i<9; i++){	
	if(mang[i]>max && mang[i]>0 && mang[i+1]>0){
		max=mang[i];
		total = mang[i]+mang[i+1];		
	}
}printf("Tong lon nhat chuoi so duong trong mang la %d", total);
}
