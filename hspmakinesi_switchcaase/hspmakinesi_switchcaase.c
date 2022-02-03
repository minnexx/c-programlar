#include<stdio.h>
int main ()
{
 int sayi1,sayi2,islem;
 float sonuc;    
    printf("TOPLAMA ICIN 1'E\n"); 
	printf("CIKARMA ICIN 2'YE\n");
	printf("CARPMA ICIN 3'E\n");
	printf("BOLME ICIN 4'E\n");
	
	printf("2 tane sayi giriniz =");
	scanf("%d%d",&sayi1,&sayi2);
	printf("BIR ISLEM SECIN ");
	scanf("%d,&islem");
	
	switch(islem)
	{
		case 1 :
			{
				sonuc=sayi1+sayi2; printf("%d",sonuc);break;		
			}
		case 2 :
			{
				sonuc=sayi1-sayi2; printf("%d",sonuc);break;		
			}
		case 3 :
			{
				sonuc=sayi1*sayi2; printf("%d",sonuc);break;		
			}
		case 4:
			{
				sonuc=sayi1/sayi2; printf("%d",sonuc);break;		
			}
		default :printf("HATALI SECIM YAPTINIZ");break;	
	}
}
