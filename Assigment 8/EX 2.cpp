#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int a[n];
	
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&a[i]);
	}
	
	int d=0, x;
	int k;
	printf("\nNhap so can tim x =",x);
	scanf("%d",&x);
	int low = 0, high =n-1;
	int mid = (low+high)/2;
	while(low <= high){
		if(a[mid]==x){
			d = 1;
			printf("Da tim thay thay vi tri %d", mid);
			}else if(x < a[mid]){
				high = mid-1;
			}else{
				low = mid+1;
			}
			break;
		}
		if(a[mid]!=x){
	printf("\nVui long nhap phan tu % d vao mang thuoc vi tri = ", x, k);
	scanf("%d",&k);
	if(k<0){
		k=0;
	}else if(k>n){
		k = n;
	}
	for(int i=n; i > k; i--){
		a[i]=a[i-1];
		}
	a[k]=x;
	++n;
	}
	printf("\nDay so sau khi chen la:");
		for(int i=0; i<n; i++){
		printf("%5d",a[i]);
		}
}
