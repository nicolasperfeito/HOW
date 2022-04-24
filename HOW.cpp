#include <iostream>
#include <math.h>
using namespace std;
 
int BinToDecimal (long long);
 
int main() 
{
  long long binNum;
  cout <<"Please enter 8 bit binary number : ";
  cin >> binNum;
   
  long decimalNum = BinToDecimal(binNum);
  cout <<"Decimal Equivalent to Binary number = " << binNum <<" is "<< decimalNum ;
 
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