//vector is dynamic in size unlike array

#include <bits/stdc++.h>
using namespace std;

void explainVector(){

    vector<int> v; //empty vector of size 0

    v.push_back(1); // {1}
    v.emplace_back(2); // {1, 2} //emplace_back is faster than push_back

    vector<pair<int, int>> vec;

    vec.push_back({1, 2}); //need to use {} for pair
    vec.emplace_back(1, 2); //{} not needed for emplace_back

    vector<int> v2(3, 50); // {50, 50, 50}
    vector<int> v3(4); // {0, 0, 0, 0}

    vector<int> v4(5, 20); // {20, 20, 20, 20, 20}
    vector<int> v5(v4); // {20, 20, 20, 20, 20}

    //iterator

    vector<int>::iterator it = v4.begin(); //begin points to first element of vector..i.e) memeory address of first element
    it++;
    cout << *(it) << endl; //20 {20, [20], 20, 20, 20}
    it+=2;
    cout << *(it) << endl; //20 {20, 20, 20, [20], 20}

    vector<int>::iterator it1 = v4.end(); //end points to last element of vector..i.e) ri8 after memeory address of last element
    vector<int>::iterator it2 = v4.rbegin();//reverse end points to last element of vector..i.e) memeory address of last element
    vector<int>::iterator it3 = v4.rend(); //reverse begin points to first element of vector..i.e) memeory address of first element

    //for loop

    for(vector<int>::iterator it = v4.begin(); it != v4.end(); it++){
        cout << *(it) << " "; //20 20 20 20 20
    }

    //shortcut for loop

    for(auto it = v4.begin(); it != v4.end(); it++){
        cout << *(it) << " "; //20 20 20 20 20
    }
    //datatype is automatically assigned to auto

    //foreach loop

    for(auto x : v4){
        cout << x << " "; //20 20 20 20 20
    }

    //erasing elements

    v4.erase(v4.begin()+1); // {20, 20, 20, 20}
    v4.erase(v4.begin()+2, v4.begin()+4); // {20, 20}

    //inserting elements

    vector<int> v6(2, 100); // {100, 100}
    v6.insert(v6.begin(), 300); // {300, 100, 100}
    v6.insert(v6.begin()+1, 2, 10); // {300, 10, 10, 100, 100}..here 2 is the no of times 10 is inserted

    //copy

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    //size
    v.size(); //7

    //pop
    v4.pop_back(); // {20, 20}

    //swap
    v4.swap(v6); // {300, 10, 10, 100, 100} {20, 20}

    //clear
    v4.clear(); // {} erarases all elements

    //empty
    cout << v4.empty() << endl; //1

//insert in vector is costlier than insert in list..list has doubly linked list implementation while vector has array(singly) implementation



}