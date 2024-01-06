//code for multiply strings
#include<iostream>
#include<stdlib.h>
using namespace std;
class Solution {
    public :
    string multi_rev(string num1 , string num2){
        
        int carry = 0;
        string res = "";
        int i = 0 ,j = 0;
        while(i < num1.length() && j<num2.length()){
            int multi = (int(num1[i]) - 48 ) + (int(num2[j]) - 48);
            if(carry > 0){
                multi = (int(num1[i]) - 48 ) + (int(num2[j]) - 48) + carry;

        
            }
            carry = multi/10;
            printf("%c " , '0' + (multi % 10));
            i++;
            j++;

        }
        res+='0'+carry;
        reverse(res.begin() , res.end());
        return res;

    }
};
int main(){
    Solution s1;

    string a = "999";
    string b = "999";
    string c = s1.multi_rev(a , b);
    cout<<c;

    return 0;

}