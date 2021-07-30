/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Implementation of Language recognizer for a set of all strings ending with two symbols of the same type.
*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int state = 0, i = 0;
    char token, input[20];
    printf("Enter input string \t :");
    scanf("%s", input);
    //printf("Given string is : %s");

    while ((token = input[i++]) != '\0')
    {
        // printf("current token : %c \n",token);
        switch (state)
        {
        case 0:
            if (token == 'a')
                state = 1;
            else if (token == 'b')
                state = 2;
            else
            {
                printf("Invalid token");
                exit(0);
            }
            break;
        case 1:
            if (token == 'a')
                state = 3;
            else if (token == 'b')
                state = 2;
            else
            {
                printf("Invalid token");
                exit(0);
            }

            break;
        case 2:
            if (token == 'a')
                state = 1;
            else if (token == 'b')
                state = 4;
            else
            {
                printf("Invalid token");
                exit(0);
            }
            break;
        case 3:
            if (token == 'a')
                state = 3;
            else if (token == 'b')
                state = 2;
            else
            {
                printf("Invalid token");
                exit(0);
            }
            break;
        case 4:
            if (token == 'a')
                state = 1;
            else if (token == 'b')
                state = 4;
            else
            {
                printf("Invalid token");
                exit(0);
            }
            break;
        }
        // printf("state = %d  ",state);
    }
    if (state == 3 || state == 4)
        printf("\n\nString accepted\n\n");
    else
        printf("\n\nString not accepted\n\n");
}
