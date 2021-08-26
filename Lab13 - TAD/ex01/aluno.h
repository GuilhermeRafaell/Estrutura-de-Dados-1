
typedef struct aluno aluno;

struct aluno {
    char nome[100];
    int matricula;
    float cra;
};


int matricula_novo_aluno(aluno *p, int matricula);
