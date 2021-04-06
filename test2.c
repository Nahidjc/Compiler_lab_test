#include<stdio.h>
#include <string.h>
int main()
{

    char string1[500],string2[500],string3[500],string4[500];
    gets(string1);
    gets(string2);
    gets(string3);
    gets(string4);
    int i,length=0,length2=0,length3=0,length4=0;
    length=strlen(string1);
    length2=strlen(string2);
    length3 = strlen(string3);
    length4 = strlen(string4);

    string1[length]=' ';
    length++;
    for(int j=0; string2[j]!='\0'; j++,length++)
    {

        string1[length]=string2[j];

    }

    string1[length]='\0';
    string1[length]=' ';
    length++;
    for(int k=0; string3[k]!='\0'; k++,length++)
    {

        string1[length]=string3[k];

    }
    string1[length]='\0';
    string1[length]=' ';
    length++;
    for(int l=0; string4[l]!='\0'; l++,length++)
    {

        string1[length]=string4[l];

    }
    string1[length]='\0';
    int length5=0;
    length5 = strlen(string1);

    puts(string1);
    printf("%d",length5);


}
