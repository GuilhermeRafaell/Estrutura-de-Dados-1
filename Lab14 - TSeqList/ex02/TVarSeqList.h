typedef struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
}aluno;

typedef struct lista Lista;

Lista *cria_lista(int n);
int aumenta_tam_lista(Lista *l);
int compactar_lista(Lista *l);
int free_lista(Lista *l);
int insere_inicio_lista(Lista *l, aluno a);
int insere_final_lista(Lista *l, aluno a);
int insere_ordenado_lista(Lista *l, aluno a);
int consulta_lista_pos(Lista *l, int pos, aluno *ac);
int consulta_lista_mat(Lista *l, int mat, aluno *ac);
int remove_inicio_lista(Lista *l);
int remove_final_lista(Lista *l);
int remove_mat_lista(Lista *l, int mat);
int remove_mat_otimizado_lista(Lista *l, int mat);
int tamanho_lista(Lista *l);
int tamanho_aloc_lista(Lista *l);
int cheia_lista(Lista *l);
int vazia_lista(Lista *l);
int imprime_lista(Lista *l);