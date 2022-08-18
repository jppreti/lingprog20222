# Linguagem de Programação 2022-2
Repositório da disciplina de Linguagem de Programação da Engenharia Elétrica.

# Ferramentas
Todas as ferramentas listadas abaixo permitem executar códigos escritos em C:
- https://ide.goorm.io/
- https://www.programiz.com/c-programming/online-compiler/
- https://replit.com/languages/c
- https://www.jdoodle.com/c-online-compiler/
- https://www.tutorialspoint.com/compile_c_online.php
- https://www.onlinegdb.com/
- https://leetcode.com/

Como recomendação, a ferramenta Goorm IDE é a mais próxima de um ambiente real para desenvolvimento.

# Compilação
Lembre-se que para compilar faz-se necessário possuir um compilador instalado, como GCC. Para compilação use o comando:

`gcc <arquivo.c> -o <arquivo_executavel>`

# Execução
Para executar tenha certeza que o arquivo é passível de execução:

`chmod +x <arquivo_executavel>`

Para então poder executar o programa:

`./<arquivo_executavel>`

Por exemplo, para compilar e executar o arquivo `OlaMundo.c`:

```shell
gcc OlaMundo.c -o olamundo
chmod +x olamundo
./olamundo
```

Esses comandos devem ser executados no mesmo diretório (pasta) em que o arquivo se encontra.