#include <math.h>
#include <stdio.h>


int main() {

    float a, b, c, Delta;
    float R1, R2;

    printf ("<< Raizes de uma equacao de 2o. grau >>\n");
    printf ("Entre com o termo A:");
    scanf ("%f", &a);
    printf ("Entre com o termo B:");
    scanf ("%f", &b);
    printf ("Entre com o termo C:");
    scanf ("%f", &c);

    Delta = pow(b,2)- 4*a*c;  
    

    //Duas Raizes Reais IGUAIS ou Duas Raizes Reais DISTINTAS

    if(Delta>0 && Delta==0){
        R1 = ((-1*b) + sqrt(Delta))/2*a;
        R2 = ((-1*b) + sqrt(Delta))/2*a;
        printf("As raizes da equacao sao %.2f e %.2f.",R1,R2);
    }

    //Duas Raizes Complexas

    if (Delta<0)
    {
        R1 = ((-1*b) + sqrt(-1*Delta))/2*a;
        R2 = ((-1*b) - sqrt(-1*Delta))/2*a;
        printf ("As raizes da equacao sao %.2f*i e %.2f*i.",R1,R2);
    }else
    {
        R1 = ((-1*b) + sqrt(Delta)) / 2*a;
        R2 = ((-1*b) - sqrt(Delta)) / 2*a;
        printf ("As raizes da equacao sao %.2f e %.2f.",R1,R2);
    }
    
}