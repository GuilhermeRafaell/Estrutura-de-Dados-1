/*
Discuta porque no exercício anterior ao somarmos/subtrairmos um valor de ponteiro há um comportamento diferente para cada variável.

A diferenca entre a soma e a subtracao entre as variaveis , acontece devido o tipo dela , ou seja , caso seja um int a variavel ocupa 4 Bytes.
Caso a variavel seja double ocupa 8 Bytes , float 4 Bytes e char 1 Byte por elemento . Logo , quando somamos uma unidade ou subtrairmos sobre ela ,
pulamos 4 Bytes caso seja um int por exemplo , isto é, se somarmos 1 ou (int *p) seu endereco pula mais 4 Bytes , da mesma forma se subtrairmos,
porem diminui 4 Bytes quando subtraido. 
*/