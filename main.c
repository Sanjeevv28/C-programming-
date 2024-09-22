/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    printf("Enter Ascii value: ");
    scanf("%d",&i);
    if(i>=65 && i<=90){
    for(i;i>=65;i--){
        printf("%c\n",i);
    }
    }
    else if(i>=97 && i<=122){
        for(i;i>=97;i--){
            printf("%c\n",i);
        }
    }

    return 0;
}

