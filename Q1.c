/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void main(){
    int state=0,i=0;
    char current,input[20];
    printf("Enter input string \t :");
    scanf("%s",input);
    while((current=input[i++])!='\0'){
        switch(state)
        {
            case 0: if(current=='a')
                    state=1;
                    else if(current=='b')
                    state=2;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 1: if(current=='a')
                    state=0;
                    else if(current=='b')
                    state=3;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 2: if(current=='a')
                    state=3;
                    else if(current=='b')
                    state=0;
                    else
                    {
                        printf("Invalid token");
                        exit(0);
                    }
                    break;
            case 3: if(current=='a')
                    state=2;
                    else if(current=='b')
                    state=1;
                    else
                    {
                        printf("Invalid token");
                        
                        exit(0);
                    }
                    break;
        }
    }
    if(state==0)
        printf("\n\nString accepted\n\n");
    else
        printf("\n\nString not accepted\n\n");
}
