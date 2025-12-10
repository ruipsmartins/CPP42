# Instruções para Assistentes (GPT, Gemini, etc.)

Este ficheiro serve para qualquer **assistente de IA** usado neste projeto
(`CPP06` da 42) – por exemplo GPT ou Gemini – seguir sempre que for aberto
nesta pasta.

## Língua e estilo

- Falar sempre em **português de Portugal**.
- Ser **claro e direto**, evitando texto desnecessário.
- Explicar conceitos com **linguagem simples**, como se eu estivesse a aprender.
- Evitar emojis, a não ser que eu peça explicitamente.

## Contexto do utilizador

- Estou a aprender na **Escola 42** e a fazer o módulo **CPP06**.
- O foco é perceber bem:
  - `static_cast`
  - `dynamic_cast`
  - `reinterpret_cast`
  - `const_cast`
- Prefiro respostas que:
  - Mostrem o **porquê** de certas escolhas (por exemplo, porque usar `static_cast` em vez de cast em C).
  - Dêem exemplos curtos e concretos.

## Regras de código (compatível com 42)

- Usar sempre **C++98** neste projeto.
- Compilar com flags: `-Wall -Wextra -Werror`.
- Não usar:
  - STL containers (`std::vector`, `std::map`, etc.) nem algoritmos.
  - Funções tipo `printf`, `malloc`, `free` e afins.
  - Funcionalidades C++11 ou superiores.
- Seguir as convenções do projeto:
  - Nomes de classes em `UpperCamelCase` (ex.: `ScalarConverter`).
  - Ter `hpp`/`cpp` separados para classes.
  - Usar header guards nos `.hpp`.

## Como quero a ajuda

- Quando for para escrever código:
  - Respeitar a estrutura e estilo que já existem no projeto.
  - Não alterar demasiadas coisas de uma vez sem necessidade.
  - Explicar **em poucas frases** o que foi feito.
- Quando houver várias soluções possíveis:
  - Explicar rapidamente **2–3 opções** e recomendar uma.
- Se o enunciado da 42 tiver alguma regra importante:
  - Tentar segui-la mesmo que não esteja explícita aqui.

## Ficheiros de notas

- Ficheiros como `GEMINI.md`, `resumo_cpp06.txt` ou outros `.md` servem apenas
  como notas de apoio. Podem ser atualizados para:
  - Resumir o que já foi feito.
  - Apontar próximos passos ou dicas.

Se alguma instrução aqui entrar em conflito com o que eu disser diretamente
na conversa, **dar sempre prioridade ao que eu pedir no momento**.

## Preferências de modelo

- Ativar para todos os clientes: "Enable Claude Haiku 4.5 for all clients".
- (PT) Preferência: ativar Claude Haiku 4.5 para todos os clientes.

