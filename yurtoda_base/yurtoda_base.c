#include<stdio.h>
int main ()
{
	int yas;
	int ad;
	char cinsiyet[1] ;
	
	printf("Adinizi ve soyadinizi giriniz :\n");
	scanf(" %d",&ad);

    fflush(stdin);

	printf("Cinsiyetinizi giriniz [E-K] :\n");
	scanf(" %c",&cinsiyet);
	
    fflush(stdin);
	
	printf("Yasinizi giriniz:\n");
	scanf(" %d",&yas);
	
	if (cinsiyet[1] == 'E')
	{
		if(yas>=6&&yas<=10)
		printf("1.kat B koridoru");
		
		else if(yas>10&&yas<=14)
		printf("2.kat D koridoru");
		
		else
		printf("3.kat F koridoru");
	}
	
	else if (cinsiyet[1]== 'K')
	{
		if(yas>=6&&yas<=10)
		printf("1.kat A koridoru");
		
		else if(yas>10&&yas<=14)
		printf("2.kat C koridoru");
		
		else
		printf("3.kat E koridoru");
	}
	
	else
	{
		printf("Yanlis girdiniz !!!");
	}
        getch();
}

