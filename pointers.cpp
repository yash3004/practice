#include<iostream>
using namespace std;
int main(){
    char *p;
    p = (char*)malloc(5*sizeof(int));
    p[0] = 'h';p[1]='e';p[2]='l';p[3]='l';p[4]='o';

    for(int i=4;i>=0;i--){
        cout<<&*(p+i)<<endl;
    }
    free(p);
}