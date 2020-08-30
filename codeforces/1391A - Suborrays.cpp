#include<bits/stdc++.h>
using namespace std ;
void shuffle_array(int arr[], int n)
{

    // To obtain a time-based seed
    unsigned seed = 0;

    // Shuffling our array
    shuffle(arr, arr + n,
            default_random_engine(seed));

    // Printing our array
    for (int i = 0; i <n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{
    int tc;
    cin>>tc;
    int arr[1000];
    while(tc--)
    {
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            arr[i]=i+1;
        }
        shuffle_array(arr,m);

    }
    return 0;
}
