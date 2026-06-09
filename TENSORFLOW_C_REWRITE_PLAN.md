# Plano de Refatoração do TensorFlow para C

Este documento contém um plano detalhado para dividir o gigantesco trabalho de reescrever a base de código do TensorFlow de C++ para C. O trabalho foi dividido entre 80 agentes especializados, cada um focado em uma área específica.

## Metodologia
A base de código do TensorFlow foi dividida em várias categorias. Para cada categoria, foram designados múltiplos agentes. Cada agente receberá um *prompt* específico que deve ser usado para guiar sua tarefa de refatoração, instruindo-os a substituir classes C++ por structs C e funções que operam sobre ponteiros para essas structs.

## Categoria: Core Platform & Utilities
**Prioridade:** HIGHEST | **Agentes Alocados:** 10
**Descrição:** Foco na camada base do sistema: strings, logging, manipulação de arquivos, e primitives de sincronização (mutex, threads). A fundação do novo framework.

### Agente 01: Core Platform & Utilities - Submódulo 1
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 1 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 1 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 02: Core Platform & Utilities - Submódulo 2
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 2 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 2 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 03: Core Platform & Utilities - Submódulo 3
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 3 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 3 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 04: Core Platform & Utilities - Submódulo 4
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 4 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 4 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 05: Core Platform & Utilities - Submódulo 5
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 5 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 5 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 06: Core Platform & Utilities - Submódulo 6
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 6 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 6 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 07: Core Platform & Utilities - Submódulo 7
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 7 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 7 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 08: Core Platform & Utilities - Submódulo 8
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 8 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 8 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 09: Core Platform & Utilities - Submódulo 9
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 9 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 9 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 10: Core Platform & Utilities - Submódulo 10
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 10 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Core Platform & Utilities (Parte 10 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

## Categoria: Common Definitions & Memory Management
**Prioridade:** HIGHEST | **Agentes Alocados:** 5
**Descrição:** Refatoração de alocadores de memória, tensores base e definições de tipos fundamentais.

### Agente 11: Common Definitions & Memory Management - Submódulo 1
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 11 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Common Definitions & Memory Management (Parte 1 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 12: Common Definitions & Memory Management - Submódulo 2
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 12 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Common Definitions & Memory Management (Parte 2 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 13: Common Definitions & Memory Management - Submódulo 3
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 13 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Common Definitions & Memory Management (Parte 3 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 14: Common Definitions & Memory Management - Submódulo 4
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 14 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Common Definitions & Memory Management (Parte 4 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 15: Common Definitions & Memory Management - Submódulo 5
**Prioridade:** `HIGHEST`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 15 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Common Definitions & Memory Management (Parte 5 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

## Categoria: Graph Representation & Parsing
**Prioridade:** HIGH | **Agentes Alocados:** 10
**Descrição:** Tradução de `tensorflow/core/graph`. Estruturas de dados de grafos, parsing de protobufs e otimizadores de grafo de execução.

### Agente 16: Graph Representation & Parsing - Submódulo 1
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 16 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 1 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 17: Graph Representation & Parsing - Submódulo 2
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 17 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 2 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 18: Graph Representation & Parsing - Submódulo 3
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 18 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 3 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 19: Graph Representation & Parsing - Submódulo 4
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 19 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 4 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 20: Graph Representation & Parsing - Submódulo 5
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 20 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 5 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 21: Graph Representation & Parsing - Submódulo 6
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 21 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 6 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 22: Graph Representation & Parsing - Submódulo 7
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 22 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 7 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 23: Graph Representation & Parsing - Submódulo 8
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 23 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 8 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 24: Graph Representation & Parsing - Submódulo 9
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 24 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 9 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 25: Graph Representation & Parsing - Submódulo 10
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 25 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Graph Representation & Parsing (Parte 10 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

## Categoria: Eager Execution Basics
**Prioridade:** HIGH | **Agentes Alocados:** 5
**Descrição:** Conversão do `tensorflow/core/eager`. Execução imediata de operações, que é o padrão do TF2.

### Agente 26: Eager Execution Basics - Submódulo 1
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 26 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Eager Execution Basics (Parte 1 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 27: Eager Execution Basics - Submódulo 2
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 27 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Eager Execution Basics (Parte 2 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 28: Eager Execution Basics - Submódulo 3
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 28 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Eager Execution Basics (Parte 3 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 29: Eager Execution Basics - Submódulo 4
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 29 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Eager Execution Basics (Parte 4 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 30: Eager Execution Basics - Submódulo 5
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 30 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Eager Execution Basics (Parte 5 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

## Categoria: CPU Kernels (Math & Basic)
**Prioridade:** HIGH | **Agentes Alocados:** 10
**Descrição:** Tradução dos kernels de CPU fundamentais (`tensorflow/core/kernels`): operações matemáticas, redução, broadcast.

### Agente 31: CPU Kernels (Math & Basic) - Submódulo 1
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 31 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 1 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 32: CPU Kernels (Math & Basic) - Submódulo 2
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 32 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 2 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 33: CPU Kernels (Math & Basic) - Submódulo 3
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 33 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 3 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 34: CPU Kernels (Math & Basic) - Submódulo 4
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 34 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 4 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 35: CPU Kernels (Math & Basic) - Submódulo 5
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 35 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 5 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 36: CPU Kernels (Math & Basic) - Submódulo 6
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 36 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 6 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 37: CPU Kernels (Math & Basic) - Submódulo 7
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 37 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 7 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 38: CPU Kernels (Math & Basic) - Submódulo 8
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 38 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 8 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 39: CPU Kernels (Math & Basic) - Submódulo 9
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 39 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 9 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 40: CPU Kernels (Math & Basic) - Submódulo 10
**Prioridade:** `HIGH`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 40 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (Math & Basic) (Parte 10 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

## Categoria: CPU Kernels (NN & Control Flow)
**Prioridade:** MEDIUM | **Agentes Alocados:** 10
**Descrição:** Kernels de Neural Networks (Convoluções, Pooling, Ativações) e fluxo de controle (While, If).

### Agente 41: CPU Kernels (NN & Control Flow) - Submódulo 1
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 41 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 1 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 42: CPU Kernels (NN & Control Flow) - Submódulo 2
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 42 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 2 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 43: CPU Kernels (NN & Control Flow) - Submódulo 3
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 43 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 3 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 44: CPU Kernels (NN & Control Flow) - Submódulo 4
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 44 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 4 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 45: CPU Kernels (NN & Control Flow) - Submódulo 5
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 45 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 5 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 46: CPU Kernels (NN & Control Flow) - Submódulo 6
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 46 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 6 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 47: CPU Kernels (NN & Control Flow) - Submódulo 7
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 47 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 7 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 48: CPU Kernels (NN & Control Flow) - Submódulo 8
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 48 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 8 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 49: CPU Kernels (NN & Control Flow) - Submódulo 9
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 49 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 9 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 50: CPU Kernels (NN & Control Flow) - Submódulo 10
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 50 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: CPU Kernels (NN & Control Flow) (Parte 10 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

## Categoria: GPU/TPU Device Integration
**Prioridade:** MEDIUM | **Agentes Alocados:** 5
**Descrição:** Camadas de abstração para dispositivos de hardware acelerado (`StreamExecutor` e integrações do core).

### Agente 51: GPU/TPU Device Integration - Submódulo 1
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 51 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: GPU/TPU Device Integration (Parte 1 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 52: GPU/TPU Device Integration - Submódulo 2
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 52 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: GPU/TPU Device Integration (Parte 2 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 53: GPU/TPU Device Integration - Submódulo 3
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 53 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: GPU/TPU Device Integration (Parte 3 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 54: GPU/TPU Device Integration - Submódulo 4
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 54 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: GPU/TPU Device Integration (Parte 4 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 55: GPU/TPU Device Integration - Submódulo 5
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 55 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: GPU/TPU Device Integration (Parte 5 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

## Categoria: Distributed Runtime
**Prioridade:** MEDIUM | **Agentes Alocados:** 10
**Descrição:** Refatoração do `tensorflow/core/distributed_runtime`. RPCs, workers, parameter servers e comunicação gRPC.

### Agente 56: Distributed Runtime - Submódulo 1
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 56 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 1 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 57: Distributed Runtime - Submódulo 2
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 57 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 2 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 58: Distributed Runtime - Submódulo 3
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 58 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 3 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 59: Distributed Runtime - Submódulo 4
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 59 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 4 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 60: Distributed Runtime - Submódulo 5
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 60 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 5 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 61: Distributed Runtime - Submódulo 6
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 61 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 6 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 62: Distributed Runtime - Submódulo 7
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 62 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 7 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 63: Distributed Runtime - Submódulo 8
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 63 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 8 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 64: Distributed Runtime - Submódulo 9
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 64 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 9 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 65: Distributed Runtime - Submódulo 10
**Prioridade:** `MEDIUM`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 65 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Distributed Runtime (Parte 10 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

## Categoria: Profiler & Debugger
**Prioridade:** LOW | **Agentes Alocados:** 5
**Descrição:** Tradução das ferramentas de perfilamento de performance e hooks de debugging.

### Agente 66: Profiler & Debugger - Submódulo 1
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 66 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Profiler & Debugger (Parte 1 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 67: Profiler & Debugger - Submódulo 2
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 67 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Profiler & Debugger (Parte 2 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 68: Profiler & Debugger - Submódulo 3
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 68 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Profiler & Debugger (Parte 3 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 69: Profiler & Debugger - Submódulo 4
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 69 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Profiler & Debugger (Parte 4 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 70: Profiler & Debugger - Submódulo 5
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 70 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: Profiler & Debugger (Parte 5 de 5).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

## Categoria: XLA & Compiler Infrastructure
**Prioridade:** LOW | **Agentes Alocados:** 10
**Descrição:** Conversão da infraestrutura do compilador XLA (Accelerated Linear Algebra).

### Agente 71: XLA & Compiler Infrastructure - Submódulo 1
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 71 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 1 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 72: XLA & Compiler Infrastructure - Submódulo 2
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 72 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 2 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 73: XLA & Compiler Infrastructure - Submódulo 3
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 73 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 3 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 74: XLA & Compiler Infrastructure - Submódulo 4
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 74 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 4 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 75: XLA & Compiler Infrastructure - Submódulo 5
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 75 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 5 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 76: XLA & Compiler Infrastructure - Submódulo 6
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 76 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 6 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 77: XLA & Compiler Infrastructure - Submódulo 7
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 77 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 7 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 78: XLA & Compiler Infrastructure - Submódulo 8
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 78 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 8 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 79: XLA & Compiler Infrastructure - Submódulo 9
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 79 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 9 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```

### Agente 80: XLA & Compiler Infrastructure - Submódulo 10
**Prioridade:** `LOW`

**Prompt a ser utilizado pelo agente:**
```text
Você é o Agente 80 responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.
Sua área de atuação é: XLA & Compiler Infrastructure (Parte 10 de 10).
Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.
Instruções rigorosas:
1. Não use classes, templates ou herança.
2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).
3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.
4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.
5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.
Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.
```
