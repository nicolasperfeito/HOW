#include <iostream>
using namespace std;

void DecimalToBinary(int n) 
{
   int numBinario[100], num=n;
   int i = 0;
   while (n > 0) {
      numBinario[i] = n % 2;
      n = n / 2;
      i++;
   }
   cout<<"Forma binaria de "<<num<<" eh: ";
   for (int j = i - 1; j >= 0; j--)
      cout << numBinario[j];
   cout<<endl;
}


int BinaryToDecimal(int n) 
{
    int num = n;
    int dec_valor = 0;
    // Valor base de 1, para evitar o valor nulo de 2^0
    int base = 1;
 
    int temp = num;
    while (temp) 
    {
        int ultimodigito = temp % 10;
        temp = temp / 10;
        dec_valor += ultimodigito * base;
        base = base * 2;
    }
   cout<<"Forma decimal de "<<n<<" eh: "<<dec_valor<<endl;;
}


int main() 
{
    DecimalToBinary(23);
    BinaryToDecimal(10111);
    return 0;
}

/* int main()
{
    int valor, n;
    bool executa = true;

    while (executa)
    {
        cout << "**** Conversor de Bases ****" << endl;
        cout << "Informe uma das opcoes para realizar a conversao que deseja: " << endl;
        cout << "1 - Decimal para Binario" << endl;
        cout << "2 - Binario para Decimal" << endl;
        cout << "0 - Para sair" << endl;

        //Aqui faça a leitura do valor digitado
        cin >> valor;

    }
        if (valor == 0)       //Se o valor digitado por 0 então encerra o loop
            {
            executa = false;
            cout << "Adeus!";
            exit;
            }

        if (valor == 1)
            {
            cout << "Converter Decimal para Binario" << endl;
            cout << " Digite o Decimal: " << endl; 
            cin >> n;
            DecimalToBinary(n);
            cout << endl << "Digite um número para continuar" << endl;
            cin >> valor;
            }
    
        if (valor == 2)
            {
            cout << "Converter Binario para Decimal" << endl;
            cout << " Digite o Binario: " << endl;
            cin >> n;
            BinaryToDecimal(n);
            cout << endl << "Digite um número para continuar" << endl;
            cin >> valor;
            }
    else
        {
            cout << "Digite um valor válido!";
        }
} */
