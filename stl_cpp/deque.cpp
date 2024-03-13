#include <bits/stdc++.h>
using namespace std;

void explainDeque(){
    deque<int> dq = {1, 2, 3};
    dq.push_front(10);
    dq.push_back(20);

    for(auto x : dq){
        cout << x << " ";
    }
    dq.pop_front();
    dq.pop_back();
    

    cout << dq.size() << endl;

    dq.emplace_front(10);
    dq.emplace_back(20);

    cout << dq.front() << " " << dq.back() << endl;

    dq.back() = 5;
    dq.front() = 15;
    cout<<dq.front()<<" "<<dq.back()<<endl;
    for(auto x : dq){
        cout << x << " ";
    }
}

int main(){
    explainDeque();
    return 0;
}

//stack is LIFO..only push pop and top
