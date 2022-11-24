/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,t;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum += arr[j];
            if(t==sum){
                printf("%d %d",i,j);
            }
        }
    }
    return 0;
}
