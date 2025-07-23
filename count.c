#include <stdio.h> 
   /* program to count blanks,characters,tabs,newlines */ 
  int main() 
   {  
    int c;
    int nb=0,nc=0,nt=0,nl=0;
       while((c=getchar())!= EOF){
        ++nc;
        if(c=='\n')
        ++nl;
        if(c=='\t')
        ++nt;
        if(c==' ')
        ++nb;
       }
        printf("Number of characters: %d\n",nc);
        printf("Number of blanks: %d\n",nb);
        printf("Number of tabs: %d\n",nt);
        printf("Number of lines: %d\n",nl);
       }
