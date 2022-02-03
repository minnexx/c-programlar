#include<stdio.h>
int main()
{
	int sayi1,sayi2,sayi3,toplam,fark,carpma,karesi1,karesi2,karesi3,kupu1,kupu2,kupu3;
	float bolme;
	
	printf("birinci sayiyi giriniz=");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz=");
	scanf("%d",&sayi2);
	printf("ucuncu sayiyi giriniz=");
	scanf("%d",&sayi3);

	toplam=sayi1+sayi2+sayi3;
	fark=sayi3-sayi1;
	carpma=sayi1*sayi2*sayi3;
	bolme=(float)sayi3/(float)sayi1;

	karesi1=sayi1*sayi1;
	karesi2=sayi2*sayi2;
	karesi3=sayi3*sayi3;

	kupu1=sayi1*sayi1*sayi1;
	kupu2=sayi2*sayi2*sayi2;
	kupu3=sayi3*sayi3*sayi3;

	printf("sayilarin toplami=%d",toplam);
	printf("\nsayi3 ile sayi1in farki=%d",fark);
	printf("\nsayilarin carpimi=%d",carpma);
	printf("\nsayi3un sayi1e bolumu=%f",bolme);
	printf("\nsayi1in karesi=%d",karesi1);
	printf("\nsayi2nin karesi=%d",karesi2);
	printf("\nsayi3un karesi=%d",karesi3);
	printf("\nsayi1in kupu=%d",kupu1);
	printf("\nsayi2nin kupu=%d",kupu2);
	printf("\nsayi3un kupu=%d",kupu3);
}
