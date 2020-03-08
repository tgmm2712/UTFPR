struct end_s{
    char rua[50],bairro[20];
    int cep;
};

struct pes_s
{
    char nome[64];
    struct end;
    int telefone;
};

typedef struct pes_s pessoa;

void ler_rua(pessoa *p){
    fgets(p->rua,50,stdin);
    p->rua[stdlen(p->rua)]='\0';
}

void print_rua(pessoa p){
    printf("end:%s\n",p.rua);

}

int main(){
    pessoa x;
}

int main(){
    pessoa x[10];
}

pessoa *fn(int n){
    pessoa *p;
    p=(pessoa) malloc(sizeof(pessoa)*n);
    return p;
}
int main(){
    pessoa *p=fn(10);
}





