//the stl for c++
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> name;
    name.insert(1);
    name.insert(1);
    
    name.insert(1);
    
    name.insert(1);
    
    name.insert(1);
    for(int i:name){
        cout<<i<<endl;

    }
    
}