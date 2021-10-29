/*
ex03) Mostre como uma pilha pode ser usada para resolver a expressão 
matemática abaixo. Não confundir números negativos com subtrações.

Cada número e operador é lido em um passo. 
Para cada passo, mostre o estado da pilha 

Exemplo de como mostrar a pilha
2 2 <topo  // o número 2 está no topo
2 3 4 <topo // o número 4 está no topo

Expressão: 


7 -4 8 - * 7 +

push(7)
7 <topo
push(-4)
7 -4 <topo
push(8)
7 -4 8 <topo
push(pop(8) - pop(-4))
7 12 <topo
push(pop(12) * pop(7))
84 <topo
push(7)
84 7 <topo
push(pop(7) + pop(84))
91 <topo

*/