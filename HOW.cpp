#include <iostream>
#include <math.h>
using namespace std;
 
int BinToDecimal (long long);
 
int main() 
{
  long long binNum;
  cout <<"Por favor, insira um numero binario com 8 digitos : ";
  cin >> binNum;
   
  long decimalNum = BinToDecimal(binNum);
  cout <<"O equivalente do binario " << binNum <<" em decimal = "<< decimalNum ;
 
  return 0;
}
 
 
int BinToDecimal(long long binNo) 
{
  int decNum = 0;
  int index = 0;
  int remainder;
 
  while (binNo!=0) 
  {
    remainder = binNo % 10;
    binNo /= 10;
    decNum += remainder * pow(2, index);
    ++index;
  }
 
  return decNum;
}