//Header file
//
#include "bin.h"
//Binary to decimal function call
//
double binary_to_decimal(char* str);
//Start of program
//
int main(int argc, char** argv)
{
  //Error message if there are not enough command line arguments
  //
  if(argc<2){
printf("Not enough arguments\n");
 return 0;
  }
  //Variable dec being declared as argv[1]
  //
   char* dec = argv[1];
  //Printing argv[1] before conversion
  //
  printf("input binary number: %s\n", argv[1]);
  //Printing the result of argv[1] after the conversion
  //
  printf("output decimal number: %lf\n" ,dec, binary_to_decimal(dec));
  //Exit gracefully
  //
  return 0;
}
