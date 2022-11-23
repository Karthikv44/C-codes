/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    while(n>0){
        if(n & 1 == 1){
            c++;
        }
        n = n>>1;
    }
    printf("%d",c);
    return 0;
}
