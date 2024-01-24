
// this is include guard to prevent multiple definitions
#ifndef lab2_hpp
#define lab2_hpp

#include <stdio.h>

class fArray
{
private:
    // store length
    int m_len;
    // store values
    float *m_vals;
    // is it initiated?
    bool is_init;

public:
    fArray();
    ~fArray();

    // this is for? how does this differ from constructors?
    void INIT(int n);
    // get values of the array
    float *Get_Vals();
    // get length of the array
    int Get_Len();

    // print the array
    void print();
};

#endif /* lab2_hpp */