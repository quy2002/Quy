#include<stdio.h>
int main()
{
    int i, n, S;
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
    }while(n <= 0);
    i = 1;
    S = 0;
    while(i <= n)
    {
        if(n % i == 0)
        {
            printf("%4d", i);
           S = S + i;
        }
            i++;
    }
    printf("\nTong cac uoc cua %d la: %ld", n, S);
    return 0;
}
