#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as notas
    float nota1, nota2, nota3;
    
    // Solicita ao usuário que insira as três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    // Calcula a média aritmética
    float media = (nota1 + nota2 + nota3) / 3.0;
    
    // Apresenta o resultado na tela
    printf("A média das notas é: %.2f\n", media);
    
    return 0;
}