#include<stdio.h>
int main ()
{
	int durm,no,cinsiyet,snf;
	int a,b,c,d,e,f,g,h,i,j,l,k;

	
	a ==2009,3123,5888,7483,1902,1999,9202,1245;
	b ==6479,1293,1888,1474,2233,8923,2239,8932;
	c ==5479,2293,2888,2474,3233,8323,6999,9002;
	d ==1479,4293,3888,3474,4233,8923,2889,8112;
	e ==3479,5293,4888,4474,5233,8453,2779,8292;
	f ==4479,6293,6888,5474,6233,8663,2669,8002;
	g ==7479,7293,7888,6474,7233,8773,2559,8092;
	h ==8479,8293,8888,7474,8233,8223,2449,8492;
	i ==9479,9293,9888,8474,9233,8003,2339,8892;
	j ==6079,3093,1088,9474,9033,8213,2229,8962;
	k ==6179,3193,1188,7074,7133,8143,2119,8892;
	l ==6279,3293,1287,1740,7233,8153,2005,8902;

	git:printf("numaranizi giriniz:\n");
	scanf(" %d",&no);

    fflush(stdin);

	printf("Cinsiyetinizi giriniz [Erkek ise 1 e - Kiz ise 2 ye] :\n");
	scanf(" %d",&cinsiyet);
	
    fflush(stdin);
    
	printf(":üniversite ise 1'e lise ise 2'ye basiniz :\n");
	scanf(" %d",&durm);
	
    fflush(stdin);
	
	printf("Sinifinizi giriniz [hazirlik ise 5'e basin]:\n");
	scanf(" %d",&snf);
	
	
	if(no==2009||no==3123||no==5888||no==7483||no==1902||no==1999||no==9202||no==1245)
		printf("A odasi\n");
		
		else if (no==6479||no==1293||no==1888||no==1474||no==2233||no==8923||no==2239||no==8932)
		printf("B odasi\n");
		
        else if (no==5479||no==2293||no==2888||no==2474||no==3233||no==8323||no==6999||no==9002)
		printf("C odasi\n");
		
		else if (no==1479||no==4293||no==3888||no==3474||no==4233||no==8923||no==2889||no==8112)
		printf("D odasi\n");
		
		else if (no==3479||no==5293||no==4888||no==4474||no==5233||no==8453||no==2779||no==8292)
		printf("E odasi\n");
		
		else if (no==4479||no==6293||no==6888||no==5474||no==6233||no==8663||no==2669||no==8002)
		printf("F odasi\n");
		
		else if (no==7479||no==7293||no==7888||no==6474||no==7233||no==8773||no==2559||no==8092)
		printf("G odasi\n");
		
		else if (no==8479||no==8293||no==8888||no==7474||no==8233||no==8223||no==2449||no==8492)
		printf("H odasi\n");
		
		else if (no==9473||no==9293||no==9888||no==8474||no==9233||no==8003||no==2339||no==8892)
		printf("I odasi\n");
		
		else if (no==6079||no==3093||no==1088||no==9474||no==9033||no==8213||no==2229||no==8962)
		printf("J odasi\n");
		
		else if (no==6179||no==3193||no==1188||no==7074||no==7133||no==8143||no==2119||no==8892)
		printf("K odasi\n");
		
		else if (no==6279||no==3293||no==1288||no==7174||no==7233||no==8153||no==2005||no==8902)
		printf("L odasi \n");
			
	else
	printf("numaraniz bulunmamaktadir...");
	
	switch(cinsiyet)
    {
    	case 1: if(snf=1)
		printf("1.kat B koridoru\n");                             
	
		else if(snf=2)
		printf("2.kat D koridoru\n");                     
	
		else if(snf=3)
		printf("3.kat F koridoru\n");
		
		else if(snf=4)
		printf("4.kat H koridoru\n");
		
		else if(snf=5)
		printf("1.kat B koridoru\n");
		
		else
		prinf("yanlis girdiniz\n");
		break ;                    
	
	
		case 2: if(snf=1)
		printf("1.kat A koridoru\n");                             
	
		else if(snf=2)
		printf("2.kat C koridoru\n");                     
	
		else if(snf=3)
		printf("3.kat E koridoru\n");
		
		else if(snf=4)
		printf("4.kat G koridoru\n");
		
		else if(snf=5)
		printf("1.kat I koridoru\n");
		
		else
		prinf("yanlis girdiniz\n");
		break ;
	
		default : printf("lutfem tekrar deneyin\n ");
		goto git;
	}
}
