#include <iostream>

#include "edge.h"
#include <vector>


using namespace std;

void addVertex(vector<node*> nodes, char* label) {
    
    node* temp = new node(label);
    bool there = false;
    vector<node*>:: iterator i;
    for(i=nodes.begin(); i != nodes.end(); i++) {
        if(*((*i)->getLabel()) == *label) {
            there = true;
        }
    }
    if(!there) {
        nodes.push_back(temp);
    } else {
        temp = NULL;
        delete temp;
    }
    
    
}



void addEdge(vector<node*> nodes,vector<edge*> edges,char* firstLabel, char* secondLabel ,char* label) {
    edge* temp = new edge(label);
    node* first = NULL;
    node* second = NULL;
    bool there = false;
    
    vector<node*>:: iterator i;
    for(i= nodes.begin(); i != nodes.end(); i++) {
        
        
        if(*((*i)->getLabel())==*firstLabel) {
            first = *i;
            
        } else if(*((*i)->getLabel())==*secondLabel) {
            second = *i;
        }
        
        
    }
    
    if(first != second) {
        vector<edge*>::iterator j;
        for(j=edges.begin(); j != edges.end(); j++) {
            if((*j)->getFirst() == first && (*j)->getSecond() == second) {
                there = true;
            }
        }
        
        if(there) {
            cout << "The edge already exists";
        } else if(first != NULL && second != NULL) {
            temp->setFirst(first);
            temp->setSecond(second);
            edges.push_back(temp);
            
        } else {
            cout << "Some node or nodes don't exist" << endl;
            first = NULL;
            second = NULL;
            temp = NULL;
            delete first;
            delete second;
            delete temp;
        }
        
        
    } else {
        cout <<  "Can't have edge between the same nodes" << endl;
        
        return;
    }
    
    
}


void removeEdge(vector<node*> nodes,vector<edge*> edges,char *firstLabel, char *secondLabel) {
    node* first = NULL;
    node* second = NULL;
    bool exist = false;
    if(edges.empty()) {
        cout << "There are no edges!" << endl;
        return;
    }
    
    vector<node*>:: iterator i;
    for(i= nodes.begin(); i != nodes.end(); i++) {
        
        
        if(*((*i)->getLabel())==*firstLabel) {
            first = *i;
            
        } else if(*((*i)->getLabel())==*secondLabel) {
            second = *i;
        }
        
        
    }

    if(first != second) {
        
        
        vector<edge*>::iterator j;
        for(j=edges.begin(); j != edges.end(); j++) {
            if(((*j)->getFirst() == first && (*j)->getSecond() == second) || ((*j)->getFirst() == second && (*j)->getSecond() == first)) {
                exist = true;
                edges.erase(j);
                first = NULL;
                second = NULL;
                delete first;
                delete second;
               
            }
        }
        if(!exist) {
            cout << "Some node does not exist!" << endl;
        }
        
    } else {
        
        cout << "They are the same two nodes" << endl;
        
    }
    
   

    
    
    
}

void removeVert(vector<node*> nodes,vector<edge*> edges,char* label) {
    bool there = false;
    bool hasEdge = false;
    if(nodes.empty()) {
        cout << "No nodes!" << endl;
        return;
    }
    vector<node*>::iterator i;
    vector<edge*>:: iterator k;
    for(i=nodes.begin(); i != nodes.end(); i++) {
        if(*((*i)->getLabel()) == *label) {
            there = true;
            for(k=edges.begin(); k!= edges.end(); k++) {
                if((*k)->getFirst() == *i || (*k)->getSecond() == *i) {
                    hasEdge = true;
                    break;
                }
            }
        }
        if(hasEdge && there) {
            removeEdge(nodes,edges,(*k) -> getFirst() -> getLabel(), (*k) -> getSecond() -> getLabel());
            nodes.erase(i);
        } else if(there && !hasEdge) {
            nodes.erase(i);
        } else{
            cout << "Couldn't find node" << endl;
        }
    }
    
    
    
}
                        





int main() {
    vector<node*> vertices;
    vector<edge*> edges;
    
    
    
}


