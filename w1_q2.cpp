#include <iostream>
using namespace std;


int main()
{
    char x;
    char p=' ';
    int old=0;
    int newc=0;
    
    while (cin>>x)
    {
        if (x==p)
        {
            newc++;
            p=x;
            while (cin>>x&&x==p)
            {
                newc++;
                p=x;
            }
            
            newc=max(old,newc);
            old=newc;
            newc=0;
        }
        
        else 
        {
            p=x;
            continue;
        }
        
        
    }
    
    cout << old+1;
    

    return 0;
}