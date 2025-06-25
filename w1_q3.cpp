#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    bool b=false;
    int n,k;
    
    for (int i=0;i<t;i++)
    {
        
        cin >> n >> k;
        
        
        for (int y=0;y<=n/k;y++)
        {
            if ((n-k*y)%2==0)
            {
                cout << "yes";
                b=true;
                break;
            }
            
            
        }
        
        if (b==true)
            {   
                b=false;
                continue;
            }
            
            cout << "No";
    }

    return 0;
}