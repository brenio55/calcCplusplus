#include <iostream> //incorpora a tela
#include <locale.h> //importa a biblioteca de linguagens do c++
#include <math.h>   //importa a biblioteca de matemática padrão do c++
#include <conio.h>  //serve para adicionar o input/output ao console.
#include <stdlib.h> //adiciona o comando de limpar a tela.
#include <stddef.h> //adiciona o valor NULL que tem o valor nulo. Equivalente a 0.

using namespace std; //omite o namespace std quando vamos digitar uma função dela.

void adicao(){
    system("CLS");
    int a, b, r, resp;

    cout << "Escolha o primeiro número\n";
    cout << ">: ";
    cin >> a;
    cout << "Escolha o segundo número\n";
    cout << ">: ";
    cin >> b;
    r = a + b;

    cout << "O resultado da adição é igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp; //a variável resp serve apenas para que o usuário tecle algum valor para retornar ao menu principal.
    system("CLS");
}
void multiplicacao(){
    system("CLS");
    int a, b, r, resp;

    cout << "Escolha o primeiro número\n";
    cout << ">: ";
    cin >> a;
    cout << "Escolha o segundo número\n";
    cout << ">: ";
    cin >> b;
    r = a * b;

    cout << "O resultado da multiplicação é igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp;
    system("CLS");
}

void divisao(){
    system("CLS");
    int a, b, r, resp;

    cout << "Escolha o primeiro número\n";
    cout << ">: ";
    cin >> a;
    cout << "Escolha o segundo número\n";
    cout << ">: ";
    cin >> b;
    r = a / b;

    cout << "O resultado da divisão é igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp;
    system("CLS");
}

void subtracao(){
    system("CLS");
    int a, b, r, resp;

    cout << "Escolha o primeiro número\n";
    cout << ">: ";
    cin >> a;
    cout << "Escolha o segundo número\n";
    cout << ">: ";
    cin >> b;
    r = a - b;

    cout << "O resultado da subtração é igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp;
    system("CLS");
}

void raizQuadrada(){
    system("CLS");
    int a, resp;
    float r;

    cout << "Escolha o número\n";
    cout << ">: ";
    cin >> a;
    
    r = sqrt(a); //esta função calcula a raiz quadrada de um número, que neste caso é <a>

    cout << "O resultado da raiz quadrada é igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp;
    system("CLS");
}

void media5(){
    system("CLS");
    int number[4];
    int r, resp;

    cout << "Escolha o primeiro número\n";
    cout << ">: ";
    cin >> number[0];
    cout << "Escolha o segundo número\n";
    cout << ">: ";
    cin >> number[1];
    cout << "Escolha o terceiro número\n";
    cout << ">: ";
    cin >> number[2];
    cout << "Escolha o quarto número\n";
    cout << ">: ";
    cin >> number[3];
    cout << "Escolha o quinto número\n";
    cout << ">: ";
    cin >> number[4];
    
    r = (number[0] + number[1] + number[2] + number[3] + number[4]) / 5;

    cout << "O resultado da média entre os 5 números digitados é igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp;
    system("CLS");
}

void menuOpcao(){
    int valorEntrada = NULL; //NULL é um valor de inicialização da variável que significa VAZIO. É equivalente ao 0.
    
    while (valorEntrada == NULL){  
        cout << "Escolha a opção desejada: \n";
        cout << "1: Adição\n2: Multiplicação\n3: Divisão\n4: Subtração\n5: Raiz quadrada\n6: Média entre 5 números\n7: Sair do programa\n";
        cout << ">: ";
        cin >> valorEntrada;

        switch (valorEntrada) {
            case 1: adicao();
                    valorEntrada = NULL;
            break;

            case 2: multiplicacao();
                    valorEntrada = NULL;
            break;

            case 3: divisao();
                    valorEntrada = NULL;
            break;

            case 4: subtracao();
                    valorEntrada = NULL;
            break;

            case 5: raizQuadrada();
                    valorEntrada = NULL;
            break;

            case 6: media5();
                    valorEntrada = NULL;
            break;

            case 7: exit(EXIT_SUCCESS);
            break;

            default:
                cout << "Opção inválida. Tente novamente.";
                cin; 
                system("CLS");
                valorEntrada = NULL;
        }
    }
}

int main (){
    setlocale (LC_ALL,"portuguese");
    menuOpcao();
}