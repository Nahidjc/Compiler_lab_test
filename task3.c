#include<stdio.h>
int main()
{
    char string1[200]="public static void main(String []args)";
    char string2[500]="int a=b*c";
    char string3[500]="result=first+second/third";
    char *fp1;

    fp1=strtok(string1," ([])");
    printf("%s\n",fp1);

    while(fp1!='\0')
    {
        fp1=strtok('\0'," ([])");
         printf("%s\n",fp1);
    }

     char *sec;
    sec=strtok(string2," =*");
    printf("%s\n",sec);

    while(sec!='\0')
    {
        sec=strtok('\0'," =*");
         printf("%s\n",sec);
    }

     char *word;
    word=strtok(string3," =+/");
    printf("%s\n",word);

    while(word!='\0')
    {
        word=strtok('\0'," =+/");
         printf("%s\n",word);
    }

}
