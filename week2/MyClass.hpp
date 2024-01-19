//
//  MyClass.hpp
//  PHY250-1
//
//  Created by Andrew Diggs on 1/15/24.
//

#ifndef MyClass_hpp
#define MyClass_hpp

#include <stdio.h>

class fArray{

private:
    int m_num_el = 0;
    float* m_vals = NULL;
    bool is_init = false;
public:
    fArray();
    ~fArray();
    
    void INIT(int num);
    float* Get_Vals();
    int Get_Num();
    
    void Print();
    
};




#endif /* MyClass_hpp */
