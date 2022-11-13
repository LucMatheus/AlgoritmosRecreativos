algoritmo "calculadora"
// Função : Servir como uma calculadora
// Autor : Lucas Matheus Cardoso da Costa
// Data : 13/11/2022

// Variáveis globais
var programLoop:logico
opcaoDoMenu:inteiro
numero1,numero2,resultado:real
// Constantes
C_ADICAO,C_DIVISAO,C_SUBTRACAO,C_MULTIPLICACAO,C_SAIR:inteiro

// Funções

// Preparando variáveis de controle
procedimento init()
inicio
      programLoop := VERDADEIRO
      opcaoDoMenu := 0
      
      // Constantes
      C_MULTIPLICACAO := 1
      C_DIVISAO := 2
      C_ADICAO := 3
      C_SUBTRACAO := 4
      C_SAIR := 5
fimProcedimento

// Módulo - Menu de Apresentação
funcao apresentarMenu():inteiro
var opcao:inteiro
inicio
      // Apresentação do Menu
      escreval("=================== CALCULADORA ==================")
      escreval("  ")
      escreval(" Tutorial - digite a opção desejada e aperte ENTER")
      escreval(" (1) - Multiplicar  ")
      escreval(" (2) - Dividir      ")
      escreval(" (3) - Adição       ")
      escreval(" (4) - Subtrair     ")
      escreval(" (5) - Fechar o programa")
      escreval("==================================================")
      escreva("Qual a sua opcao? : ")
      leia(opcao)
      retorne opcao
fimFuncao

// Função - Multiplicação
funcao multiplicar(numero1,numero2:real):real
var resultado:real
inicio
      resultado := numero1 * numero2
      retorne resultado
fimFuncao


// Função - Dividir
funcao dividir(numero1,numero2:real):real
var resultado:real
inicio
      resultado := numero1 / numero2
      retorne resultado
fimFuncao

// Função - Adição
funcao adicionar(numero1,numero2:real):real
var resultado:real
inicio
      resultado := numero1 + numero2
      retorne resultado
fimFuncao

// Função - Subtração
funcao subtricionar(numero1,numero2:real):real
var resultado:real
inicio
      resultado := numero1 - numero2
      retorne resultado
fimFuncao

// Procedimento - Mostrando o resultado
procedimento mostrarOResultado(resultado:real)
inicio
      escreval("Resultado = ",resultado)
fimprocedimento

// Função - Fechar o Programa
procedimento encerrar()
inicio
      escreval("Obrigado por utilizar o programa, encerrando...")
      escreval("By: Lucas Matheus C. Costa")
      programLoop := FALSO
fimProcedimento

inicio
      init()

      repita
            // Menu de apresentação
            opcaoDoMenu := apresentarMenu()
            
            // Entrada de dados (se for calculadora)
            se (opcaoDoMenu < C_SAIR) entao
               escreva("Qual o 1º número : ")
               leia(numero1)
               
               escreva("Qual o 2º numero : ")
               leia(numero2)
            fimSe
            
            // Efetuar o calco da operacao
            escolha opcaoDoMenu
                    caso C_MULTIPLICACAO
                         resultado := multiplicar(numero1,numero2)
                         mostrarOResultado(resultado)
                    caso C_DIVISAO
                         resultado := dividir(numero1,numero2)
                         mostrarOResultado(resultado)
                    caso C_ADICAO
                         resultado := adicionar(numero1,numero2)
                         mostrarOResultado(resultado)
                    caso C_SUBTRACAO
                         resultado := subtricionar(numero1,numero2)
                         mostrarOResultado(resultado)
                    caso C_SAIR
                         encerrar()
                    outrocaso
                         escreval("OPÇÃO INVÁLIDA")
            fimescolha
      ate programLoop = FALSO
fimalgoritmo
