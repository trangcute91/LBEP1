#include <stdio.h>

int main (){
	
	printf("Welcome to my restaurent!!!");
	int n;
	int thanhtoan = 0;
	loop: ;
	printf("\nXin nhap lua chon cua ban \n1 Chon mon an \n2 Goi do uong \n3 Thanh Toan \n4 Moi thoat ra");
	printf("\nXin moi chon ");
	scanf("%d",&n);
	if(n==1){
		loop1: ;
		int a;
		printf("\nDanh sach mon an gom \n1 Com ga = 15k\n2 Pho = 10k\n3 Bun =10k\n4 Quay lai");
		printf("\nXin moi lua chon ");
		scanf("%d",&a);
		if(a==1){
			printf("Ban da chon mon Com ga = 15k. Moi tiep tuc chon hoac thanh toan\n");
			thanhtoan = thanhtoan + 15;
			goto loop;
		}else if(a==2){
				printf("Ban da chon mon Pho = 10k. Moi tiep tuc chon hoac thanh toan\n");
				thanhtoan = thanhtoan + 10;
				goto loop;
		}else if(a==3){
		printf("Ban da chon mon Bun =10k. Moi tiep tuc chon hoac thanh toan\n");
		thanhtoan = thanhtoan + 10;
		goto loop;
		}else if(a==4){
		goto loop;
		}
		else{
		printf("Vui long chon lai mon an");
		goto loop1;
		}
	}else if(n==2){
		loop2: ;
		int b;
		printf("\nMenu do uong: \n1Pepsi = 5k \n2Nuoc tao = 10k \n3Tra sua = 10k \n4Quay lai");
		printf("\nVui long lua chon do uong: ");
		scanf("%d",&b);
		if(b==1){
		printf("Ban da chon Pepsi = 5k. Moi tiep tuc chon hoac thanh toan\n");
		thanhtoan = thanhtoan + 5;
		goto loop;
		}else if(b=2){
		printf("Ban da chon Nuoc Tao = 10k. Moi tiep tuc chon hoac thanh toan\n");
		thanhtoan = thanhtoan + 10;
		goto loop;
		}else if(b=3){
		printf("Ban da chon Tra sua = 10k. Moi tiep tuc chon hoac thanh toan\n");
		thanhtoan = thanhtoan + 10;
		goto loop;
		}else if(b=4){
		goto loop;
		}else{
		printf("Vui long nhap lai do uong");
		goto loop2;
						}
					}
    else if(n==3){
    	while(thanhtoan!=0){
    	printf("\nHOA DON CUA QUY KHACH GOM \n");
		printf("\nCam on quy khach da dat hang\nTong hoa don cua quy khach la: %d",thanhtoan);
		thanhtoan -= thanhtoan;
		goto loop;
		}
			printf("Ban chua chon mon");
			goto loop;

	}else if(n==4){
			printf("\nTam biet quy khach...");
			return 0;
	}
	else{
		goto loop;
	}
}
