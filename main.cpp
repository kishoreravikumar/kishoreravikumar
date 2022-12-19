#include <iostream>
//#include <algorithm>
using namespace std;

void sortFunction(int *aRy, const int &n)
{
    for(int i =0 ; i< n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(aRy[i] > aRy[j] && j > i)
            {
                int first = aRy[i];
                aRy[i] = aRy[j];
                aRy[j] = first;
                cout << "sorting numbers"<< endl;
                for(int k =0 ; k <n; k++)
                    cout  << aRy[k]<<" ";
                cout << endl;
            }
        }
        cout << "sorting numbers final"<<endl;
        for(int k =0 ; k <n; k++)
            cout  << aRy[k]<<" ";
        cout << endl;
    }
    cout << "sorting numbers final2"<<endl;
    for(int k =0 ; k <n; k++)
        cout  << aRy[k]<<" ";
    cout << endl;
}

int main()
{
    cout << "Hello welcome to binary search" << endl;
    int  n,searchKey;
    cin >>n >>searchKey;
    int arr[n];
    for(int i =0 ; i <n; i++)
        cin>>arr[i];
    cout << "numbers before sorting"<<endl;
    for(int i =0 ; i <n; i++)
        cout << arr[i]<<" ";
    cout << endl;
    sortFunction(arr, n);
    cout << "numbers After sorting"<<endl;
    for(int i =0 ; i <n; i++)
        cout << arr[i]<<" ";
    cout << endl;
    cout << "Start searching "<<searchKey<<endl;
    bool found = false;
    int searchIndex = -1;
    int mid = n/2;
    int low = 0;
    int high = n -1;
    while(mid >= low && mid <= high)
    {
        cout <<" low="<<low <<" high="<<high <<"mid="<< mid<<endl;
        if(searchKey == arr[mid])
        {
            searchIndex = mid;
            found = true;
            break;
        }
        else if(searchKey < arr[mid])
        {
            high = mid;
            mid = (mid - low)/2;
        }
        else
        {
            low = mid;
            mid = (high - mid) / 2;
        }
        cout <<" low end="<<low <<" highend="<<high<<endl;
    }
    if(found)
    {
        cout <<"Search index is "<< searchIndex<< endl;
    }
    else
    {
        cout <<"Could not find the Search index"<< endl;
    }
    return 0;
}

