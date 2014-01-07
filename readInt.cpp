#include <stdio.h>

int readint()
{
   int cc = getc(stdin);
   for (;cc < '0' || cc > '9';)  cc = getc(stdin); //ignores char stream other than 0-9.
   int ret = 0;
   for (;cc >= '0' && cc <= '9';) // if stream of numbers comes, start taking input
   {
      ret = ret * 10 + cc - '0'; // convert each char to integral digit and extend the final number 
      cc = getc(stdin);          // input continues
   }
  return ret;                   // return final extended number.
}
