//Nhap vao 1 chuoi, chuyen cac ky tu thanh in hoa
#include <stdio.h>
#include <string.h>

void uperCase(char s[]){
	for(int i=0; i<strlen(s); i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
			i++;
		}
	}
	printf("Chuoi sau khi chuyen doi la: \n%s. ",s);
}
int main(){
	char s[50];
	printf("Moi nhap chuoi: ");
	gets(s);
	
	uperCase(s);
}
