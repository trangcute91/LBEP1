#include <stdio.h>

int main(){
	printf("Tinh s = 1+2+3+...+100000 =");
	
	int s = 0;
	int i = 0;
	while(i < 100000){
		i = i + 1;
		s = s + i;
	}
	printf("\nGia tri = %d",s);

}
