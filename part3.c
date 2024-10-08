#include <stdio.h>
int Input(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}
void Print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void Right_shift(int arr[], int len)
{
    int temp;
    temp = arr[len - 1];
    for (int i = len - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}
int main()
{
    enum
    {
        BUFFER_SIZE = 12
    };
    int buffer[BUFFER_SIZE];
    Input(buffer, BUFFER_SIZE);
    for (int i = 0; i < 4; i++)
        Right_shift(buffer, BUFFER_SIZE);
    Print(buffer, BUFFER_SIZE);
    return 0;
}