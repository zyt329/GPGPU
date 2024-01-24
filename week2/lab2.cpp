#include "lab2.hpp"

// the compiler will use default constructor if not defined
fArray::fArray() {}

// delete the object
fArray::~fArray()
{
    if (is_init)
    {
        delete[] m_vals;
    }
}

void fArray::INIT(int n)
{
    m_len = n;

    // after declaring a pointer,
    // one still need to allocate memory for it!
    // bc declaring pointer only allocates memory to store the pointer variable
    // but doesn't allocate memory for the variable the pointer points to
    m_vals = new float[n];
    for (int i = 0; i < n; i++)
    {
        m_vals[i] = i;
    }
    bool is_init = true;
}

float *fArray::Get_Vals()
{
    return m_vals;
}

int fArray::Get_Len()
{
    return m_len;
}

void fArray::print()
{
    for (int i = 0; i < m_len; i++)
    {
        printf("%.2f  ", m_vals[i]);
    }
}

int main()
{
    fArray arr;
    float *arr_vals = arr.Get_Vals();
    printf("%d %.2f \n", arr.Get_Len(), arr_vals[0]);
    printf("initializing: \n");
    arr.INIT(10);
    arr_vals = arr.Get_Vals();
    printf("%d %.2f \n", arr.Get_Len(), arr_vals[0]);
    arr.print();
}