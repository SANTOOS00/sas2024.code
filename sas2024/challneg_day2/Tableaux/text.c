#include <stdio.h>
int main ()
{
    int tabl[100];
    int taill;
    int pos;

    printf("number n ;");
    scanf("%d",&taill);

    for (int i = 0;taill > i;i++)
    {
        printf("number [%d] ;",i + 1);
        scanf("%d",&tabl[i]);
    }
    printf("number aldi tri suprime :");
    scanf("%d",pos);

    if (pos <= 0 || pos > taill)
    {
        printf("hada ar9m la youjad %d",pos);
    }
    else(pos >= 0 || pos < taill)
    {
        for (int h = pos; h < taill;h++)
        {
            int m = tabl[h + 1];
            tabl[h + 1] = tabl[h];
            tabl[h] = m;
        }
        taill--;
    }
    printf("number ;");
    for (int i = 0;i < taill;i++)
    {
        printf("%d",tabl[i]);
    }
    return (0);
}