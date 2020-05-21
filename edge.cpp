#include "edge.h"

#include <iostream>

using namespace std;



edge::edge(char* label) {
    
    value = atoi(label);
    first = NULL;
    second = NULL;
    
    
    
}


edge::~edge() {
    
    
    first = NULL;
    second = NULL;
    delete value;
}



void edge::setFirst(node* newFirst) {
    first = newFirst;
}



void edge::setSecond(node* newSecond) {
    second = newSecond;
}

node* edge::getFirst() {
    return first;
}


node* edge::getFirst() {
    return second;
}




void edge::setValue(int newValue) {
    value = newValue;
}



int edge::getValue() {
    return valuel
}