//code for recursion tower of hanoi
#include<bits/stdc++.h>
using namespace std;

class Rec{
    public:
    void towofh(char source , char  destination , char aux, int n ){
        if(n == 1){
            cout<<"move disc" << 1 << "from" << source << "to" << destination<<endl;

            return ;
        }
        //moving the n-1 disks from source to aux using destination
        towofh(source , aux , destination , n-1 );
        cout<<"move disc" << n << "from" << source << "to" << destination<<endl;
        //moving the n-1 disks from aux to destination using a 
        towofh(aux , destination , source , n-1);
    }
    int issorted(int arr[] , int n){
        if(n == 1){
            return 1;
        }
        return arr[n-1] < arr[n-2] ? 0 : issorted(arr , n-1);
    }
    //code for generating n bits 
    void generate_nbits(string arr , int n){
        if(n < 1){
            cout<<arr<<endl;
        }
        else{
        arr[n-1] = '0';
        generate_nbits(arr,n-1);
        arr[n-1] = '1';
        generate_nbits(arr, n-1);
        }

    }
    void print_arr(vector<int> arr){
        for(auto i: arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Rec r1;
    // r1.towofh('A' , 'b' , 'c' , 3);
    string arr = "00000";
    r1.generate_nbits(arr , 5);
    // r1.print_arr(arr);

}