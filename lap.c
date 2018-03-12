#include <stdio.h>
#include<string.h>
int main(void) {
int n,i;
char a[100];
printf("enter the string");
scanf("%s",&a);
printf("\nenter value\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
return 0;
}
