#include <iostream>
#include <vector>
//to use find
#include <bits/stdc++.h>

using namespace std;

void printVectorClassical(vector<int> &vectorToBePrinted)
{
    cout<<"Printing the vector entries by using the array-style indexing!" <<endl;
    for (int i=0; i<vectorToBePrinted.size(); i++)
    {
        cout<<vectorToBePrinted[i]<<endl; //index the vecotr by using the classical array-style indexing
    }
}

// print the entries of the input vector
// by using the seconde approach - based on iterators
void printVectorIterators(vector<int> &vectorToBePrinted)
{
    vector<int>::iterator vectorIterator;
    cout<<"Printing the vector entries by using vector iterators!" <<endl;
    for (vectorIterator=vectorToBePrinted.begin(); vectorIterator != vectorToBePrinted.end (); vectorIterator++)
    {
        cout<< *vectorIterator<<endl; // use the dereferencing operator to print the current data of the iterator
    }
    //use the .begin() to return an iterator that points to the first element of our vector
    //use the .end() to return an iterator located immediately after the last element in the vector
}

int main()
{

    //declarations
    //declaring vectors
    vector<int> vector1;
    //declaring a vector container of integer type of size  5
    vector<int> vector2(5); // creates a vector with five entries and fill in the entries with zeros
    //declare a vector container of integer type of size 6, and initialize the entries to 2
    vector<int> vector3(6,2); // 6 entries with each entry will be equal to 2

    //add 15, 20, 2, -1, -10, -5, 25 to the vector
    vector1.push_back(15);
    vector1.push_back(20);
    vector1.push_back(2);
    vector1.push_back(-1);
    vector1.push_back(-10);
    vector1.push_back(-5);
    vector1.push_back(25);

    //information about vectors
    // cout<<"vector1 size is: "<<vector1.size()<<endl;

    // //resize the vector
    // vector2.resize(10); //change the size of the vector; if the size is smaller than the original size, the vector will remove the entries at the end of the vector; else new entries will be added to the end of the vector.
    // cout<<"vector2 size is: "<<vector2.size()<<endl;
    // printVectorIterators(vector2);

    // //resize with a specific number set to be copied at the empty spots
    // int numberToCopy=2;
    // vector2.resize(20,numberToCopy);
    // printVectorIterators(vector2);

    //two ways for printing vectors
    // printVectorClassical(vector1);
    // printVectorIterators(vector1);
    
    //accesing and printing the entries individually
    // cout<<"first element: " << vector1[0]<<endl; //indexing starts from 0 similarly to the indexing of arrays
    // cout<<"second element: " << vector1.at(1)<<endl;
    // cout<<"first element: " << vector1.front()<<endl;
    // cout<<"last element: " << vector1.back()<<endl;s

    // //remove the last entry
    // printVectorIterators(vector1);
    // cout<<"Removing last two entries"<<endl;
    // //remove the last two entries of the vector
    // //first remove the last entry
    // vector1.pop_back();
    // printVectorIterators(vector1);
    // vector1.pop_back(); //continue to remove the last entry
    // printVectorIterators(vector1);

    //delete an entry at a specific position
    // printVectorIterators(vector1);
    // int posToBeErased = 1; // position to be erased (positions start from 0)
    // vector<int>:: iterator vectorIterator = vector1.begin();
    // vector1.erase(vectorIterator+posToBeErased);
    // printVectorIterators(vector1);
    
    // //delete entries from an interval
    // printVectorIterators(vector1);
    // int interval = 3;
    // vector<int>:: iterator vectorIteratorInsert = vector1.begin();
    // vector1.erase(vectorIterator, vectorIterator+interval); // the interval is the entry in 0, 1, 2. Not including the entry at "vectorIterator+interval"
    // printVectorIterators(vector1);

    //insert an entry at a specific position
    // printVectorIterators(vector1);
    // vector<int>:: iterator vectorIteratorInsert = vector1.begin();
    // int elementToInsert = 1000;
    // vector1.insert(vectorIteratorInsert+1, elementToInsert); //insert 1000 at the position "vectorIteratorInsert+1" 
    // printVectorIterators(vector1);

    //insert copies
    // printVectorIterators(vector1);
    // int numberOfCopies = 5;
    // int elementToInsert2 = 2000;
    // vector<int>:: iterator vectorIteratorInsert = vector1.begin();
    // vector1.insert(vectorIteratorInsert+1,numberOfCopies,elementToInsert2);
    // printVectorIterators(vector1);

    // //find a specific entry
    // //first approach way
    // int entryToFind = 25;
    // vector<int>::iterator findIterator;
    // // This function returns an iterator to the first element that is equal to entryToFind
    // //if there is no such element in the vector, the function returns iterator to vector1.end()
    // findIterator=find(vector1.begin(),vector1.end(), entryToFind);
    // if (findIterator!=vector1.end())
    // {
    //     cout<<"First entry that matches the search query found at the position "<<findIterator-vector1.begin()<<endl;
    // }
    // else
    // {
    //     cout<<"The entry is not found!";
    // }

    // //find a specific entry
    // // second approach
    // printVectorIterators(vector1);
    // int entryToFind2 = 20;
    // vector<int>:: iterator findIterator2;
    // for (findIterator2=vector1.begin(); findIterator2!=vector1.end(); findIterator2++)
    // {
    //     if (*findIterator2==entryToFind2)
    //     {
    //         break;
    //     }
    // }
    // if (findIterator2!=vector1.end())
    // {
    //     cout<<"First entry that matches the search query found at the position "<<findIterator2-vector1.begin()<<endl;
    // }
    // else{
    //     cout<<"The entry is not found!";
    // }

    //erase all the vector entries 
    // vector1.clear();
    // printVectorIterators(vector1); 
    return 0;

}