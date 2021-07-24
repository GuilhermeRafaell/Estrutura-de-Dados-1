#include <stdio.h>
#include <math.h>
int main(){
    double imc,massa,altura;

    printf("<< Calculo de I.M.C >>\n");
    printf("Digite seu peso: ");
    scanf("%lf",&massa);
    printf("Digite sua altura: ");
    scanf("%lf",&altura);

    imc = massa/(pow(altura,2));

    if(imc<18.5){
        printf("Classificacao --- Magreza\n");
    }
    else if(imc>=18.5 && imc<=24.9){
        printf("Classificacao --- Saudavel\n");
    }
    else if(imc>=25.0 && imc<=29.9){
        printf("Classificacao --- Sobrepeso\n");
    }
    else if(imc>=30.0 && imc<=34.9){
        printf("Classificacao --- Obesidade Grau I\n");
    }
    else if(imc>=35.0 && imc<=39.9){
        printf("Classificacao --- Obesidade Grau II (severa)\n");
    }else{
        printf("Obesidade Grau III (morbida)\n");
    }
    return 0;
}