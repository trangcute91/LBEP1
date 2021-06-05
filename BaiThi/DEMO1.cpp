#include <stdio.h>
#include <math.h>

int main(){
// nhap 3 canh cua 1 tam giac
	int a, b, c;
	printf("Nhap canh a =");
	scanf("%d",&a);
	printf("Nhap canh b = ");
	scanf("%d",&b);
	printf("Nhap canh c = ");
	scanf("%d",&c);
// kiem tra xem 3 so moi nhap co phai la canh cua 1 tam giac khong. Neu dung thi tinh dien tich va chu vi	
	if(a>0 && b>0 && c>0){
		if(a+b>c && a+c>b && b+c>a){
			// cong thuc tinh dien tich cua tam giac
			float p = (a+b+c)/2;
			float s = sqrt(p*(p-a)*(p-b)*(p-c));
			printf("Day la 3 canh cua 1 tam giac, \nDien tich tam giac = %.2f",s);
		}else{
			printf("3 canh nay khong phai la 3 canh cua 1 tam giac");
		}
	}
}
