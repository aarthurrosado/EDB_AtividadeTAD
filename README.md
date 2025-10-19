# Estruturas de Dados - IMD0029
# Autor: Arthur Luiz Rosado Alves
# Professor: João Guilherme

Repositório para a **Atividade 02 | Unidade II** .

1 - Descrição dos métodos implementados. 

2 - Print do terminal ao executar os testes sobre os métodos implementados. 

3 - Cada grupo deve enviar apenas um relatório. 

---

##  Sumário
1. [Compilação e Testes](#c1)  
2. [Métodos Implementados](#c2)  
3. [Estrutura do Repositório](#c3)  
4. [Link do Repositório](#c4)  

---

# <a name="c1"></a>1. Compilação e Testes

## Via powershell - TadConjunto

``` g++ -std=c++11 ArraySet.cpp main.cpp -o testSet.exe ```

Execute: ``` .\testSet.exe ```

<img src="test.conjunto.png" alt="Execução dos testes">

## Via PowerShell - TadSequence

``` g++ -std=c++11 ListSequence.cpp TestSequence.cpp -o testSequence.exe ```

Execute: ``` testSequence.exe ```

<img src="teste.sequence.png" alt="Execução dos testes">

# <a name="c2"></a>2. Métodos Implementados

## TadConjunto

Classe que representa um conjunto de **strings únicas** armazenadas em um **vetor estático**.

| Método | Descrição |
|--------|------------|
| `add(string s)` | Adiciona um novo elemento se ele ainda não estiver contido no conjunto. Retorna `true` se foi adicionado, `false` se já existe. |
| `remove(string s)` | Remove o elemento informado, se existir. Retorna `true` se a remoção foi bem-sucedida. |
| `contains(string s)` | Verifica se o elemento informado está presente no conjunto. |
| `isEmpty()` | Retorna `true` se o conjunto estiver vazio. |
| `size()` | Retorna a quantidade atual de elementos armazenados. |
| `clear()` | Remove todos os elementos, zerando o conjunto. |

## TadSequence

Classe que representa uma **lista encadeada de strings**, com operações de inserção, remoção e acesso a elementos.

| Método | Descrição |
|--------|------------|
| `insertBegin(string element)` | Insere um novo elemento no **início** da sequência. |
| `insertEnd(string element)` | Insere um novo elemento no **final** da sequência. |
| `insert(int i, string element)` | Insere o elemento na posição `i` (1-indexado). Se `i` for menor ou igual a 1, insere no início. |
| `removeBegin()` | Remove o **primeiro** elemento da sequência e o retorna. |
| `removeEnd()` | Remove o **último** elemento da sequência e o retorna. |
| `remove(int i)` | Remove o elemento da posição `i` e o retorna. |
| `get(int i)` | Retorna o valor armazenado na posição `i`. |
| `isEmpty()` | Retorna `true` se a sequência estiver vazia. |
| `getQuantity()` | Retorna a quantidade total de elementos. |
| `print()` | Exibe todos os elementos na ordem atual. |

# <a name="c3"></a>3. Estrutura do Repositório
```
EDB_Atividade_TAD/
├── TAD_Conjunto/                 # Implementação Tad Conjunto
│   ├── Set.hpp                   # Arquivo de cabeçalho da classe Set
│   ├── ArraySet.cpp              # Implementação metodos Tad Conjunto
│   ├── main.cpp                  # Testes Tad Conjunto
│
├── TAD_Sequencia/                # Implementação Tad Sequencia
│   ├── Node.h                    # Estrutura Node
│   ├── Sequence.h                # Arquivo de cabeçalho da classe Sequence
│   ├── ListSequence.cpp          # Implementação metodos Tad Sequencia
│   ├── TestSequence.cpp          # Teste Tad Sequencia
│
├── README_TADs.md                # Relatório simplificado com descrição dos métodos
```
teste.sequence.png # print Tad Sequence

test.conjunto.png # print Tad Conjunto

# <a name="c4"></a>4. Link Repositorio

https://github.com/aarthurrosado/EDB_AtividadeTAD
