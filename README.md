# Desafio – Super Trunfo (Nível Novato)

## 🎯 Propósito

Criar a base de um jogo **Super Trunfo de Países**, cadastrando e exibindo informações de **duas cartas**. Esse desafio treina leitura de dados do usuário, armazenamento em variáveis e exibição formatada.

---

## 📌 O que implementar

Um programa em **C** que:

1. Solicite ao usuário os dados de **duas cartas**.
2. Armazene os valores em **variáveis apropriadas**.
3. Exiba os dados cadastrados de forma organizada e clara.

---

## 🗂️ Estrutura de cada carta

Cada carta deve conter:

- **Estado:** letra de 'A' a 'H' → `char`
- **Código da Carta:** Estado + número 01–04 (ex: A01, B03) → `char[]` (string)
- **Nome da Cidade:** texto → `char[]` (string)
- **População:** número inteiro → `int`
- **Área:** em km² → `float`
- **PIB:** valor monetário → `float`
- **Nº de Pontos Turísticos:** inteiro → `int`

---

## 🖥️ Exemplo de saída esperada

```
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30

```

---

## ✅ Requisitos

### Funcionais

- Ler corretamente os dados de **duas cartas** via teclado.
- Armazenar em variáveis adequadas.
- Exibir os dados formatados e organizados.

### Não funcionais

- **Usabilidade:** mensagens claras para o usuário.
- **Legibilidade:** código bem indentado e comentado.
- **Corretude:** programa sem erros de compilação/execução.

### Simplificações

- Somente **duas cartas**.
- Sem lógica de comparação.
- Não usar **laços (`for`, `while`)** nem **condições (`if`, `else`)**.
