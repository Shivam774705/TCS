#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++)
    scanf("%d",&a[i]);

    int smallest = a[0];
    int second = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
        second = smallest;
        smallest = a[i];
        }
        else if (a[i] < second && a[i] != smallest)
        second = a[i];
    }
    printf("output: %d",second);

    return 0 ;
}