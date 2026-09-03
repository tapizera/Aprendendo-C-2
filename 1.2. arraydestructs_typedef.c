#include <stdio.h>
#include <string.h>

#define NUM_PRODUTOS 5 
// cria uma constante chamada NUM_PRODUTOS que vale 5.
// o pré-processador transforma isso em: Produto produtos[5];

typedef struct {
	char nome[50];
	int codigo;
	int quantidade;
	float preco;
} Produto;

int main() {
	int i;
	// Preenchendo os dados dos produtos
	// Com o typedef, não precisa mais escrever "struct Produto"
	Produto produtos[NUM_PRODUTOS] = {
        {"Camiseta",        101, 50, 29.99},
        {"Calca Jeans",     102, 30, 79.99},
        {"Tenis Esportivo", 103, 20, 199.99},
        {"Bolsa de Couro",  104, 15, 149.99},
        {"Oculos de Sol",   105, 10, 89.99}

	// Exibindo os dados dos produtos
	printf("=== Estoque de Produtos ===\n");
	for (i = 0; i < 5; i++) {
	    printf("Produto %d:\n", i + 1);
	    printf("  Nome: %s\n", produtos[i].nome);
        printf("  Codigo: %d\n", produtos[i].codigo);
        printf("  Quantidade: %d\n", produtos[i].quantidade);
        printf("  Preco: R$ %.2f\n\n", produtos[i].preco);
        printf("  Preco: R$ %.2f\n\n", produtos[i].preco);
	}
	
	return 0;
}
}