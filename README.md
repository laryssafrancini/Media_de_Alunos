🎓 Calculadora de Média de Alunos em C

Este projeto é um programa em C que realiza o cálculo da média de alunos, organiza a classificação por desempenho e gera um arquivo com os resultados.

⚙️ Funcionalidades

📥 Entrada de dados dos alunos: nome, média da disciplina 1 e disciplina 2

🧮 Cálculo da média geral de cada aluno

📊 Ordenação dos alunos por média geral (do maior para o menor)

🏅 Atribuição de classificação (ranking da turma)

📝 Geração de um arquivo classificacao_alunos.txt contendo:

Nome

Médias individuais

Média geral

Posição na classificação

🎯 Cálculo da média geral da turma

🛠️ Tecnologias Utilizadas

Linguagem C

Structs para organizar os dados dos alunos

Funções para modularização (calcularMediaGeral e compararMedias)

qsort() para ordenação eficiente dos alunos

Manipulação de arquivos (fopen, fprintf, fclose)

▶️ Como executar

Compile o programa:

gcc media_alunos.c -o media_alunos


Execute no terminal:

./media_alunos


Informe a quantidade de alunos e os dados solicitados.

O resultado será gerado no arquivo classificacao_alunos.txt no mesmo diretório do programa.

📂 Exemplo de Saída no Arquivo
Nome do Aluno: Laryssa
Média Disciplina 1: 8.50
Média Disciplina 2: 9.00
Média Geral: 8.75
Classificação: 1

Nome do Aluno: João
Média Disciplina 1: 7.00
Média Disciplina 2: 6.50
Média Geral: 6.75
Classificação: 2

Média Geral da Turma: 7.75

🔀 Fluxo do Programa
flowchart TD


    A[📥 Início] --> B[👩‍🎓 Ler número de alunos]
    B --> C[✍️ Inserir nome e médias das disciplinas]
    C --> D[🧮 Calcular média geral de cada aluno]
    D --> E[📊 Ordenar alunos por média geral (qsort)]
    E --> F[🏅 Atribuir classificação]
    F --> G[📝 Gravar dados no arquivo classificacao_alunos.txt]
    G --> H[📈 Calcular média geral da turma]
    H --> I[✅ Fim - Arquivo gerado com sucesso]


 🎯 Objetivo do Projeto

Este código foi desenvolvido para treinar conceitos essenciais da linguagem C, como:

Uso de structs

Manipulação de strings e arrays

Laços de repetição

Ordenação de dados com qsort

Entrada e saída (console e arquivos)

Um exercício prático que simula o gerenciamento de notas e classificação de uma turma.
