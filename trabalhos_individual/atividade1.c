// Fernando Henrique Lembo 1CCA

#include <stdio.h>

int main () {

// Atividade 1
int x = (2+3) *4;
/*
2+3 = 5
x = 5 * 4 = 20
Soma em parênteses acontece primeiro  
*/

// Atividade 2
int x = (2+3) *4;
/*
2+3 = 5
x = 5 * 4 = 20
Soma em parênteses acontece primeiro  
*/

// Atividade 3 
float x = 10 / 3;
/*
x = 10/3 = 3
Resto = 1
Mesmo em float a divisão ocorre por inteiros
*/

// Atividade 4
float x = 1 / 3.0;
/*
x = 10/3 = 3.3333
Agora tem um número decimal
*/

// Atividade 5
float x = 1 / 3.0;
/*
x = 10/3 = 3.3333
Agora tem um número decimal
*/

// Atividade 6
int x = 5 + 7 / 2;
/*
7 / 2 = 3
3 + 5 = 8
x = 8
Divisão antes da soma
*/

// Atividade 7 
int x = 10 > 5;
/*
10 > 5 = true -> 1
x = 1 
Expressões booleanas viram 1 (true) ou 0 (false).
*/

// Atividade 8 
int x = 10 == 5;
/*
10 == 5 = false → 0
x = 0 
10 não é igual a 5
*/

// Atividade 9 
int x = (2+3) > (4*2);
/*
2 + 3 = 5
4 * 2 = 8
5 > 8 = false 
x = 0 
Primeiro os parênteses e depois 5 é menor que 8 ou seja falso (0)
*/

// Atividade 10
int x = (10/2) + (3>1);
/*
10/2 = 5
3>1 = 1 
5 + 1 = 6
x = 6
Mistura de inteiro com booleano (1).
*/

// Atividade 11
int x = (5 > 3) * 10;
/*
5 > 3 = 1 
1 * 10 = 10
x = 10
Resolver primeiro o () que ficou 1 e depois multiplicar por 10
*/

// Atividade 12 
int x = (8+2) / (3+2);
/*
8 + 2 = 10
3 + 2 = 5
10 / 5 = 2
x = 2
Parênteses primeiro
*/


// Atividade 14
int x = (8+2) / 3+2;
/*
8 + 2 = 10
10 / 3 = 3
3 + 2 = 5
x = 5
Divisão inteira descarta decimal
*/

// Atividade 15 
int x = 5 / 2 * 2;
/*
5 / 2 = 2 
2 * 2 = 4
x = 4
Ordem da esquerda para direita
*/

// Atividade 16 
int x = (10>5) + (3*2);
/*
10 > 5 = 1
3 * 2 = 6
6 + 1 = 7
x = 7
Primeiro o booleano depois a multiplicação 
*/

//Atividade 17
int a, b;
scanf("%d %d", &a, &b);
// Pergunta 1 
int x = a + b * 2;
// Pergunta 2
b * 2 = 4 * 2 = 8;
a + 8 = 3 + 8 = 11;
x = 11;

//Atividade 18
int idade;
scanf("%d", &idade);
int maior = idade >= 18;
// Pergunta 1
20 >= 18 = true → 1
// Resultado:
maior = 1
// 20 é maior que 18 → é maior de idade.
 
//Pergunta 2
15 >= 18 = false → 0
//Resultado:
maior = 0
// 15 não é maior de idade.


return 0;

}

