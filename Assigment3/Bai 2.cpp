#include <stdio.h>
#include <math.h>

int main(){
	
	float y1, y2, y3, y4;
	
	y1 = 4000/100*8 + 4000;
	y2 = y1/100*8 + y1;
	y3 = y2/100*8 + y2;
	y4 = y3/100*8 + y3;
	
	
	printf("Tong so tien thu duoc ca goc lan lai sau khi gui = %.2f", y4);

}
