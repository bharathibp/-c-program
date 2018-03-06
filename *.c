#include <stdio.h>
int main(void) {
	char a[10];
	printf("enter the a");
	scanf("%s",&a);
	a[2]='*';
	printf("\n%s",a);
	return 0;
}
