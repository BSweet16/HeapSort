//
//  main.cpp
//  CS315 - Project 3
//
//  Created by Blake Sweet on 2/21/19.
//  Copyright © 2019 Blake Sweet. All rights reserved.
//

/*
    Purpose: Warn authors if they use a word too much
    Given: A text document, case is significant.
            Ignore spacing and punctuation
    Output: All words, and the number of times they appear
            (One word per line and no duplicates)
            Ex) example 1
                the 18
                they 2
            (1) First output - Sorted by word (Alphabetical order)
            (2) Second output - Sorted by number of occurances
                                (Reverse numerical, ties in any order)
 
 Requirements:  Use a hash table to store the counts.
                You may use any hash function and any collision-resolution scheme you wish
                You must write your own sorting algorithm to sort the output and your own hash table routines. (NO LIBRARY ROUTINES FOR SORTING OR HASHING)
                    (NO SELECTION SORT OR INSERTION SORT)
                    (FULL CREDIT FOR HEAP SORT OR QUICKSORT)
                    (No other sorting method)
 
 */

#include <iostream>
#include <fstream>
#include "HashTable.h"

using namespace std;

string filterData(string UnfilteredString) {
    string newString = "";

    for (int i = 0; i < UnfilteredString.length(); i++) {
        if (UnfilteredString[i] != '!' && UnfilteredString[i] != '?' && UnfilteredString[i] != '&' &&
            UnfilteredString[i] != ',' && UnfilteredString[i] != ';' && UnfilteredString[i] != '-' &&
            UnfilteredString[i] != '.' && UnfilteredString[i] != '"' && UnfilteredString[i] != '\'' &&
            UnfilteredString[i] != ' ' && UnfilteredString[i] != '\t') {
            newString += UnfilteredString[i];
        }
    }

    return newString;
}

int main() {
    // Local Variables
    char choice;
    string filepath;
    fstream file;
    HashTable hashObj;
    string data; // Used to handle data in the file while reading

    // Accept the text file from standard input
    do {
        cout << "Read from default data.txt?\n" << "Enter y or n:";
        cin >> choice;
        while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
            cout << "Please enter 'y' or 'n': ";
            cin >> choice;
        }

        if (choice == 'y' || choice == 'Y') {
            filepath = "data.txt";
        } else {
            cout << "Input filepath: ";
            cin >> filepath;
            cout << '\n';
        }
    } while (filepath == "");

    // Read in data
    file.open(filepath);
    if (!file) {
        cout << "Error: Unable to open file.\n";
    } else {
        while (!file.eof()) {
            file >> data;
            data = filterData(data);
            //cout << data << " "; // Used for DEBUGGING

            // Add Keys to table
            hashObj.insert(data);
        }
        cout << '\n' << '\n';
    }
    file.close();

    /* Output sorted (alphabetically) */
    // Sort the list alphabetically
    hashObj.quicksort(false);
    hashObj.printTable();

    // Single blank line between lists
    cout << '\n';

    // Output sorted by number of occurance
    hashObj.quicksort(true);
    hashObj.printTable();



    cout << "\n";
    system("pause");
    return 0;
}
