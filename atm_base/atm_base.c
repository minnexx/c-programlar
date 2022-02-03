#include<stdio.h>
int main()
{
	int secim;
    git:printf("para cekmek icin 1'e"
               "\npara yatirmak icin 2'ye"
               "\nhavale yapmak icin 3'e"
               "\nbakiye sorgulamak icin 4'e"
               "\nkart iade icin 5'ye"
			   "\nbasin=");
    scanf("%d",&secim);
    switch(secim)
    {
    	case 1: printf("para cekme islemi gerceklestiriliyor");break;
		case 2: printf("para yatirma islemi gerceklestiriliyor");break;
		case 3: printf("havale islemi gerceklestiriliyor");break;
		case 4: printf("bakiye sorgulama islemi gerceklestiriliyor");break;
		case 5: printf("kart iade islemi gerçeklestiriliyor");break;
		default : printf("lutfem yapacaginiz islemi secin\n ");
		goto git;
	}
}
