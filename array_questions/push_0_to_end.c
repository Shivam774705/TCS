#include <stdio.h>
int main()
{
    int n,j = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
        a[i] = 0;

    for(int i = 0; i < n; i++)
    {   int x; 
        scanf("%d", &x);
        if(x != 0)
        {a[j] = x;
        j++;
        }
    }
    printf("output:");
    for (int i = 0; i < n; i++)
        printf(" %d ", a[i]);
    
    return 0 ;
}