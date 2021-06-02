// nhap 1 chuoi, dem xem trong chuoi co bao nhieu nguyen am (a,e,u,o,i..) co so luong = ?, va ky tu khac so luong ?
#include <stdio.h>
#include <string.h>

int main(){
	char str1[20];// mang 1 chieu 3 string, moi string 50 ki tu
	scanf("%s",str1);
	int p = 0; 
	int t = 0;
	int len = strlen(str1);
	for(int i=0; i<len; i++){
		if(str1[i]=='a'|| str1[i]=='e' || str1[i]=='u'|| str1[i]=='o' || str1[i]=='i'){
			p++;
		}else{
			t++;
		}
	}
	printf("\nChuoi co %d ky tu la nguyen am",p);
	printf("\nChuoi co %d ky tu khong phai la nguyen am",t);
}
