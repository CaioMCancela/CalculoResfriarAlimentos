# Cálculo de Resfriamento de Alimentos

Este projeto tem como objetivo calcular o tempo necessário para o resfriamento de alimentos, utilizando a Lei de Resfriamento de Newton. A fórmula geral para calcular o resfriamento de alimentos é expressa da seguinte forma:
A fórmula utilizada é a seguinte:

![imagem formula](https://i.ibb.co/wc1wPpy/image-5719cc57-014c-45eb-bcc5-922ee202201a.png)

### Onde:
- **ΔT** é a diferença de temperatura entre o alimento e o ambiente em um determinado momento (geralmente em graus Celsius).
- **T0** é a temperatura inicial do alimento (em graus Celsius).
- **TA** é a temperatura ambiente (em graus Celsius).
- **k** é a constante de resfriamento do alimento (depende das propriedades do alimento e do ambiente).
- **t** é o tempo decorrido (em minutos).

Essa fórmula descreve como a temperatura de um alimento diminui ao longo do tempo enquanto está resfriando em um ambiente com uma temperatura ambiente constante. A constante **k** é específica para o alimento em questão e o método de resfriamento utilizado.

## Objetivo

Desenvolver um programa de computador ou uma planilha eletrônica que retorne o valor do tempo necessário para o resfriamento de alimentos, considerando os seguintes parâmetros de entrada:

1. **Valor da variação de temperatura (ΔT)**, em graus Celsius.
2. **Valor da temperatura ambiente (TA)**, em graus Celsius.
3. **Valor da temperatura inicial (T0)**, em graus Celsius.
4. **Valor da constante (k)**, específica para cada alimento.

## Resultados Esperados

O programa deve retornar, em módulo, o tempo necessário para atingir a diferença de temperatura (ΔT) informada pelo usuário.

1. Insira os valores solicitados para ΔT, TA, T0 e k.
2. O programa calculará o tempo necessário para o resfriamento do alimento.
3. O resultado será exibido na tela.
