#include <stdio.h>
#include <math.h>

bool kiemtrasotrongmang(int a[], int n, int x){
	
	for(int i=0; i<n; i++){
		if(a[i]==x) return true;
	}
	return false;
}

void timsole(int a[], int n){
	int i, t;
	for(i=0; i<n; i++){
		if(a[i]%2 == 1){
		printf("\n%5d ,",a[i]);
		}
	}
}

int timuocchung(int a, int b){
	int x;
	if(a<=0 || b<=0){
		x = a;
		x = b;
	}
	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
		}
	}
	return a;
}

int timboichungnhonhat(int a, int b){
	int x, y, z;
	if(a<=0 || b<=0){
		x = a;
		y = b;
	}
	while(a!=b){
		if(a>b){
			a-=b;
		}else{
			b-=a;
			z = (x*y)/a;
		}
}
return a;
}

