//
//  Heap.h
//  CS315 - Project 3
//
//  Created by Blake Sweet on 2/21/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//
# include <stdio.h>
# include <iostream>
# include "Node.h"

using namespace std;

const int TableSize = 500;     // TableSize = number of words in the document (A.K.A. Buckets)

class HashTable {
public:
    HashTable();
    ~HashTable();

    int hash(string key);       // Returns the remaining hashed string if key is divided by hash table size
    void insert(string key);    // Place the value at the "end" of the tree then sift up
    int NumItemsInIndex(int index);
    void printTable();

    // Utility Functions
    int sizeOf();
    void swap(Node **a, Node **b);
    Node *largest(Node *root, Node *Node1, Node *Node2);    // Return the largest node between options

    // Sorting Functions
    void quicksort(bool sortByCount);
    void quickSort(int low, int high, bool sortByCount);
    int partition(int low, int high, bool sortByCount);
    int NumItemsInIndex(int index, string key);

private:
    Node *table[TableSize];                    // Store the tree in an array
};
