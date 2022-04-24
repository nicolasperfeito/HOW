#include <iostream>
using namespace std;
 
// Função para converter Binário para Decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_valor = 0;
 
    // Valor base de 1, para evitar o valor nulo de 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int ultimodigito = temp % 10;
        temp = temp / 10;
 
        dec_valor += ultimodigito * base;
 
        base = base * 2;
    }
 
    return dec_valor;
}
 
// Função de teste da função acima
// Inserir o valor desejado para conversão na variável num abaixo
int main()
{
    int num = 00000101;
 
    cout << binaryToDecimal(num) << endl;
}