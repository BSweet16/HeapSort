//
//  Node.h
//  CS315 - Project 3
//
//  Created by Blake Sweet on 2/21/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//
# include <stdio.h>
# include <string>

using namespace std;

class Node {
public:
    // Constructors & Destructors
    Node();

    Node(string key);

    // Get & Set
    string getKey();

    int getValue();

    Node *getNext();

    void setKey(string newKey);

    void setNext(Node *newNode);

    void incrementCount() {
        count++;
    }

    int getCount() const;

//
//    friend bool operator<(const Node &lhs, const Node &rhs);
//
//    friend bool operator<=(const Node &lhs, const Node &rhs);

private:
    string key;
    int count;
    Node *next;
};

//
//bool operator<(const Node &lhs, const Node &rhs) {
//    if (lhs.key < rhs.key)
//        return true;
//    if (rhs.key < lhs.key)
//        return false;
//    return lhs.next < rhs.next;
//}
//
//
