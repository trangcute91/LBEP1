// nhap mang so nguyen va 1 so x. Tim so trong mang co gia tri nho hon va gan x nhat

#include <stdio.h>

int main(){
	int n, x2;
	printf("Nhap n= ");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&a[i]);
	}
	
	int x;
	printf("Nhap so x =");
	scanf("%d", &x);
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0; i<n; i++){
		if(a[i]==x && a[i-1]<x){
		x2 = a[i-1];
		}
	}
	printf("so tiem can duoi nho hon x la %d",x2);
	
}
