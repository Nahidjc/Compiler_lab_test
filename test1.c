#include<stdio.h>
#include<stdlib.h>
void checkLineComment(char);
void LineComment();
FILE *fp1, *fp2;

int main(){

char c;
fp1=fopen("inputSrc.txt","r");
fp2=fopen("outputSrc.txt","w");

while((c=fgetc(fp1))!=EOF){
 checkLineComment(c);

}


fclose(fp1);
fclose(fp2);


return 0;
}

void checkLineComment(char c){
char d;

if(c=='#'){
LineComment();
}
else{
    fputc(c,fp2);
}

}
void LineComment(){
char e;
while((e=fgetc(fp1))!=EOF){

  if(e=='\n'){
    return;
  }
}
}
