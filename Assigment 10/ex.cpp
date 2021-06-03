// sd con tro: nhap 1 mang n so nguyen, tim so lon nhat và sap xep tang dan, Sau do nhap m so nguyen va tim so lon nhat 
#include <stdio.h>
#include <stdlib.h>

int timsolonnhat(int a[], int n){
	int max = *a;
	int i;
	for(int i=0; i<n; i++){
		if(max<*(a+i)) max=*(a+i);
		} 
		return max;
}

void sapxep(int *a, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(*(a+j)<*(a+i)){
				int tmp =*(a+j);
				*(a+j)=*(a+i);
				*(a+i)=tmp;;
			}
		}
	}
	printf("\nMang sau khi sap xep:\n");
	for(int i=0; i<n; i++){
		printf("%5d", *(a+i));
		}
}

int main(){
	int *a;
	int n;
	printf("Nhap kich thuoc mang n =");
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d = ",i);
		scanf("%d",a+i);
	}
	
	int p = timsolonnhat(a,n);
	printf("So lon nhat trong mang la: %d\n",p);
	sapxep(a,n);
	
	int m;
	do{
	printf("\nNhap so phan tu muon them m = ");
	scanf("%d",&m);
	}while(m<=n);
	
	a = (int *)realloc(a, m*sizeof(int));
	printf("\nSo phan tu can them la %d", m-n);
	for(int i=n; i<m; i++){
		printf("\nNhap phan tu thu %d = ",i);
		scanf("%d",a+i);
	}
	
	int p1 = timsolonnhat(a,m);
	printf("So lon nhat trong mang la: %d\n",p1);
	sapxep(a,m);
	
	free(a);
}


