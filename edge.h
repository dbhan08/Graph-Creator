#ifndef edge_h
#define edge_h

#include <iostream>
#include "node.h"

using namespace std;


class edge {
    
    edge(char* label);
    ~edge();
    void setFirst(node* first);
    void setSecond(node* second);
    node* getFirst();
    node* getSecond();
    
    int getValue();
    void setValue(int value);
    
    
private:
    node* first;
    node* second;
    int value;
    
    
    
};

#endif