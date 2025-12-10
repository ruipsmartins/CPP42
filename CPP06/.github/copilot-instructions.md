# Copilot / Assistente: Instruções rápidas para este repositório

Este ficheiro destina-se a guiar agentes de código (Copilot, GPT, etc.) para serem produtivos rapidamente neste repositório `CPP06` da Escola 42.

- **Língua:** responder em português de Portugal.
- **Contexto:** exercício `ex00` — converter literais escalares. O `main` chama `ScalarConverter::convert` (ver `ex00/main.cpp`).
- **Estrutura:** cada classe tem `hpp` + `cpp`; usar header guards. Ex.: `ex00/ScalarConverter.hpp` / `ScalarConverter.cpp` — utilitário com métodos `static` e construtor privado.

- **Regras de compilação:** usar **C++98** e flags `-Wall -Wextra -Werror -std=c++98` (definidas em `ex00/Makefile`). Evitar STL, `printf`, `malloc`, `free` e funcionalidades C++11+.

- **Comandos principais:**

```bash
cd ex00
make          # compila o executável `ex00`
./ex00 <lit>   # executa com um literal
make valgrind  # executa valgrind (alvo definido no Makefile)
```

- **Padrões e exemplos no código:**
  - Método estático: `ScalarConverter::convert(const std::string &)` (ver `ex00/ScalarConverter.hpp`/`.cpp`).
  - Classe não-instanciável: construtor privado + métodos estáticos (padrão usado aqui).
  - Objetos compilados em `objs/` (ver `Makefile` — alvo `objs/%.o`).

- **Quando alterar código:**
  - Fazer commits pequenos; explicar em poucas frases o porquê das mudanças.
  - Manter compatibilidade com as regras da 42 (C++98 e flags de compilação).

- **Integrações / dependências:** projeto local; não há serviços externos nem bibliotecas de terceiros.

- **Preferências de modelo:** ativar "Enable Claude Haiku 4.5 for all clients" (ver `AGENTS.md`).

Se algo aqui conflitar com instruções diretas do utilizador, seguir primeiro o pedido do utilizador.
