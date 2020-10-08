#include <cstdio>
int arr[10001];

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        arr[num]++;
    }
    for (int i = 0; i < 10001; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}