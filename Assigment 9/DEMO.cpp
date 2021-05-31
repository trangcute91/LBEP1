#include <stdio.h>
#include "assigment9.h"

int main(){

// ex1: tìm 1 so trong mang	
	int n;
	printf("Nhap kich thuoc mang n = ");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0; i<n; i++){
		printf("\nNhap phan tu %d = ",i);
		scanf("%d",&a[i]);
		}
	int x;
	printf("Nhap so can tim x = ");
	scanf("%d",&x);
	bool kk = kiemtrasotrongmang(a,n,x);
	if(kk){
		printf("%d thuoc trong mang",x);
	}else{
		printf("%d khong thuoc trong mang", x);
	}
// EX 2:in ra cac so le trong mang
    timsole(a,n);
    
// EX 3 + 4:
	printf("\nUoc chung lon nhat cua 2 so la %d",timuocchung(15,20));
	printf("\nBoi chung nho nhat cua 2 so la %d",timboichungnhonhat(10,20));
}
