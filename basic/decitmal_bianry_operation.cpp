// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;
void decitobin(int n)
{
    vector<int> arr;
    while(n>0)
    {
       arr.push_back(n%2);
       n = n/2;
    }
    reverse(arr.begin(),arr.end());
    for(auto i:arr)
        cout<<i;
}
void bintodeci(string a)
{
    int sum=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        int temp = a[i] - '0';
        int power = pow(2,a.size()-i-1);
        sum = sum + (temp * power);
    }
    cout<<sum;
}
int main() {
    int n=15;
    decitobin(n);
    cout<<endl;
    //cout<<binary;
    string a = "1111";
    bintodeci(a);
    return 0;
}
