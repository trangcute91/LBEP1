//viet ham tim so tiep theo cua nguyen to >n va gan n nhat
// tim dao nguoc cua 1 so n.
// tim so thu n cua day fibonaci.
#include <stdio.h>
#include "thuvien.h"
#include <math.h>



int main(){
	
	int a = 15;
	bool kk = ktrsonguyento(a);
	if(kk){
		printf("%d la so nguyen to",a);
	}else{
		printf("%d khong phai la so nguyen to", a);
	}
	int snt = songuyentoketiep(a);
	printf("snt tiep thep: %d\n", snt);
	printf("So dao nguoc: %d\n", timsodaonguoc(snt));
	printf("FIBONACI thu 12: %d\n", timsofibonaci(12));
}
