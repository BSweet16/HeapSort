//
//  Node.cpp
//  CS315 - Project 3
//
//  Created by Blake Sweet on 2/21/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//

# include "Node.h"

Node::Node(){
    key = "";
    next = NULL;
    count = 0;
}

Node::Node(string key){
    key = key;
    next = NULL;
    count = 1;
}

string Node::getKey(){
    if (key != ""){
        return key;
    }
    else
        return "";
}

Node* Node::getNext(){
    return next;
}

void Node::setKey(string newKey){
    key = newKey;
}

void Node::setNext(Node* newNode){
    next = newNode;
}

int Node::getCount() const {
    return count;
}
