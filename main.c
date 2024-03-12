#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* cry(char *chaine);
int main()
{
	char chaine[]="hamza hossani";
	char *ptr=cry(chaine);
    printf("%s\n",ptr);

    return 0;
}

char* cry(char *chaine){
char* ptr=chaine;
while(*ptr!='\0'){
		if(*ptr!=' '){
				*ptr=*ptr+3;
		}
	ptr++;
}
return chaine;
}
