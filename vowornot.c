#include <stdio.h>
int main()
{  char c;
    int isLowercaseVowel, isUppercaseVowel;

    printf("Enter an alphabet: ");
    scanf("%c",&c);
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c yes", c);
    else
        printf("%c no", c);
    return 0;
}
