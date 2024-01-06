//the stl for c++
#include<iostream>
#include<set>
#include<list>
#include<deque>
using namespace std;

int main(){
    // set<int> name;
    // name.insert(1);
    // name.insert(1);
    
    // name.insert(1);
    
    // name.insert(1);
    
    // name.insert(1);
    // for(auto i : name){
    //     cout<<i<<endl;

    // }
    // deque<int> d;
    // d.push_back(1);
    // d.push_front(2);
    // cout<<d.at(0)<<endl;
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);
    list<int>::iterator it = l.begin();
    it++;
    l.erase(it);
    for(auto i:l){
        cout<<i<<endl;
    }



    
}