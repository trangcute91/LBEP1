#include <stdio.h>

int main(){
	
	printf("Gia Phuonf trinh 1+1/2+1/3+...+1/1000 ");

	float s,i;
	i=2;
	s=1;
	while(i<=1000){
		s=s+(1/i);
		i++;
	}
	printf("\nKet qua pt = %f",s);

}
