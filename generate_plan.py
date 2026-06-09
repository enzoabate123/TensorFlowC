import sys

def main():
    with open("TENSORFLOW_C_REWRITE_PLAN.md", "w", encoding="utf-8") as f:
        f.write("# Plano de Refatoração do TensorFlow para C\n\n")
        f.write("Este documento contém um plano detalhado para dividir o gigantesco trabalho de reescrever a base de código do TensorFlow de C++ para C. O trabalho foi dividido entre 80 agentes especializados, cada um focado em uma área específica.\n\n")
        f.write("## Metodologia\n")
        f.write("A base de código do TensorFlow foi dividida em várias categorias. Para cada categoria, foram designados múltiplos agentes. Cada agente receberá um *prompt* específico que deve ser usado para guiar sua tarefa de refatoração, instruindo-os a substituir classes C++ por structs C e funções que operam sobre ponteiros para essas structs.\n\n")

        categories = [
            ("Core Platform & Utilities", "HIGHEST", 10, "Foco na camada base do sistema: strings, logging, manipulação de arquivos, e primitives de sincronização (mutex, threads). A fundação do novo framework."),
            ("Common Definitions & Memory Management", "HIGHEST", 5, "Refatoração de alocadores de memória, tensores base e definições de tipos fundamentais."),
            ("Graph Representation & Parsing", "HIGH", 10, "Tradução de `tensorflow/core/graph`. Estruturas de dados de grafos, parsing de protobufs e otimizadores de grafo de execução."),
            ("Eager Execution Basics", "HIGH", 5, "Conversão do `tensorflow/core/eager`. Execução imediata de operações, que é o padrão do TF2."),
            ("CPU Kernels (Math & Basic)", "HIGH", 10, "Tradução dos kernels de CPU fundamentais (`tensorflow/core/kernels`): operações matemáticas, redução, broadcast."),
            ("CPU Kernels (NN & Control Flow)", "MEDIUM", 10, "Kernels de Neural Networks (Convoluções, Pooling, Ativações) e fluxo de controle (While, If)."),
            ("GPU/TPU Device Integration", "MEDIUM", 5, "Camadas de abstração para dispositivos de hardware acelerado (`StreamExecutor` e integrações do core)."),
            ("Distributed Runtime", "MEDIUM", 10, "Refatoração do `tensorflow/core/distributed_runtime`. RPCs, workers, parameter servers e comunicação gRPC."),
            ("Profiler & Debugger", "LOW", 5, "Tradução das ferramentas de perfilamento de performance e hooks de debugging."),
            ("XLA & Compiler Infrastructure", "LOW", 10, "Conversão da infraestrutura do compilador XLA (Accelerated Linear Algebra).")
        ]

        agent_id = 1
        for cat_name, priority, num_agents, description in categories:
            f.write(f"## Categoria: {cat_name}\n")
            f.write(f"**Prioridade:** {priority} | **Agentes Alocados:** {num_agents}\n")
            f.write(f"**Descrição:** {description}\n\n")

            for i in range(num_agents):
                f.write(f"### Agente {agent_id:02d}: {cat_name} - Submódulo {i+1}\n")
                f.write("**Prioridade:** `" + priority + "`\n\n")
                f.write("**Prompt a ser utilizado pelo agente:**\n")
                f.write("```text\n")
                f.write(f"Você é o Agente {agent_id} responsável por uma parte crítica da refatoração do TensorFlow para a linguagem C pura.\n")
                f.write(f"Sua área de atuação é: {cat_name} (Parte {i+1} de {num_agents}).\n")
                f.write("Objetivo: Refatorar o código C++ existente desta seção para C99/C11 estrito.\n")
                f.write("Instruções rigorosas:\n")
                f.write("1. Não use classes, templates ou herança.\n")
                f.write("2. Substitua métodos de classe por funções que aceitam um ponteiro para a `struct` como primeiro argumento (ex: `Tensor_dim(Tensor* t)`).\n")
                f.write("3. Substitua `std::string` e `std::vector` por buffers C gerenciados manualmente e arrays dinâmicos.\n")
                f.write("4. Certifique-se de tratar vazamentos de memória (memory leaks), substituindo smart pointers (`std::shared_ptr`, `std::unique_ptr`) por uma política clara de quem é o 'dono' do ponteiro e chamadas a `free()` ou custom deallocators.\n")
                f.write("5. Escreva testes unitários básicos em C usando frameworks simples como `Unity` ou assertivas básicas.\n")
                f.write("Por favor, comece a análise do código e prepare seu plano de refatoração para os arquivos deste submódulo.\n")
                f.write("```\n\n")
                agent_id += 1

if __name__ == "__main__":
    main()
