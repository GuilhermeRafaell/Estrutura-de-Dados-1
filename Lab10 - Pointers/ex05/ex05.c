/*
5)	Os operadores + e – funcionam com ponteiros. Chamamos de aritmética de ponteiros. 
Considere o código abaixo. Complete o código e preencha a tabela abaixo com os endereços de cada printf.

*** modificar o especificador de formato no printf caso seja necessário

+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
| Nome variável               |                   |                   |                 |                   |                   |
| / Endereços                 | Endereço var-2    | Endereço var-1    | Endereço var    | Endereço var+1    | Endereço var+2    |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
|                             |                   |                   |                 |                   |                   |
| p_v1                        |  6422280          |  6422284          |   6422288       |   6422292         |   6422296         |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
|                             |                   |                   |                 |                   |                   |
| p_v2                        |  6422264          |  6422272          |   6422280       |   6422288         |   6422296         |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
|                             |                   |                   |                 |                   |                   |
| p_c                         |  6422276          |  6422277          |   6422279       |   6422280         |   6422281         |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
*/