*Este projeto foi criado como parte do currículo da 42 por edmedeir.*



# ft_printf

Uma reimplementação da função `printf()` da libc como biblioteca estática em C, com suporte a funções variádicas.


## Descrição

O **ft_printf** recria o comportamento central do `printf()` padrão usando `<stdarg.h>` para lidar com número variável de argumentos. O projeto é compilado como `libftprintf.a` e pode ser integrado à libft para uso nos projetos futuros da 42.

O foco está em código bem estruturado e extensível — a chave para um ft_printf bem-sucedido é justamente essa organização.

## Especificadores suportados

```
%c   caractere único
%s   string (convenção C padrão)
%p   ponteiro void * em hexadecimal
%d   inteiro decimal (base 10)
%i   inteiro em base 10
%u   inteiro sem sinal (base 10)
%x   hexadecimal minúsculo (base 16)
%X   hexadecimal maiúsculo (base 16)
%%   imprime o caractere '%'
```

## Uso

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Nome: %s | Idade: %d\n", "Eduardo", 21);
    ft_printf("Endereço: %p\n", ptr);
    ft_printf("Hex: %x | %X\n", 255, 255);
    return (0);
}
```

`ft_printf` retorna o número de caracteres escritos, assim como o `printf` original.

## Algoritmo e estrutura

A função principal recorre o `format` caractere por caractere. Ao encontrar `%`, delega o processamento para um dispatcher (`disc_specifier`) que identifica o especificador e chama a função responsável por aquele tipo.

Cada especificador tem sua própria função (`specifier_c`, `specifier_s`, `specifier_p`, etc.), que recebe a `va_list` e retorna a quantidade de bytes escritos. O total acumulado dessas contagens é o valor retornado pelo `ft_printf`.

As funções auxiliares de saída (`ft_putunsigned_fd`, `ft_putpointer_fd`, `ft_puthex_fd`, `ft_puthex_upper_fd`) foram escritas separadamente para manter cada função dentro do limite da Norminette e facilitar reuso.

Essa separação por especificador torna o código extensível: adicionar um novo tipo exige apenas uma nova função e uma entrada no dispatcher, sem alterar o núcleo da lógica.

## Instruções

### Compilação

```bash
git clone <url-do-repositorio>
cd ft_printf
make
```

Gera `libftprintf.a` na raiz do repositório.

### Regras do Makefile

```
make          compila a biblioteca
make clean    remove os arquivos .o
make fclean   remove os .o e o libftprintf.a
make re       fclean + make
```

### Integrando em outro projeto

```c
#include "ft_printf.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o programa
```

> A libft está incluída em `includes/libft/` e é compilada automaticamente pelo Makefile do projeto.

## Recursos

- [man 3 printf — Linux man pages](https://man7.org/linux/man-pages/man3/printf.3.html)
- [man 3 stdarg — va_list, va_start, va_arg, va_end](https://man7.org/linux/man-pages/man3/stdarg.3.html)
- [printf format string — Wikipedia](https://en.wikipedia.org/wiki/Printf_format_string)
- [Variadic functions in C — cppreference](https://en.cppreference.com/w/c/variadic)

### Uso de IA

A IA (Claude) foi utilizada pontualmente como suporte, não como fonte de respostas diretas:

- **Dúvidas conceituais**: comportamento de `va_list` e como o `printf` original trata ponteiros nulos em `%s`, sem solicitar implementações.
- **Revisão de raciocínio**: validação do entendimento sobre contagem de bytes retornada pela função.

As implementações foram desenvolvidas de forma independente, com base nas man pages e nos testes contra o `printf` original.