// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={1,26,7,1,1,1};
    int res;
    sort(arr.begin(),arr.end());
    int firstsmall = arr[0];
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=firstsmall && arr[i]<INT_MAX)
        {
            res = arr[i];
            break;
        }
    }
    cout<<res;
    
        
}
