//Header file to complete function definition
//
#include "bin.h"
//binary_to_decimal function being defined
//
double binary_to_decimal(char* str)
{
  //Variable declration
  //
  char strl = strlen(str);
  //Binary to decimal result
  //
  char  total = 0;
  //Decimal input as 1 for conversion
  //
  char dec = 1;
  //For loop decrementing binary value
  //
  for (int i = (strl - 1); i >= 0; i--)
  {
    //Converting binary input to decimal value
    //
    if (str[i] == '1') total += dec;
    dec *= 2;
  }
  //Returning the computed result
  //
  return total;
}
