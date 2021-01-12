# CS50 - Introduction to Computer Science

Esse é um repositório onde guardo todas minhas resoluções de exercícios e laboratórios do curso.

## Motivação 

Em 2021, decidi completar alguns dos cursos nos quais considerei mais interessantes. Entre esses, o CS50, para exercitar minha memória sobre as bases de Ciência da Computação, como também para garantir que eu volte atrás em tudo que eu possa ter deixado para trás.

### Obs:
O header 
```c

#include <cs50.h>

```
É exclusivo do curso criado pela staff. Ele permite o uso das seguintes funções

```c
string myString = get_string("Enter a string: ");

string myInt = get_int("Enter a int: ");

string myDouble = get_double("Enter a double: ");
```
E assim sucetivamente para os outros tipos.

Em alguns códigos eu preferi a abordagem padrão e substitui pelo seguinte modelo:

```c
char myString;
printf("Enter a String: ");
    scanf("%S", &myString);
```

## Links
[Curso completo na EDX](https://courses.edx.org/courses/course-v1:HarvardX+CS50+X/course/)
