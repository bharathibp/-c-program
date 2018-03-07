#include <stdio.h>

int main(void) {
	int len=0,x,one;
int no;
char *ones[] = {"", "Zero", "One", "Two", "Three", "Four","Five", "Six", "Seven", "Eight", "Nine"};
printf("Enter a number:");
scanf("%d",&no);
x = no;
while(no!=0){
no = no/10;
len++;
}
if(len==1){
printf("Number in words is: %s",ones[x+1]);
}

	return 0;
}
