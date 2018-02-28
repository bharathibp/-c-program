#include <stdio.h>

int main(void) {
	 int i, num=123, p = 0;
   i=1;
   {
      if(num%i==0)
      {
         p++;
      }
   }
   if(p==2)
   {
      printf("yes");
             
   }
   else
   {
      printf("no");
