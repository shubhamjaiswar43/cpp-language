#include <iostream>
using namespace std;
int main()

{
    int m=5,n=5;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= m; i++)
    {
        for (int k = n; k > i; k--)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 1; i <= m; i++)
    {
        for (int k = 1; k < i; k++)
        {
            printf(" ");
        }

        for (int j = n; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}