
typedef struct TMat2D TMat2D;

TMat2D *mat2D_create(int nrows, int ncolumns);
int mat2D_free(TMat2D *mat);

int mat2D_set_value(TMat2D *mat, int i, int j, double val);
int mat2D_get_value(TMat2D *mat, int i, int j, double *val);
int fill_random_mat(TMat2D *mat, double max);
int sum_mat(TMat2D *mat1, TMat2D *mat2, TMat2D *res);
int multiplie_mat(TMat2D *mat1, TMat2D *mat2, TMat2D *res);
int multiplieNum_mat(TMat2D *mat, TMat2D *res, double num);
int calc_trace(TMat2D *mat, double *res);
int vet_sum_colums(TMat2D *mat, double **sumC);
int vet_sum_rows(TMat2D *mat, double **sumR);