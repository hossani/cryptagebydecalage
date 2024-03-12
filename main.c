#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* cry(char *chaine)
{
    char* ptr = chaine;
    while(*ptr!='\0')
    {
        if(*ptr!=' ')
        {
            *ptr=*ptr+3;
        }
        ptr++;
    }
    return chaine ;
}

char* dec_cry(char *chaine)
{
    char* ptr = chaine;
    while(*ptr!='\0')
    {
        if(*ptr!=' ')
        {
            *ptr=*ptr-3;
        }
        ptr++;
    }
    return chaine ;
}



int main()
{

    do
    {
        char user_str_input[100];
        char question;
        char *pt;
        printf("\nClick on c for encryption otherwise on d for decryption c/d:\t");
        scanf(" %c",&question);
        printf("\nEnter your Text that you want to crypt : ");
        scanf("%s", user_str_input);
        if(question=='c')
        {
            pt=cry(user_str_input);
            printf("%s\n", pt);
        }
        if(question == 'd')
        {
            pt=dec_cry(user_str_input);
            printf("%s\n", pt);
        }
    }
    while(1);

    return 0;
}
