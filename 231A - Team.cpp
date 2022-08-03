//231A - Team
#include<iostream>
using namespace std;
int main()
{
    int x, y, z, a, count=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>x>>y>>z;
        if(x+y+z >=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
