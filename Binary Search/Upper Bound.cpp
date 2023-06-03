///Upper Bound -->> Using STL
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int arra[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>arra[i];
    }
    ///Always be sorted array or vector
    /*If sorted then complexity (log n)
    n=Size of array */

    /*If not sorted
    Otherwise complexity = O(N) -->which exit TimeLimit*/

    ///so sort the array
    sort(arra,arra+n);

    for(int i=0; i<n; i++)
    {
        cout<<arra[i]<<" ";
    }
    cout<<endl;
    ///Upper bound =?
    /*If element find the array it will given exact
     bigger next element*/

    /// example 4 5 5 7 8 25
    /* if found = 5
    so output index(3) = 7
    if found = 7
    so output index(4) = 8
    so now found  = 6
    which is not present on the array
    so output is given = 7 --> Bigger value given */

    ///What will Return Upper Bound?
    /*BOTH Lower Bound And Upper Bound Return
      LOCTION Return on The element */

    ///IN array it will return ---> Pointer
    ///In vector it will return ---> Iterator

    /*if using array
    so->
    upper_bound(starting address,total range previous element,which element)
    starting address = -> which element to start find Upper bound */

    ///int *ptr = upper_bound(a, a+n, 5)
    /* a = find all array
     a+n = last element -> previous address
     5   = which element i found? */

    int findd;
    cin>>findd;

    int *ptr = upper_bound(arra, arra+n, findd);
    ///cout<<(*ptr)<<endl;

    /// 4 5 5 7 8 25

    /*if find = 26? --> what will happen?
    it will return garbage value because it is not
    present on the array..so aytar location nth location e
    pointer asche.*/


    /// check dita pari --if condition diya

    if(ptr == (arra+n))
    {
        ///Which element Not present on the array i will not exit
        cout<<"Not Found";
        return 0;
    }
    cout<<(*ptr)<<endl;

    ///Time complexity = Log(N) -->(N = Size of the array)

}

/*
#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;
    int arra[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>arra[i];
    }

    sort(arra,arra+n);
    for(int i=0; i<n; i++)
    {
        cout<<arra[i]<<" ";
    }
    cout<<endl;
    /// 4 5 5 7 8 25
    int *ptr = upper_bound(arra, arra+n, 5);
    ///cout<<(*ptr)<<endl;

    if(ptr == (arra+n))
    {
        ///Which element Not present on the array i will not exit
        cout<<"Not Found";
        return 0;
    }
    cout<<(*ptr)<<endl;
    ///Time complexity = Log(N) -->(N = Size of the array)
}
*/

