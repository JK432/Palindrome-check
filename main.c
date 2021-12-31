#include <stdio.h>
#include <string.h>
 

void isPalindrome(char str[])
{

    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("It is not a palindrome\n", str);
            return;
        }
    }
    printf("It is a palindrome\n", str);
}

int main()
{
char ch[100];
gets(ch);
    isPalindrome(ch);
    
    return 0;
}



