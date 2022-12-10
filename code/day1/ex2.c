#include <stdio.h>

struct infoProduct
{
    char id[11];
    char name[31];
    int price;
};

typedef struct infoProduct Product;

void Input(Product *p)
{
    printf("Enter product ID: ");
    fflush(stdin);
//     scanf("%s", p->id);
    gets(p->id);
    printf("Enter product name: ");
//     scanf("%s", p->name);
    gets(p->name);
    printf("Enter product price: ");
    scanf("%d", &p->price);
}
void Output(Product *p)
{
    printf("Product ID: %s \t", p->id);
    printf("Product name: %s \t", p->name);
    printf("Product price: %d \t", p->price);
}
int main(int argc, char const *argv[])
{
    Product p;
    Input(&p);
    Output(&p);
    return 0;
}
