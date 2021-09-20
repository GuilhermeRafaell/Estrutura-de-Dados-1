#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// check:<<<erro: e4.1: Definição da estrutura está errada>>>>
// check:<<<erro: use valores reais>>>>

typedef struct ponto{
    int x,y;
}ponto;

typedef struct circulo{
    int r;
    ponto *p;// check:<<<erro: ponteiro?>>>>
}circulo;

int main(){
    circulo c;
    ponto p;
    int raio;
    float area,distancia;

    //Atribuindo valores circulo e seu centro
    p.x = 3;
    p.y = 5;
    c.r = 2;
   // Ex04: Um círculo pode ser definido com duas informações
   // - um ponto central; que é sua coordenada x,y no espaço cartesiano
   // - um raio; que é a distância da borda ao centro
    printf("Circulo: \n");
    printf("Centro: (%d,%d)\n",p.x,p.y);
    printf("Raio: %d\n",c.r);

    area = 3.14*pow(c.r,2);
    printf("Area: %.2f\n",area);

    distancia = sqrt((p.x*p.x) + (p.y*p.y));
    printf("Distancia: %.1f\n",floor(distancia));

   // Crie uma estrura Circulo. Para isso, crie uma estrutura chamada Ponto, que armazenará as
   // coordenadas reais (x,y) de um ponto. Em seguida, crie uma estrutura chamada Circulo,
   // que define o círculo, isto é, armazena um ponto e um raio.
   
   // No programa principal crie uma variável para definir um círculo e a partir dessa variável
   // e mostre a área e a distância do centro do círculo até a origem. 
   // fórmulas:
   // area = 3,14*r*r
   // distancia d = sqtr(x*x + y*y)
   
   // Exemplo de saída: Circulo: Centro (3,5); Raio 2; Área: 12.56; Distancia: 5.0


    return 0;
}