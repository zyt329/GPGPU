#include <iostream>

// Function prototype
void print_mtrx(int n, int m);

int main()
{
    print_mtrx(2, 3);
}

// we try to dynamically allocate memory for an m*n array here
// the memory needs to be freed by hand to prevent memory leak

// see _____ for a pictorial explanation

void print_mtrx(int n, int m)
{
    // Arrays are represented by double pointers
    // initialize a pointer to an array of pointers (column starts)
    // the array of pointers points to arrays of floats
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