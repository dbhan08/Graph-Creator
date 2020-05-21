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



void addEdge(vector<node*> nodes,vector<node*> edges,char* firstLabel, char* secondLabel ,char* label) {
    edge* temp = new edge(label);
    node* first = NULL;
    node* second = NULL;
    bool there = false;
    
    vector<node*>:: iterator i;
    for(i= nodes.begin(); i != nodes.end(); i++) {
        
        
        if(*(*i->getLabel())==*firstLabel) {
            first = *i;
            
        } else if(*(*i->getLabel())==*secondLabel) {
            second = *i;
        }
        
        
    }
    
    if(first != second) {
        vector<edge*>::iterator j;
        for(j=edges.begin(); j != edges.end(); j++) {
            if(*j->getFirst == first && *j->getSecond() == second) {
                there = true;
            }
        }
        
        if(there) {
            cout << "The edge already exists";
        } else if(first != NULL && second != NULL) {
            temp->setFist(first);
            temp->setSecond(second);
            edges.push_back(temp);
            
        } else {
            cout << "Some node or nodes don't exist" << endl;
        }
        
        
    } else {
        cout <<  "Can't have edge between the same nodes" << endl;
        return;
    }
    
    
}

void removeVert() {
    
    
    
}


void removeEdge() {
    
    
}


int main() {
    vector<node*> vertices;
    vector<edge*> edges;
    
    
    
}


