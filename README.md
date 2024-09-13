# Sistema de Cadastro de Usuários

Este projeto é um sistema simples de cadastro de usuários implementado em C. O sistema permite registrar, consultar e deletar informações de usuários com base no CPF.

## Funcionalidades

- **Registrar usuários**: Adiciona informações de um novo usuário (CPF, nome, sobrenome e cargo) a um arquivo.
- **Consultar usuários**: Exibe as informações de um usuário com base no CPF.
- **Deletar usuários**: Remove o arquivo de um usuário com base no CPF.

## Requisitos

- Compilador C (como `gcc`)
- Sistema operacional compatível (Windows, Linux, macOS)

## Compilação e Execução

1. **Clone o repositório**:

   ```bash
   git clone https://github.com/SeuUsuario/SeuRepositorio.git
   cd SeuRepositorio
   ```

2. **Compile o código**:

   ```bash
   gcc -o sistema_cadastro sistema_cadastro.c
   ```

3. **Execute o programa**:

   ```bash
   ./sistema_cadastro
   ```

   Ou, no Windows:

   ```bash
   sistema_cadastro.exe
   ```

## Uso

Após executar o programa, você verá um menu com as seguintes opções:

1. **Registrar nomes**: Digite o CPF e as informações pessoais do usuário (nome, sobrenome, cargo). Estas informações serão salvas em um arquivo com o nome do CPF.
2. **Consultar nomes**: Digite o CPF para visualizar as informações salvas no arquivo correspondente.
3. **Deletar nomes**: Digite o CPF para remover o arquivo correspondente do sistema.
4. **Sair do sistema**: Encerra o programa.

## Exemplo de Saída

```
#### Cartório da EBAC #### 

Escolha a opção desejada do MENU: 

    1 - Registrar nomes 
    2 - Consultar nomes 
    3 - Deletar nomes 
    4 - Sair do sistema

Opção: 1
Digite o CPF a ser cadastrado: 12345678900
Digite o nome a ser cadastrado: João
Digite o sobrenome a ser cadastrado: Silva
Digite o cargo a ser cadastrado: Analista
Registro realizado com sucesso!
Pressione qualquer tecla para continuar . . .
```

## Contribuição

Sinta-se à vontade para contribuir para o projeto. Se você encontrar algum problema ou tiver uma sugestão de melhoria, por favor, abra uma _issue_ ou envie um _pull request_.

