# Laboratório de Programação I

Este repositório contém programas em C++ desenvolvidos durante um semestre da disciplina Laboratório de Programação I sem o uso de IA generativa. O código foi preservado como registro do processo de aprendizagem, desde pequenos exemplos introdutórios até orientação a objetos, alocação dinâmica de memória, herança e sobrecarga de operadores.

O objetivo não é apresentar uma biblioteca pronta ou um projeto de produção. O repositório documenta exercícios acadêmicos e experimentos escritos durante o estudo da linguagem, por isso os exemplos iniciais são simples e devem ser lidos nesse contexto.

## Conteúdo

- [Unidade III](ud-iii/) - classes, objetos, namespaces, escopo, membros estáticos, funções `inline` e primeiros exemplos de herança.
- [Unidade IV](ud-iv/) - alocação dinâmica, ponteiros brutos, `new`, `delete`, arrays dinâmicos e `std::vector`.
- [Unidade V](ud-v/) - herança, vinculação estática e dinâmica, funções virtuais, classes abstratas, declarações `friend` e exemplos relacionados de POO.
- [Unidade VI](ud-vi/) - sobrecarga de operadores, operadores de atribuição, incremento, conversões de tipo e exemplos baseados em classes.
- [classes](classes/) - exemplos modulares adicionais divididos entre headers, implementações e `main.cpp`.
- [miscellaneous](miscellaneous/) - pequenos exemplos independentes em C++.
- [final-exam](final-exam/) - preparação para exame e exercícios de prova final.

A maioria das pastas contém programas independentes, não uma aplicação única. Alguns exemplos são arquivos `.cpp` isolados; outros estão organizados com um `main.cpp`, um arquivo de cabeçalho e um arquivo de implementação.

## Compilação

Não há sistema de build no repositório. Os exemplos foram verificados com `g++ 15.2.0` usando C++17. Para arquivos independentes, compile um programa por vez:

```bash
g++ -std=c++17 ud-iii/helloworld.cpp -o helloworld
g++ -std=c++17 ud-iv/vector/push-back.cpp -o push-back
```

Para exemplos modulares, compile os arquivos relacionados juntos:

```bash
g++ -std=c++17 classes/complex/main.cpp classes/complex/Complex.cpp -o complex
g++ -std=c++17 ud-vi/complex/main.cpp ud-vi/complex/Complex.cpp -o complex
```

Alguns arquivos são fragmentos demonstrativos ou exercícios incompletos e podem não compilar sozinhos. Os READMEs das unidades registram os principais casos encontrados na revisão.

## Observações

Os programas foram preservados como exercícios acadêmicos. Eles podem conter limitações, uso direto de ponteiros brutos e padrões úteis para aprender tópicos específicos de C++, mas não são apresentados como recomendações modernas.
