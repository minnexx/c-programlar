#include <locale.h>
#include<stdio.h>
int main ()
{
	int ism,okl,cinsiyet,snf,no;
    
	setlocale(LC_CTYPE, "turkish");

	git:printf("Ýsminizi Giriniz :\n");
	scanf(" %d",&ism);

    fflush(stdin);

	printf("Cinsiyetinizi Giriniz [Erkek ise 1 e - Kiz ise 2 ye] :\n");
	scanf(" %d",&cinsiyet);
    
    fflush(stdin);

	printf("Okulunuzu Giriniz \n[1-FEN LÝSESÝ\n2-SOSYAL BÝLÝMLER LÝSESÝ\n3-ANADOLU LÝSESÝ\n4-MESLEK LÝSESÝ]:\n");
	scanf(" %d",&okl);
	
    fflush(stdin);
	
	printf("Sýnýfýnýzý Giriniz:\n");
	scanf(" %d",&snf);
	
	fflush(stdin);
	
	printf("Okul Numaranýzýn Son 2 Hanesini Giriniz\n");
	scanf(" %d",&no);
    
    
	
	
	
	
    	switch(cinsiyet)
    {
		
		case 2:	 
    	switch(okl)
    {
		
		    case 1:	if(snf==1||snf==2)
		        printf("E koridoru\n");
		
		else if (snf==3||snf==4)
	        printf("F koridoru\n");
	else
	    printf("yanlýþ sýnýf");
		
		
		if(snf=1&&no<50)
		    printf("e1 odasý \n");
		    
		else if (snf=1&&no>=50)
		    printf("e2 odasý \n");     
		
		else if (snf=2&&no<50)
	        printf("e3 odasý \n");
	        
	    else if (snf=2&&no>=50)
		    printf("g2 odasý \n");     
	        
	    else if (snf=3&&no<50)
	        printf("f1 odasý \n");
	        
	    else if (snf=3&&no>=50)
		    printf("f2 odasý \n");     
		    
		else if (snf=4&&no<50)
		    printf("f3 odasý \n");     
	    
	    else
	        printf(" f4 odasý\n");
		
		 break;
	
		
		
		case 2: if(snf==1||snf==2)
    		printf("G koridoru\n");
		
		else if (snf==3||snf==4)
    		printf("H koridoru\n");
	else
       	printf("yanlýþ sýnýf"); break;
		   	
		
		if(snf=1&&no<50)
		    printf("g1 odasý \n");
         
        else if (snf=1&&no>=50)
		    printf("g2 odasý \n"); 
		
		else if (snf=2&&no<50)
	        printf("g3 odasý \n");         
	        
	    else if (snf=2&&no>50)
	        printf(" g4 odasý\n");
	        
	    else if (snf=3&&no<50)
	        printf("h1 odasý \n");
	    
	    else if (snf=3&&no>=50)
	        printf("h2 odasý\n");
	        
	    else if (snf=4&&no<50)
	        printf("h3 odasý\n");    
	        
	    else
	        printf("h4 odasý\n"); break;
		
	
	    case 3: if(snf==1||snf==2)
		    printf("C koridoru\n");
		
		else if (snf==3||snf==4)
		    printf("D koridoru\n");
	else
	    printf("yanlýþ sýnýf"); break;
		
			
		if(snf=1&&no<50)
		    printf("c1 odasý \n");
		    
		else if (snf=1&&no>=50)
		    printf("c2 odasý \n");     
		
		else if (snf=2&&no<50)
	        printf("c3 odasý \n");
			
		else if (snf=2&&no>=50)
		    printf("c4 odasý \n"); 	          
	        
	    else if (snf=3&&no<50)
	        printf("d1 odasý \n");
	        
	    else if (snf=3&&no>=50)
		    printf("d2 odasý \n");
			
		else if (snf=4&&no<50)
		    printf("d3 odasý \n"); 	     
	    
	    else
	        printf(" d4 odasý\n"); break;
			break;
		
		
		case 4: if(snf==1||snf==2)
		    printf("A koridoru\n");
		
		else if (snf==3||snf==4)
	      	printf("B koridoru\n");
	else
        	printf("yanlýþ sýnýf"); break;
				
		if(snf=1&&no<50)
		    printf("a1 odasý \n");
		
		else if (snf=1&&no>=50)
		    printf("a2 odasý \n"); 
		
		else if (snf=2&&no<50)
	        printf("a3 odasý \n");  
			
		else if (snf=2&&no>=50)
		    printf("a4 odasý \n"); 	        
	        
	    else if (snf=3&&no<50)
	        printf("b1 odasý \n");
	        
	    else if (snf=3&&no>=50)
		    printf("b2 odasý \n");     
		    
		else if (snf=4&&no<50)
		    printf("b3 odasý \n");     
	    
	    else
	        printf("b4 odasý\n"); break;
			break;
	
		default : printf("lðtfen tekrar deneyin\n ");
		goto git;
	} break;
	
		
		
		case 1: 
    	switch(okl)
    {
		
		case 1:	if(snf==1||snf==2)
		    printf("M koridoru\n");
		
		else if (snf==3||snf==4)
	        printf("N koridoru\n");
	else
	    printf("yanlýþ sýnýf"); break;
	    
	    if(snf=1)
		    printf("m1 odasý \n");
		    
		else if (snf=1&&no>=50)
		    printf("m2 odasý \n");     
		
		else if (snf=2&&no<50)
	        printf("m3 odasý \n"); 
			
		else if (snf=2&&no>=50)
		    printf("m4 odasý \n"); 	         
	        
	    else if (snf=3&&no<50)
	        printf("n1 odasý \n");
	        
	    else if (snf=3&&no>=50)
		    printf("n2 odasý \n");     
	    
	    else if (snf=4&&no<50)
		    printf("n3 odasý \n"); 
		    
	    else
	        printf("n4 odasý\n"); break;
			break;
			
	
			case 2: if(snf==1||snf==2)
    		printf("O koridoru\n");
		
		else if (snf==3||snf==4)
    		printf("P koridoru\n");
	else
       	printf("yanlýþ sýnýf"); break;
		   
		if(snf=1&&no<50)
		    printf("o1 odasý \n");
		    
		else if (snf=1&&no>=50)
		    printf("o2 odasý \n");     
		
		else if (snf=2&&no<50)
		    printf("o3 odasý \n"); 
		    
		else if (snf=2&&no>=50)
	        printf("o4 odasý \n");          
	        
	    else if (snf=3&&no<50)
		    printf("p1 odasý \n");     
	        
	    else if (snf=3&&no>=50)
	        printf("p2 odasý\n");
	    
	    else if (snf=4&&no<50)
		    printf("p3 odasý \n"); 
		    
	    else
	        printf("p4 odasý\n"); break;
			break; break;
		
	
	    case 3: if(snf==1||snf==2)
		    printf("K koridoru\n");
		
		else if (snf==3||snf==4)
		    printf("L koridoru\n");
	else
	    printf("yanlýþ sýnýf"); break;
		
		if(snf=1&&no<50)
		    printf("k1 odasý \n");
		    
		else if (snf=1&&no>=50)
		    printf("k2 odasý \n");     
		
		else if (snf=2&&no<50)
	        printf("k3 odasý \n");
			
		else if (snf=2&&no>=50)
		    printf("k4 odasý \n"); 	          
	        
	    else if (snf=3&&no<50)
	        printf("l1 odasý \n");
	        
	    else if (snf=3&&no>=50)
		    printf("l2 odasý \n");  
			
		else if (snf=4&&no<50)
		    printf("l3 odasý \n"); 	   
	    
	    else
	        printf("l4 odasý\n"); break;
			break;break;
		
		
		case 4: if(snf==1||snf==2)
		    printf("I koridoru\n");
		
		else if (snf==3||snf==4)
	      	printf("J koridoru\n");
	else
        	printf("yanlýþ sýnýf"); break;
		
		if(snf=1)
		    printf("i1 odasý \n");
		    
		else if (snf=1&&no>=50)
		    printf("i2 odasý \n");     
		
		else if (snf=2&&no<50)
	        printf("i3 odasý\n");         
			
		else if (snf=2&&no>=50)
		    printf("i4 odasý \n"); 	 
	        
	    else if (snf=3&&no<50)
	        printf("j1 odasý \n");
	        
	    else if (snf=3&&no>=50)
		    printf("j2 odasý \n");     
	    
	    else if (snf=4&&no<50)
		    printf("j2 odasý \n"); 
		
		else
	        printf("j4 odasý\n"); break;
			break;break;
	
		default : printf("lütfen tekrar deneyin\n ");
		goto git;
	}break;
		
		default : printf("lütfemn tekrar deneyin\n ");
		goto git;
	}
	
	
	
	
	
	
	
}
