#include<stdio.h>
int main ()
{ 
	float a,b,c;
	char islem;
	
	git:printf("a sayisini giriniz");
	scanf ("%f",& a);
	
	printf("b sayisini giriniz");
	scanf ("%f",& b);
	
	printf("yapilacak islemi seciniz\n{+,-,*,/,u}");
	scanf ("%c",& islem);
	
	switch (islem)
   {
	 case {+}:printf("a + b = %f\n",a+b); break;
	 case {-}:printf("a - b = %f\n",a-b); break;
	 case {*}:printf("a * b = %f\n",a*b); break;
	 case {/}:printf("a / b = %f\n",a/b); break;
	 case {u}:printf("a ^ b = %f\n",pow(a,b)); break;
	 default:("yapilacak bir islem seciniz");
	 goto git;
   }
	
}
