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
    char user_str_input[100];

    printf("Enter your Text that you want to crypt : ");
    scanf("%s", user_str_input);
    dec_cry(user_str_input);
    printf("%s", user_str_input);


    return 0;
}
