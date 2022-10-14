#include <stdio.h>
int m;
int n;
void printMax(int store[m])
{
    for (int i = 0; i < m; i++)
    {
        printf("\nRowwise maximum element is :: %d", store[i]);
    }
}
int rowMax(int x, int a[m][n])
{
    int i, j, max = 0, store[m];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
        store[i] = max;
        max = 0;
    }
    printMax(store);
}
int insertElement(int a[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element at a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
int main()
{
    int x;
    printf("\nEnter the size of row :: ");
    scanf("%d", &m);
    printf("\nEnter the size of column :: ");
    scanf("%d", &n);
    int a[m][n];
    x = insertElement(a);
    rowMax(x, a);
}