#include <iostream> //incorpora a tela
#include <locale.h> //importa a biblioteca de linguagens do c++
#include <math.h>   //importa a biblioteca de matem�tica padr�o do c++
#include <conio.h>  //serve para adicionar o input/output ao console.
#include <stdlib.h> //adiciona o comando de limpar a tela.
#include <stddef.h> //adiciona o valor NULL que tem o valor nulo. Equivalente a 0.

using namespace std; //omite o namespace std quando vamos digitar uma fun��o dela.

void adicao(){
    system("CLS");
    int a, b, r, resp;

    cout << "Escolha o primeiro n�mero\n";
    cout << ">: ";
    cin >> a;
    cout << "Escolha o segundo n�mero\n";
    cout << ">: ";
    cin >> b;
    r = a + b;

    cout << "O resultado da adi��o � igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp; //a vari�vel resp serve apenas para que o usu�rio tecle algum valor para retornar ao menu principal.
    system("CLS");
}
void multiplicacao(){
    system("CLS");
    int a, b, r, resp;

    cout << "Escolha o primeiro n�mero\n";
    cout << ">: ";
    cin >> a;
    cout << "Escolha o segundo n�mero\n";
    cout << ">: ";
    cin >> b;
    r = a * b;

    cout << "O resultado da multiplica��o � igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp;
    system("CLS");
}

void divisao(){
    system("CLS");
    int a, b, r, resp;

    cout << "Escolha o primeiro n�mero\n";
    cout << ">: ";
    cin >> a;
    cout << "Escolha o segundo n�mero\n";
    cout << ">: ";
    cin >> b;
    r = a / b;

    cout << "O resultado da divis�o � igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp;
    system("CLS");
}

void subtracao(){
    system("CLS");
    int a, b, r, resp;

    cout << "Escolha o primeiro n�mero\n";
    cout << ">: ";
    cin >> a;
    cout << "Escolha o segundo n�mero\n";
    cout << ">: ";
    cin >> b;
    r = a - b;

    cout << "O resultado da subtra��o � igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp;
    system("CLS");
}

void raizQuadrada(){
    system("CLS");
    int a, resp;
    float r;

    cout << "Escolha o n�mero\n";
    cout << ">: ";
    cin >> a;
    
    r = sqrt(a); //esta fun��o calcula a raiz quadrada de um n�mero, que neste caso � <a>

    cout << "O resultado da raiz quadrada � igual a: " << r << endl;
    cout << "Digite 0 para voltar ao menu inicial.\n";
    cout << ">: ";
    cin >> resp;
    system("CLS");
}

void menuOpcao(){
    int valorEntrada = NULL; //NULL � um valor de inicializa��o da vari�vel que significa VAZIO. � equivalente ao 0.
    
    while (valorEntrada == NULL){  
        cout << "Escolha a op��o desejada: \n";
        cout << "1: Adi��o\n2: Multiplica��o\n3: Divis�o\n4: Subtra��o\n5: Raiz quadrada\n6: Fechar programa\n";
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

            case 6: exit(EXIT_SUCCESS);
            break;

            default:
                cout << "Op��o inv�lida. Tente novamente.";
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