#include <stdio.h>

// Function to print Geometric Progression
void geometricProgression(int a, int r, int n)
{
    int term = a;

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", term);
        term = term * r;
    }
}

int main()
{
    int a, r, n;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common ratio: ");
    scanf("%d", &r);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Geometric Progression: ");
    geometricProgression(a, r, n);

    return 0;
}
