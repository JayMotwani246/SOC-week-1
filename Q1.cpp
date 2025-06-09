#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int count [n]={};
    
    for (int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        count [x-1]++;
    }
    
    for (int i=0;i<n;i++)
    {
        if (count[i]==0)
        {
            cout<< i+1;
        }
    }
    

    return 0;
}