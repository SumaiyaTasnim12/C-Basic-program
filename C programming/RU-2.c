#include<stdio.h>
int main()
{
    char s[100];
    int i=0;
    printf("Input string: ");
    //scanf("%[^\n]",s);
    gets(s);

    while(s[i]!='\0')
    {
        if(s[i]>='A' && s[i]<='Z') s[i]+=32;
         i++;
    }
    puts("Output string: ");
    puts(s);
    return 0;
}
