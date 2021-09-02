typedef struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
}aluno;

typedef struct lista Lista;

Lista *cria_Lista(int n);
int aumenta_tam_Lista(Lista *l);
int compactar_Lista(Lista *l);
int free_Lista(Lista *l);
int insere_inicio_Lista(Lista *l, aluno a);
int insere_final_Lista(Lista *l, aluno a);
int insere_ordenado_Lista(Lista *l, aluno a);
int consulta_Lista_pos(Lista *l, int pos, aluno *ac);
int consulta_Lista_mat(Lista *l, int mat, aluno *ac);
int remove_inicio_Lista(Lista *l);
int remove_final_Lista(Lista *l);
int remove_mat_Lista(Lista *l, int mat);
int remove_mat_otimizado_Lista(Lista *l, int mat);
int tamanho_Lista(Lista *l);
int tamanho_aloc_Lista(Lista *l);
int cheia_Lista(Lista *l);
int vazia_Lista(Lista *l);
int imprime_Lista(Lista *l);