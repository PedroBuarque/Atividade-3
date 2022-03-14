# Atividade-3

O programa pega o menor o maior e tira a média dos números 

Ele cria 4 threads na main:

Uma que é a propria inicialização do processo e outras três que serão relacionadas a média, máximo e mínimo. Ele roda todas em paralelo(já que são threads). A primeira é uma thread criada para média a segunda para máximo e a terceira para mínimo. Utilizando dos recursos da biblioteca Pthread, realizando ao mesmo tempo, quase que sincrono todos esses calculos colocando o resultado na tela

sobre as funções:

A pthread_create cria uma thread, porém não a executa
A pthread_join ele inicializa e coloca em fila as execuções
