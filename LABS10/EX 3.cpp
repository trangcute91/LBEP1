// sap xep mang theo thu tu alphabe
#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf("Moi nhap so luong n = ");
	scanf("%d",&n);
	char s[n][50];
	
	for(int i=0; i<n; i++){
		printf("\nMoi nhap chuoi thu %d: ",i);
		scanf("%s",s[i]);
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(strcmp(s[j],s[j+1])>0){
				char a[50];
				strcpy(a,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],a);
			}
		}
	}
	printf("Chuoi sau khi sap sep: \n");
	for(int i=0; i<n; i++){
		printf("%s\n",s[i]);
	}
}
