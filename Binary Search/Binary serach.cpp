#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ///search space
    int to_find;
    cin>>to_find;
    int lo=0;
    int hi=n-1;
    int mid;

    /*if to_find
    4 5
    hi=5,lo=4
    5-4=1 -->>then terminate while loop.
    we can compare tow number easily*/
    while(hi-lo>1)
    {
        mid=(hi+lo)/2; ///complexity-->>(log2^n)
        //because everything is divided by 2
        if(v[mid]<to_find)
        {
            lo=mid+1;
        }
        else
        {
            hi=mid;
        }
    }
    if(v[lo]==to_find)
    {
        cout<<lo<<endl;
    }
    else if(v[hi]== to_find)
    {
        cout<<hi<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }

}
