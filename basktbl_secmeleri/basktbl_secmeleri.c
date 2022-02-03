#include<stdio.h>
int main()
{
	float boy;
	char cinsiyet;
	int yas;
	printf("Cinsiyet Icin (E/K)=");
	scanf("%c",&cinsiyet);
	printf("\nBoyunuzu Giriniz=");
	scanf("%f",&boy);
	printf("\nYasinizi Giriniz=");
	scantf("%d",&yas);
	
	if(cinsiyet=='E'&& boy>=1.8 && yas>=17);
	{
		printf("Cinsiyet Erkek, boyunuz %.2f , yasýnýz %d ,BasketTakimina Alindini,boy,yas");
	}
	else if(cinsiyet=='K' && boy>=1.7 && yas>=16);
	{
		printf("Cinsiyet Kiz, boyunuz %.2f , yasýnýz %d ,BasketTakimina Alindini,boy,yas");
	}
	else
	{
		printf("Uzgunuz Takima Alinamadiniz");
	}
}
