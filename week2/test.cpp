#include <iostream>

int main()
{
    int n = 12;
    float **ptr = new float *[n];
    printf("initialized ptr=%d\n", ptr);
    printf("initialized ptr[0]=%d\n", ptr[0]);
    printf("initialized ptr[1]=%d\n", ptr[1]);
    printf("initialized ptr[2]=%d\n", ptr[2]);
    printf("initialized **ptr=%.2f\n", **ptr);
    for (int i = 0; i < n; i++)
    {
        ptr[i] = new float[n];
        for (int j = 0; j < n; j++)
        {
            ptr[i][j] = i * j;
            printf("%2.2f  ", ptr[i][j]);
        }
        printf("\n");
    }
    **ptr = 5.0;
    printf("ptr=%d\n", ptr);
    printf("*ptr=%d\n", *ptr);
    printf("ptr[0]=%d\n", ptr[0]);
    printf("ptr[1]=%d\n", ptr[1]);
    printf("ptr[2]=%d\n", ptr[2]);
    printf("**ptr=%2.2f\n", **ptr);
    for (int l; l < n; l++)
    {
        printf("&ptr[0][%d]=%d\n", l, &ptr[0][l]);
    }
    printf("&ptr[1][0]=%d\n", &ptr[1][0]);
    printf("&*ptr=%d\n", &*ptr);

    // printf("&&**ptr=%d\n", &&**ptr);
    for (int i = 0; i < n; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

    float value = 8.0;

    float *var = &value;
    printf("%d", *var);

    return 0;
}
