//
//  MyClass.cpp
//  PHY250-1
//
//  Created by Andrew Diggs on 1/15/24.
//

#include "MyClass.hpp"

fArray::fArray(){}

fArray::~fArray(){
    if(is_init){
        delete[] m_vals;
    }
}

void fArray::INIT(int num){
    m_num_el = num;
    m_vals = new float[m_num_el];
    is_init = true;
    
    for(int i = 0; i < m_num_el; i++){
        m_vals[i] = i;
    }
}


float* fArray::Get_Vals(){
    return m_vals;
}


int fArray::Get_Num(){
    return m_num_el;
}

void fArray::Print(){
    if(!is_init){
        printf("I am a blank array\n");
        return;
        }
    printf("I am an array with %d floats\n", m_num_el);
    for(int i = 0; i < m_num_el; i++){
        printf("Vals[%d] = %.2f\n",i, m_vals[i]);
    }
}


