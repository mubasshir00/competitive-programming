#include <bits/stdc++.h>
using namespace std;
void print_something(string x)
{
    cout << x << endl;
}
void find_sub_string(string x, string y, int x_length, int y_length)
{
    int temp_arr[x_length + 2][y_length + 2];
    memset(temp_arr, 0, sizeof(temp_arr));

    int max_index = 0;
    int last_index = 0;
    for (int i = 1; i <= x.length(); i++)
    {
        for (int j = 1; j <= y.length(); j++)
        {
            if (x[i - 1] == y[j - 1])
            {
                temp_arr[i][j] = temp_arr[i - 1][j - 1] + 1;
                if (temp_arr[i][j] > max_index)
                {
                    max_index = temp_arr[i][j];
                    last_index = i;
                    //  cout<<max_index<<endl;
                    //  cout<<"i "<<i<<endl;
                }
            }
        }
    }
    print_something(x.substr(last_index - max_index, max_index));
}

int main()
{
    string x, y;
    cin >> x >> y;
    find_sub_string(x, y, x.length(), y.length());
    return 0;
}