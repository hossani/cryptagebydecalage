#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char get_The_letter(char *str){



    for(int i = 0; i< strlen(str); i++){
        if(str[i]== '\0'){
            break;
        }

        printf("letter : %c\n", str[i]);

        //crypt_str(str[i]);
    }

}

int main()
{
    char user_str_input[100];

    printf("Enter your Text that you want to crypt : ");
    scanf("%s", user_str_input);
    get_The_letter(user_str_input);


    return 0;
}
