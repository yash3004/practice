//code for binary decimal
#include<iostream>
using namespace std;


class Solution{
    public:
    void display_bit(int n){
        int mask;
        int res = 0;
        for(int i=31;i>=0;i--){
            mask = 1<<i;
            printf("%d" , (n&mask)?1:0);
            if(i%4==0){
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    int ones_compliment(int n){
        int res;
        for(int i=31;i>=0;i--){
            int mask = i>>1;
            res+=((~n)&mask)?1:0;
        }
        return res;

    }
    int bin_to_num(int n){
        int ans=0;
        int i=0;
        while(n!=0){
            int bit=n %10;
            if(bit == 1){
                ans+= pow(2,i);                
            }
            i++;
            n/=10;
        }
        return ans;
    }
};

    int And(int n){
        return (n&1);
    }

int main(){
    Solution s1;
    s1.display_bit(7);
    cout<<"\n";
    s1.display_bit(~abs(7)+1);
    cout<<"\n"<<s1.bin_to_num(110)<<endl;
    // cout<<s1.ones_compliment(5);
    cout <<And(4);

}