#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap mang n= ");
	scanf("%d",&n);
	int a[n];

	for(int i=0; i<n; i++){
		printf("\nNhap phan tu thu %d:",i);
		scanf("%d",&a[i]);
		for(int j=i; j>=1; j--){
			if(a[j]<a[j-1]){
				int temp = a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
				}
			}
			for(int k=0; k<=i; k++){
				printf("%5d\t",a[k]);
			}
	}
		printf("\nDay so sau khi chen va sap xep la:\n");
		for(int i=0; i<=n; i++){
		printf("%5d\t",a[i]);
		}
	}

