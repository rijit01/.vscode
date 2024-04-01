#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(5);
    d.push_back(10);

    for(int i:d){
        cout << i << " ";
    }cout << endl;
    // d.pop_back();
    // for(int i:d){
    //     cout << i << " ";
    // }cout << endl;
    // d.pop_front();
    // for(int i:d){
    //     cout << i << " ";
    // }cout << endl;

    cout << "1st index element: "<< d.at(1)<< endl;
    cout << "empty or not: "<< d.empty()<< endl;
    cout << "before erase size = "<< d.size()<< endl;
    deque<int>::iterator it;
    it = d.begin();
    d.erase(it);
    cout << "after erase size= " << d.size()<< endl;
    for(int i:d){
        cout << i << " ";
    }cout << endl;
}