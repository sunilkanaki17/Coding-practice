// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;

int hcf(int a,int b)
{
    int mini = min(a,b);
    for(int i=mini;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
            return i;
    }
}

int lcm(int a,int b)
{
    int maxi = max(a,b);
    for(int i=maxi;i<=a * b;i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
}

int main() {
    int a=36;
    int b=60;
    //hcf pf two numbers
    int answer = hcf(a,b);
    cout<<"HCF of "<<a<< " & " <<b<< " = "<<answer<<endl;
    
    int lcm_answer = lcm(a,b);
    cout<<"HCF of "<<a<< " & " <<b<< " = "<<lcm_answer<<endl;
    return 0;
}
