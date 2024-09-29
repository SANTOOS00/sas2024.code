#include <stdio.h>
int main()
{
    for (int i = 0;i < 6;i++)
    {
        for(int j= i+1;j < 6;j++)
        {
            printf("i= %d,j = %d",i,j);
        }
        printf("= i =%d,j= %d",i,j);
    }
    return (0);
}