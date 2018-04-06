#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N%2==0)
    {
        if(N>=2&&N<5)
        {
            if(N>=6&&N<=20){
                printf("Weird");
                }
        }
        else
            printf("Not Weird");
    }
    else
        printf("Weird");
    return 0;
}
