#include<iostream>
#include<vector>
using namespace std;

struct minMax
{
    int min;
    int max;
};

struct minMax getMinMax (vector<int> Arr)
{
    struct minMax result;
    result.min=Arr[0];
    result.max=Arr[0];

    if(Arr.size()==1)
    {
        return result;
    }

    for(int i=1;i<Arr.size();i++)
    {
        if(Arr[i]<result.min)
            result.min=Arr[i];
        if(Arr[i]>result.max)
            result.max=Arr[i];
    }

    return result;
}

int main()
{
    vector<int> Arr;
    int n, k=0;
    cout<<" Enter size of Array ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<endl<<"Enter "<<i+1<<" element";
        cin>>k;
        Arr.push_back(k);
    }

    struct minMax mm=getMinMax(Arr);

    cout<<"\n Min element is : "<<mm.min<<"\n Max element is : "<<mm.max;

    return 0;
}
