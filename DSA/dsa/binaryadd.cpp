//program for binaray add 
#include<iostream>
#include<string>
using namespace std;
string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        int i = a.length()-1;
        int j =b.length()-1;

        while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i] - '0'; // Convert character to integer
            i--;
        }
        if (j >= 0) {
            sum += b[j] - '0'; // Convert character to integer
            j--;
        }
        res.push_back('0' + sum % 2); // Convert integer sum back to character and append
        carry = sum / 2;
    }

    // Reverse the result string to get the correct binary addition
    reverse(res.begin(), res.end());
    return res;


    }


int main(){
    string a = "1101";
    string b = "1111";
    string res = addBinary(a,b);
    cout<<res;
}