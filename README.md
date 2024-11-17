
# Projeto de Introdução

Estudo sobre C++

## Estrutura do Diretório

```
introduction/
├── *.cpp               # Arquivos de código-fonte
├── bin/                # Binários pré-compilados
├── build.bat           # Script em batch do Windows para compilar todos os arquivos fonte
```

## Descrição dos Arquivos Fonte

- **arithmetic.cpp**: Demonstra operações aritméticas básicas.
- **constKeyword.cpp**: Explora o uso da palavra-chave `const` em C++.
- **func.cpp**: Ilustra a definição e uso de funções.
- **helloworld.cpp**: Um clássico programa "Olá, Mundo!".
- **nameSpace.cpp**: Introduz namespaces em C++.
- **typeConversion.cpp**: Mostra técnicas de conversão de tipos.
- **typedefIn.cpp**: Demonstra o uso de `typedef` para criar alias de tipos de dados.
- **userInput.cpp**: Aceita e processa entrada do usuário.
- **variable.cpp**: Explica declarações e inicializações de variáveis.

## Binários Pré-compilados

O diretório `bin/` contém os executáveis dos arquivos fonte. Eles podem ser executados diretamente em um sistema Windows.

## Como Compilar

### Windows (Usando `build.bat`)

1. Abra um terminal (por exemplo, Prompt de Comando) no diretório `introduction/`.
2. Execute o seguinte comando:
   ```
   build.bat
   ```
   Isso irá compilar todos os arquivos `.cpp` e colocar os executáveis no diretório `bin/`.

### Compilação Manual

Para compilar arquivos individuais, use o seguinte comando:
```
g++ <nome_do_arquivo>.cpp -o bin/<nome_do_arquivo>
```

## Como Executar

1. Navegue até o diretório `bin/`.
2. Execute o executável desejado digitando seu nome, por exemplo:
   ```
   helloworld.exe
   ```

## Requisitos

- Um compilador C++ (por exemplo, GCC, Clang, MSVC).
- Windows (se estiver usando o script em batch fornecido).

## Licença

Este projeto é fornecido "como está" para fins educacionais.
