//pattern using while
#include<iostream>
using namespace std; 
class pattern{
    public:
    void print_sq1(int n){
        int i=0;
        while(i<n){
            int j=0;
            while(j<n){
                cout<<j<<" ";
                j++;
            }
            cout<<"\n";
            i++;


        }
    }
    void print_sq2(int n){
        int i=1;
        while (i<n)
        {
            int j = n;
            while(j>0){
                cout<<j<<" ";
                j--;
            }
            cout<<"\n";
            i++;
        }
    }
        void rev_tri(int n){
            int i =1;
            while(i<n){
                int j=i;
                while(j>=1){
                    cout<<j<<" ";
                    j--;
                }
                cout<<"\n";
                i++;

                
            }
        }
        void char_pat( int  n ){
            
            int i=0;
            while(i<n){
                char a = 'a';
                int j=0;
                while(j<n){
                    cout<<char(a+j)<<" ";
                    j++;

                }
                cout<<"\n";
                i++;

            }

        }
        void char_pat2(int n){
            int i=1;
            while(i<=n){
                char a = 'a';
                int j=i;
                while(j<=n+i){
                
                    cout<<char(a+j)<<" ";
                    j++;
                }
                cout<<endl;
                i++;

            
        }
        }
        void char_pat3(int n){
            int i=1;
            while(i<=n){
                int j =0;
                while(j<i){
                    cout<<char('a'+i)<<" ";
                    j++;
                }
                cout<<"\n";
                i++;
            }
        }
        void multiloop(int n){

            for(int i =0 ,  j=n;i<=n || j>=i;i++,j--){
                cout<<j<<" "<<j*i<<" ";
                cout<<i<<endl;

            }

        }
};
class bitwise{
    public:
        void shift(int n){
            cout<<(n<<1)<<":left shift";
            cout<<(n>>1)<<":right shift"<<endl;
        }

        int inc(int a){
            
            if(a++){
                return true;
            }
            else{
                return false;
            }
            
        }
       bool isprime(int n){
        bool isprime = 1;
        for(int i=2;i<n;i++){
            if(n%i==0){
                isprime = 0;
                break;
            }

        }
        if (isprime==0)
        {
            return false;
        }
        else {
            return true;
        }
        
    
       }
       void print_prime(int n){
        for(int i =0 ;i<n;i++){
            if(isprime(i)){
                cout<<i<<endl;
            }
        }
       }
       void use_cont(int n){
        for(int i=0;i<n;i+=2){
            if(i&1){
                cout<<i<<endl;
            }
            if(i&2){
                cout<<i<<endl;
            }
        }
       }
       string numb(int n){
        string numb2 = "";
        
        while(n!=0){
            numb2+=char('0'+(n&1));
            n=n>>1;            
        }
         reverse(numb2.begin()  , numb2.end());
         return numb2;
       }
       void print_arr(vector<int> arr){
        int n = arr.size();
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
       }

};
int main(){
    pattern p1;
    bitwise b1;
    // p1.print_sq2(5);
    // p1.print_sq1(5);
    // p1.rev_tri(5);
    // p1.char_pat(3);
    // p1.char_pat2(4);
    // p1.char_pat3(5);
    // p1.multiloop(3);
    // b1.shift(4);
    // cout<<b1.inc(1)<<endl;
    // b1.use_cont(10);
    cout<<b1.numb(5);

}
