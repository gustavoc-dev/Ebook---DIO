#include <stdio.h>

int main(){
    struct Pessoa {
    char nome[50];
    int idade;
    float altura;
    };

    struct Pessoa pessoa1;
    pessoa1.idade = 30;   
    return 0;
}