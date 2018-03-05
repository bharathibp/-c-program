#include <stdio.h>
int main(void) {
	char a[100];
	int n,i,count=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==a[n-i-1])
		{
			count++;
		}
	}
	if(n==count)
	{
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
