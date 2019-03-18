//
//  Heap.cpp
//  CS315 - Project 3
//
//  Created by Blake Sweet on 2/21/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//

# include "HashTable.h"

HashTable::HashTable() {
    for (int i = 0; i < TableSize; i++) {
        table[i] = new Node();
    }
}

HashTable::~HashTable() {
    for (int i = 0; i < TableSize; i++) {
        Node *entry = table[i];
        while (entry != NULL) {
            Node *prev = entry;
            entry = entry->getNext();
            delete prev;
        }
        table[i] = NULL;
    }
}

int HashTable::hash(string key) { // Hashing function
    int hash = 0;
    int index;

    for (int i = 0; i < key.length(); i++) {
        hash += (int) key[i];
    }

    index = hash % TableSize;

    return index;
}

void HashTable::insert(string key) {
    int index = hash(key);

    // Inspect bucket of the index
    if (table[index]->getKey() == "") {
        table[index]->setKey(key);
        table[index]->incrementCount();
    } else {
        Node *ptr = table[index];
        Node *newNode = new Node(key);

        // Go to last node stored in the list
        while (ptr->getNext() != NULL) {
            if (ptr->getKey() == key) {
                ptr->incrementCount();
                return;
            }

            ptr = ptr->getNext();
        }
        if (ptr->getKey() == key) {
            ptr->incrementCount();
            return;
        }

        ptr->setNext(newNode); // Add the item to the list
    }
}

int HashTable::NumItemsInIndex(int index) {
    int count = 0;

    if (table[index]->getKey() == "") {
        return count;
    } else {
        count++;
        Node *ptr = table[index];
        while (ptr->getNext() != NULL) {
            count++;
            ptr = ptr->getNext();
        }
    }
    return count;
}

int HashTable::NumItemsInIndex(int index, string key) {
    int count = 0;

    if (table[index]->getKey() == "") {
        return count;
    } else {
        count++;
        Node *ptr = table[index];
        while (ptr->getNext() != NULL) {
            if (ptr->getKey() == key) {
                count++;
            }
            ptr = ptr->getNext();
        }
    }
    return count;
}

void HashTable::printTable() {

    for (int i = 0; i < TableSize; i++) {
        Node *element = table[i];
        while (element != NULL) {

            if (element->getKey() != "") {
                cout << element->getKey() << ' '
                     << element->getCount() << '\n';
            }

            element = element->getNext();
        }
    }
}



/*  ========================================
                Utility Functions
    ======================================== */
// Return the number of overall keys in the table
int HashTable::sizeOf() {
    int answer = 0;

    for (int i = 0; i < TableSize; i++) {
        if (table[i]->getKey() != "") {
            answer += NumItemsInIndex(i); // Count the nodes at the specific index
        }
    }
    return answer;
}

void HashTable::swap(Node **a, Node **b) {
    Node *t = *a;
    *a = *b;
    *b = t;
}

Node *HashTable::largest(Node *root, Node *Node1, Node *Node2) {
    // (0 = same string)   (< 0 = object comes first)  (> 0 = parameter comes first)
    if (root->getKey().compare(Node1->getKey()) < 0) {
        if (root->getKey().compare(Node2->getKey()) < 0) {
            return root; // Root is the largest
        } else {
            return Node2; // Node 2 is the largest
        }
    } else {
        return Node1; // Node 1 is the largest
    }
}


void HashTable::quicksort(bool sortByCount) {
    quickSort(0, TableSize - 1, sortByCount);

}

/*  ========================================
            Sorting Functions
    ======================================== */
/* low  --> Starting index,  high  --> Ending index */
void HashTable::quickSort(int low, int high, bool sortByCount) {
    if (low < high) {
        /* pi is partitioning index, arr[pi] is now
         at right place */
        int PI = partition(low, high, sortByCount);

        quickSort(low, PI - 1, sortByCount);  // Before pi
        quickSort(PI + 1, high, sortByCount); // After pi
    }
}

int HashTable::partition(int low, int high, bool sortByCount) {
    // pivot (Element to be placed at right position)
    Node *pivot = table[high];

    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or
        // equal to pivot
        bool result;
        if (!sortByCount) {
            result = table[j]->getKey() <= pivot->getKey();
        } else {
            result = table[j]->getCount() > pivot->getCount();
        }
        if (result) {
            i++;    // increment index of smaller element
            swap(&table[i], &table[j]);
        }
    }
    swap(&table[i + 1], &table[high]);
    return (i + 1);
}
