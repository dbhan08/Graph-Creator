#include <iostream>

#include "edge.h"
#include <vector>


using namespace std;

void addVertex(vector<node*> nodes, char* label) {
    
    node* temp = new node(label);
    bool there = false;
    vector<node*>:: iterator i;
    for(i=nodes.begin(); i !+ nodes.end(); v++) {
        if(*(*i->getLabel()) == *label) {
            there = true;
        }
    }
    if(!there) {
        nodes.push_back(temp);
    } else {
        temp = NULL
        delete temp;
    }
    
    
}



void addEdge(vector<node*> nodes, char* label) {
    
    
    
}

void removeVert() {
    
    
    
}


void removeEdge() {
    
    
}


int main() {
    vector<node*> vertices;
    vector<edge*> edges;
    
    
    
}


