#include <locale.h>
#include<stdio.h>
int main ()
{
	int ism,okl,cinsiyet,snf,no;
    
	setlocale(LC_CTYPE, "turkish");

	git:printf("�sminizi Giriniz :\n");
	scanf(" %d",&ism);

    fflush(stdin);

	printf("Cinsiyetinizi Giriniz [Erkek ise 1 e - Kiz ise 2 ye] :\n");
	scanf(" %d",&cinsiyet);
    
    fflush(stdin);

	printf("Okulunuzu Giriniz \n[1-FEN L�SES�\n2-SOSYAL B�L�MLER L�SES�\n3-ANADOLU L�SES�\n4-MESLEK L�SES�]:\n");
	scanf(" %d",&okl);
	
    fflush(stdin);
	
	printf("S�n�f�n�z� Giriniz:\n");
	scanf(" %d",&snf);
	
	fflush(stdin);
	
	printf("Okul Numaran�z�n Son 2 Hanesini Giriniz\n");
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
	    printf("yanl�� s�n�f");
		
		
		if(snf=1&&no<50)
		    printf("e1 odas� \n");
		    
		else if (snf=1&&no>=50)
		    printf("e2 odas� \n");     
		
		else if (snf=2&&no<50)
	        printf("e3 odas� \n");
	        
	    else if (snf=2&&no>=50)
		    printf("g2 odas� \n");     
	        
	    else if (snf=3&&no<50)
	        printf("f1 odas� \n");
	        
	    else if (snf=3&&no>=50)
		    printf("f2 odas� \n");     
		    
		else if (snf=4&&no<50)
		    printf("f3 odas� \n");     
	    
	    else
	        printf(" f4 odas�\n");
		
		 break;
	
		
		
		case 2: if(snf==1||snf==2)
    		printf("G koridoru\n");
		
		else if (snf==3||snf==4)
    		printf("H koridoru\n");
	else
       	printf("yanl�� s�n�f"); break;
		   	
		
		if(snf=1&&no<50)
		    printf("g1 odas� \n");
         
        else if (snf=1&&no>=50)
		    printf("g2 odas� \n"); 
		
		else if (snf=2&&no<50)
	        printf("g3 odas� \n");         
	        
	    else if (snf=2&&no>50)
	        printf(" g4 odas�\n");
	        
	    else if (snf=3&&no<50)
	        printf("h1 odas� \n");
	    
	    else if (snf=3&&no>=50)
	        printf("h2 odas�\n");
	        
	    else if (snf=4&&no<50)
	        printf("h3 odas�\n");    
	        
	    else
	        printf("h4 odas�\n"); break;
		
	
	    case 3: if(snf==1||snf==2)
		    printf("C koridoru\n");
		
		else if (snf==3||snf==4)
		    printf("D koridoru\n");
	else
	    printf("yanl�� s�n�f"); break;
		
			
		if(snf=1&&no<50)
		    printf("c1 odas� \n");
		    
		else if (snf=1&&no>=50)
		    printf("c2 odas� \n");     
		
		else if (snf=2&&no<50)
	        printf("c3 odas� \n");
			
		else if (snf=2&&no>=50)
		    printf("c4 odas� \n"); 	          
	        
	    else if (snf=3&&no<50)
	        printf("d1 odas� \n");
	        
	    else if (snf=3&&no>=50)
		    printf("d2 odas� \n");
			
		else if (snf=4&&no<50)
		    printf("d3 odas� \n"); 	     
	    
	    else
	        printf(" d4 odas�\n"); break;
			break;
		
		
		case 4: if(snf==1||snf==2)
		    printf("A koridoru\n");
		
		else if (snf==3||snf==4)
	      	printf("B koridoru\n");
	else
        	printf("yanl�� s�n�f"); break;
				
		if(snf=1&&no<50)
		    printf("a1 odas� \n");
		
		else if (snf=1&&no>=50)
		    printf("a2 odas� \n"); 
		
		else if (snf=2&&no<50)
	        printf("a3 odas� \n");  
			
		else if (snf=2&&no>=50)
		    printf("a4 odas� \n"); 	        
	        
	    else if (snf=3&&no<50)
	        printf("b1 odas� \n");
	        
	    else if (snf=3&&no>=50)
		    printf("b2 odas� \n");     
		    
		else if (snf=4&&no<50)
		    printf("b3 odas� \n");     
	    
	    else
	        printf("b4 odas�\n"); break;
			break;
	
		default : printf("l�tfen tekrar deneyin\n ");
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
	    printf("yanl�� s�n�f"); break;
	    
	    if(snf=1)
		    printf("m1 odas� \n");
		    
		else if (snf=1&&no>=50)
		    printf("m2 odas� \n");     
		
		else if (snf=2&&no<50)
	        printf("m3 odas� \n"); 
			
		else if (snf=2&&no>=50)
		    printf("m4 odas� \n"); 	         
	        
	    else if (snf=3&&no<50)
	        printf("n1 odas� \n");
	        
	    else if (snf=3&&no>=50)
		    printf("n2 odas� \n");     
	    
	    else if (snf=4&&no<50)
		    printf("n3 odas� \n"); 
		    
	    else
	        printf("n4 odas�\n"); break;
			break;
			
	
			case 2: if(snf==1||snf==2)
    		printf("O koridoru\n");
		
		else if (snf==3||snf==4)
    		printf("P koridoru\n");
	else
       	printf("yanl�� s�n�f"); break;
		   
		if(snf=1&&no<50)
		    printf("o1 odas� \n");
		    
		else if (snf=1&&no>=50)
		    printf("o2 odas� \n");     
		
		else if (snf=2&&no<50)
		    printf("o3 odas� \n"); 
		    
		else if (snf=2&&no>=50)
	        printf("o4 odas� \n");          
	        
	    else if (snf=3&&no<50)
		    printf("p1 odas� \n");     
	        
	    else if (snf=3&&no>=50)
	        printf("p2 odas�\n");
	    
	    else if (snf=4&&no<50)
		    printf("p3 odas� \n"); 
		    
	    else
	        printf("p4 odas�\n"); break;
			break; break;
		
	
	    case 3: if(snf==1||snf==2)
		    printf("K koridoru\n");
		
		else if (snf==3||snf==4)
		    printf("L koridoru\n");
	else
	    printf("yanl�� s�n�f"); break;
		
		if(snf=1&&no<50)
		    printf("k1 odas� \n");
		    
		else if (snf=1&&no>=50)
		    printf("k2 odas� \n");     
		
		else if (snf=2&&no<50)
	        printf("k3 odas� \n");
			
		else if (snf=2&&no>=50)
		    printf("k4 odas� \n"); 	          
	        
	    else if (snf=3&&no<50)
	        printf("l1 odas� \n");
	        
	    else if (snf=3&&no>=50)
		    printf("l2 odas� \n");  
			
		else if (snf=4&&no<50)
		    printf("l3 odas� \n"); 	   
	    
	    else
	        printf("l4 odas�\n"); break;
			break;break;
		
		
		case 4: if(snf==1||snf==2)
		    printf("I koridoru\n");
		
		else if (snf==3||snf==4)
	      	printf("J koridoru\n");
	else
        	printf("yanl�� s�n�f"); break;
		
		if(snf=1)
		    printf("i1 odas� \n");
		    
		else if (snf=1&&no>=50)
		    printf("i2 odas� \n");     
		
		else if (snf=2&&no<50)
	        printf("i3 odas�\n");         
			
		else if (snf=2&&no>=50)
		    printf("i4 odas� \n"); 	 
	        
	    else if (snf=3&&no<50)
	        printf("j1 odas� \n");
	        
	    else if (snf=3&&no>=50)
		    printf("j2 odas� \n");     
	    
	    else if (snf=4&&no<50)
		    printf("j2 odas� \n"); 
		
		else
	        printf("j4 odas�\n"); break;
			break;break;
	
		default : printf("l�tfen tekrar deneyin\n ");
		goto git;
	}break;
		
		default : printf("l�tfemn tekrar deneyin\n ");
		goto git;
	}
	
	
	
	
	
	
	
}
