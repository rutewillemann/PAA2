# O que é o projeto

É um problema de **busca em um “prédio” representado por uma matriz**, onde cada célula dita como você pode se mover:

* **H**: só pode andar na **mesma linha** (esquerda/direita).
* **V**: só pode andar **entre andares** (cima/baixo).
* **\***: é a **sala da chave** (objetivo).
  Você recebe uma **posição inicial (linha, coluna)** e precisa decidir se é possível chegar até `*` respeitando essas regras. A atividade é em grupo (**mín. 2, máx. 3 pessoas**).&#x20;

# O que o programa deve fazer

1. **Ler a entrada**:

   * Um inteiro `n` (número de andares/linhas).
   * **n linhas** com `H`, `V` e possivelmente `*`. (O enunciado menciona “separados por espaço”, mas os **exemplos mostram sem espaços**; na prática, leia uma linha como string e trate caractere a caractere — assim cobre os dois formatos.)
   * Dois inteiros com a **posição inicial** (linha e coluna), onde linha 0 = térreo.&#x20;

2. **Processar com backtracking recursivo**:

   * A partir da posição inicial, **tente movimentos permitidos pela célula atual** (`H` ⇒ esquerda/direita; `V` ⇒ cima/baixo), sem sair dos limites.
   * **Marque visitados** para evitar ciclos.
   * Se alcançar `*`, sucesso; caso contrário, retroceda (backtrack) e tente outro caminho.
   * Apesar de uma linha do enunciado dizer “programa iterativo”, a **avaliação exige explicitamente uma função recursiva usando backtracking** (isso é obrigatório).&#x20;

3. **Imprimir a saída exatamente**:

   * Se for possível: `Chave encontrada no Edifício João Calvino!`
   * Se não: `Não conseguimos encontrar a chave no Edifício João Calvino.`&#x20;

4. **Testar com os exemplos do enunciado** (há três casos de teste completos de entrada/saída).&#x20;

# O que entregar (além do código)

* **Código em C** (postado no Moodle).
* **Vídeo no YouTube (5–7 min)** explicando o código e mostrando a execução (todos do grupo aparecem).
* **LEIAME.txt** com nomes, RA, turma e **passo a passo para executar**.
* **Data** indicada no PDF: **21/09/2025**.&#x20;

# Como será avaliado (resumo)

* **Carregar dados de um arquivo e validar entrada** (até 1,0 pt).
* **Função recursiva com backtracking implementada** (até 2,5 pt).
* **Funções auxiliares / legibilidade** (até 2,0 pt).
* **Saída em tela** (até 1,5 pt).
* **Clareza do código** (até 1,0 pt).
* **Vídeo** (até 2,0 pt).
  Há também **reduções** (cópia ⇒ zero, não compila ⇒ zero, arquivo faltando ⇒ −2,5, etc.). O PDF também mostra **como compilar/executar no Windows**:
  `gcc -o main.exe *.c *.h` e depois `main.exe`.&#x20;

# Observações importantes do enunciado

* **Backtracking recursivo é obrigatório** (sem isso, o trabalho pode ser considerado tentativa de fraude).&#x20;
* **Participação no vídeo**: ausência reduz nota **individualmente**.&#x20;
* **Inconsistências no PDF**:

  * Cabeçalho fala **grupo de 2 a 3**; a última página menciona **individual ou dupla**.
  * Uma seção fala em “programa iterativo”, mas a **regra de avaliação exige recursão com backtracking**.
    Sugiro seguir o que vale para a nota (**backtracking recursivo**) e confirmar com o professor o **tamanho do grupo** (vou assumir 2–3 como no topo do enunciado).&#x20;
