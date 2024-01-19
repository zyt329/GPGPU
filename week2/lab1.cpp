#include <iostream>

// Function prototype
float **init_arr(int n, int m);
void del_arr(float **arr, int n, int m);

int main()
{
    int m = 2;
    int n = 3;
    float **arr = init_arr(m, n);
    del_arr(arr, m, n);
}

float **init_arr(int n, int m)
{
    printf("initializing:\n");
    float **arr = new float *[n];
    for (int i = 0; i < n; i++)
    {
        // initialize an array of floats
        arr[i] = new float[m];
        for (int j = 0; j < m; j++)
        {
            // fill in the values
            arr[i][j] = i * j;

            // print to check the matrix
            printf("%.2f  ", arr[i][j]);
        }
        printf("\n");
    }

    return arr;
}

void del_arr(float **arr, int n, int m)
{
    // delete and free up space
    // note that delete acts on the pointer to the array
    // the length of the array is figured out by the compiler
    for (int i = 0; i < n; i++)
    {
        // delete every column
        delete[] arr[i];
    }
    delete[] arr;
}