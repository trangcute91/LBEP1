#include <stdio.h>

bool ktrsonguyento(int n){
	
	if(n<2) return false;
	for(int i=2; i<n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int songuyentoketiep(int n){
	for(int i=n+1; true; i++){
		if(ktrsonguyento(i)){
			return i;
		}
	}
}

int timsodaonguoc(int n){
	int m=0;
	for( ; n!=0; n/=10){
		m=m*10 + n%10;
	}
	return m;
}

int timsofibonaci(int n){
	if(n<1) return 0;
	if(n<3) return 1;
	if(n<4) return 2;
	int x1 = 1; int x2 = 2; int x3 = 3;
	for (int i=4; i<=n; i++){
		x1 = x2;
		x2 = x3;
		x3 = x1 + x2;
	}
	return x3;
}
