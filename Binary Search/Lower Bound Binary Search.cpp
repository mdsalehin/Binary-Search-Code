///Lower bound using Binary Search
#include<bits/stdc++.h>
using namespace std;

//after input vector in main function -> the process will start hare.
///int lower_bound(vector<int> &v ,int element);

/// vector<int>
/*( -> vector<int> ---->taken input.inpue e ki dibo??vector jai vector
lower bound niya kaj krbo.vector<int>.
vector we will take lower bound )*/

///vector<int> &v
/*actual lower_bound -->range thke (start--end)
aykhne search space full of vector ayjno  (&v) disi */

///int element
// int element -->> ay element upp & low bound findout krbe.

///int lower_bound
//retunr krbe ki?? --> = index
// int lower_bound --> ki return krbe??-->return krbe = index.

///int lower_bound (int element)
/*amra index return kbro->(lower_bound).ar jata basically(int element)ar
index return krbe (oi element) ar jata lower bound hobe (int element) r*/

int lower_bound(vector<int>&v, int element)
{

///basically lower bound ki?
    /* jdi &v te present thake thle oi elemnet e.ar jdi nah tke thle bigger elemnt*/
///Basically Binary Search e krbo

    int lo = 0;
    int hi = v.size()-1;
    int mid;
    while(hi-lo>1)
    {
        int mid = (hi+lo)/2;

        ///jdi mid ar che boro hoi element right part e exit lower bound

        if(v[mid]<element)
        {
            lo = mid+1;
        }
        ///mid ar che choto left part exit lower bound.
        else
        {
            hi =mid;
        }
    }
    /* after finished loop check 1st check low index
    if low index not lower bound -> then ans = hi index */

    if(v[lo]>=element)
    {
        return lo;
    }

    ///my question  same e hoi ans-->> (else if) kno nah?
    /* else if(v[hi]>=element)
    {
        return hi;
    }*/
    if(v[hi]>=element)
    {
        return hi;
    }
    ///jdi lower bound jata kujtasi oi ta present e nai thale ans =-1 kre dibo

    return -1;

}
int32_t main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ///sort mendatory
    sort(v.begin(),v.end());

    cout<<"sort value"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

///Given value input find out--> Upped & lower element
    int Find_element;
    cin>>Find_element;
    //cout<<lower_bound(v,Find_element);
    int lb = lower_bound(v,Find_element);
    cout<<"index = "<<lb<<" "<<"values = "<<v[lb]<<endl;

}
/*
#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>&v,int element)
{
    int lo=0;
    int hi=v.size()-1;
    int mid;

    while(hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(v[mid]<element)
        {
            lo=mid+1;
        }
        else
        {
            hi = mid;
        }
    }
    if(v[lo]>=element)
    {
        return lo;
    }
    if(v[hi]>=element)
    {
        return hi;
    }
    return -1;
}
int32_t main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    cout<<"sort the array"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

    int find_element;
    cin>>find_element;
    int lb = lower_bound(v,find_element);
    cout<<"index "<<lb<<" "<<"vlues "<<v[lb]<<endl;
}*/

