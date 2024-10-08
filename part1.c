#include <stdio.h>
const int input_amount = 5;
int main()
{
    int m[input_amount];
    for (int i = 0; i < input_amount; i++)
        scanf("%d", &m[i]);
    int sum = 0;
    for (int i = 0; i < input_amount; i++)
        sum += m[i];
    printf("%.3f", (float)sum / input_amount);
    return 0;
}