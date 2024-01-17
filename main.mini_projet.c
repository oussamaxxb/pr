#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int choice ;


struct nombre{
                float a ;
				float b ;
				} ;

int n , i ;
float num1 , num2 ;

int main() 
{

    struct nombre c1 , c2 , c3 ;



programme:

    printf("Entrer un nombre pour choiasicer l'operation : \n 1-la somme \n 2-la defferonce \n 3-le produit \n 4-la division \n 5-la puissance \n 6-linverse de fraction \n 7-comparation de deux fractions \n 8-simplification de fraction \n");
    scanf("%d", &choice) ;





    switch (choice) {
        case 1:
            printf("entrer le 1er nombre \n") ;
            scanf("%f" , &c1.a) ;
            printf("/\n") ;
            scanf("%f" , &c1.b) ;

            printf("entrer le 2em nombre \n") ;
            scanf("%f" , &c2.a) ;
            printf("/\n") ;
            scanf("%f" , &c2.b) ;

            if(c1.b==c2.b) { 
              c3.a=c1.a+c2.a ;
              c3.b=c1.b ;
               }
            else{ 
              c3.a=c1.a*c2.b+c2.a*c1.b ;
              c3.b=c1.b*c2.b ;
              }
	
            printf("la somme est %f / %f " , c3.a , c3.b) ;
            printf("= %f \n" , c3.a/c3.b) ;
            break;
        case 2:
            printf("entrer le 1er nombre \n") ;
            scanf("%f" , &c1.a) ;
            printf("/ \n") ;
            scanf("%f" , &c1.b) ;

            printf("entrer le 2em nombre \n") ;
            scanf("%f" , &c2.a) ;
            printf("/ \n") ;
            scanf("%f" , &c2.b) ;

            if(c1.b==c2.b) { 
              c3.a=c1.a-c2.a ;
              c3.b=c1.b ;
              }
            else{ 
              c3.a=c1.a*c2.b-c2.a*c1.b ;
              c3.b=c1.b*c2.b ;
              }
	
            printf("la defferonce est %f / %f " , c3.a , c3.b) ;

            printf("= %f \n" , c3.a/c3.b) ;
            break;
        case 3:
            printf("entrer le 1er nombre \n") ;
            scanf("%f" , &c1.a) ;
            printf("/ \n") ;
            scanf("%f" , &c1.b) ;

            printf("entrer le 2em nombre \n") ;
            scanf("%f" , &c2.a) ;
            printf("/ \n") ;
            scanf("%f" , &c2.b) ;


              c3.a=c1.a*c2.a ;
              c3.b=c1.b*c2.b ;

	
            printf("le produit est %f / %f " , c3.a , c3.b) ;

            printf("= %f \n" , c3.a/c3.b) ;
            break;
        case 4:
            printf("entrer le 1er nombre \n") ;
            scanf("%f" , &c1.a) ;
            printf("/ \n") ;
            scanf("%f" , &c1.b) ;

            printf("entrer le 2em nombre \n") ;
            scanf("%f" , &c2.a) ;
            printf( "/ \n") ;
            scanf("%f" , &c2.b) ;


              c3.a=c1.a*c2.b ;
              c3.b=c1.b*c2.a ;

	
            printf("le souletion  est %f / %f " , c3.a , c3.b) ;

            printf("= %f \n" , c3.a/c3.b) ;
            
            
            
            
            
            break;    
        case 5:
            printf("entrer le nombre \n") ;
            scanf("%f" , &c1.a) ;
            printf("/ \n") ;
            scanf("%f" , &c1.b) ;

            printf("entre la puissance ") ;
            scanf("%d" , &n) ;

            c2.a=1 ;
            c2.b=1 ;

            if(n==1)
             {
              c2.a=c1.a ; 
              c2.b=c1.b ; 
             }
            else
             {
              for(i=0 ; i<n ; i++)
               {
    	        c2.a=c2.a*c1.a ;
                c2.b=c2.b*c1.b ;
               }
             }
            printf("Le resultat est %f / %f " , c2.a , c2.b) ;

            printf("= %f \n" , c2.a/c2.b) ;
            break;    
        case 6:
            printf("entrer le  nombre \n") ;
            scanf("%f" , &c1.a) ;
            printf("/ \n") ;
            scanf("%f" , &c1.b) ;

            printf("linverse est %f/%f" , c1.b , c1.a) ;
            printf(" = %f \n" , c1.b/c1.a) ;
            break;    
        case 7:
            printf("Entrer le 1er nombre:\n");
            scanf("%f", &c1.a);
            printf("/ \n");
            scanf("%f", &c1.b);

            printf("Entrer le 2eme nombre:\n");
            scanf("%f", &c2.a);
            printf("/ \n");
            scanf("%f", &c2.b);

            if (c2.b == c1.b) {
                if (c1.a > c2.a)
                    printf("%f/%f > %f/%f\n", c1.a, c1.b, c2.a, c2.b);
                else if (c1.a < c2.a)
                    printf("%f/%f < %f/%f\n", c1.a, c1.b, c2.a, c2.b);
                else
                    printf("%f/%f = %f/%f\n", c1.a, c1.b, c2.a, c2.b);
            } else {
                if (c1.a * c2.b > c2.a * c1.b)
                    printf("%f/%f > %f/%f\n", c1.a, c1.b, c2.a, c2.b);
                else if (c1.a * c2.b < c2.a * c1.b)
                    printf("%f/%f < %f/%f\n", c1.a, c1.b, c2.a, c2.b);
                else
                    printf("%f/%f = %f/%f\n", c1.a, c1.b, c2.a, c2.b);
            }
            break;    
        case 8:
        	    printf("Enter le nombre: \n") ;
                scanf("%f", &c1.a) ;
                printf("/\n") ;
                scanf("%f", &c1.b) ;

    
               printf("Original: %f/%f\n", c1.a, c1.b) ;

    


               num1=c1.a ; 
               num2=c1.b ; 
    

               while (num1 != num2) {
                  if (num1 > num2){
                     num1 -= num2 ;}
                  else{
                     num2 -= num1 ;}
                }

 
    
                printf("Reduced: %f/%f\n", c1.a/num1, c1.b/num1) ;
            break;
        default:
            printf("Votre choix Pas entre 1 et 8.\n");
    }



	const char y='y' , n='n' ;
	char test ;
	printf("voulez-vous repeter [y/n] : ") ;
	scanf(" %c" , &test) ; 
	if(test==y)
	 { 
	  goto programme ;
	 }
	else{
	printf("merci :)") ;
	}
	

	
	return 0 ;
}
