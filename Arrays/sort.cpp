//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order without using any sorting algorithm.
#include<iostream>
#include<vector>
using namespace std;

vector<int> sort(vector<int> arr)
{
    int one=0, two=0, zero=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1)
            one++;
        else
            two++;
    }
    
    for(int i=0;i<arr.size();i++)
    {
        if(zero--!=-1)
            arr[i]=0;
        else if(one--!=-1)
            arr[i]=1;
        else
            arr[i]=2;
    }
    return arr;
}

int main()
{
    vector<int> arr;
    int k;
    cout<<"press '9' to end insertion";
    k=-1;
    while(1)
    {
        cin>>k;
        if(k==9)
            break;

        cout<<endl;
        arr.push_back(k);
    }
    vector<int> new_array=sort(arr);
    for(int i=0;i<new_array.size();i++)
        cout<<new_array[i]<<" ";

    return 0;
}