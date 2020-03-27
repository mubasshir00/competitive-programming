#include<bits/stdc++.h>
using namespace std ;
int main()
{
    char string1[200];
    char string2[999];
    char string3[999];
    int c1=0,c2=0,c3=0;
    int count1[26]={0};
    int arr1[26]={0};
    int arr2[26]={0};
    int arr3[26]={0};
    int count2[26]={0};
    int count3[26]={0};
    int x,y,z;
    gets(string1);
    gets(string2);
    gets(string3);
    while(string1[c1] != '\0')
    {
        if(string1[c1] >= 'A' && string1[c1]<= 'Z')
        {
            x = string1[c1] - 'A';
            count1[x]++;
        }
        c1++;
    }
    for(c1=0;c1<26;c1++)
    {
       arr1[c1] = count1[c1];
    }


     while(string2[c2] != '\0')
    {
        if(string2[c2] >= 'A' && string2[c2]<= 'Z')
        {
            y = string2[c2] - 'A';
            count2[y]++;
        }
        c2++;
    }
    for(c2=0;c2<26;c2++)
    {
       arr2[c2] = count2[c2];
    }


    while(string3[c3] != '\0')
    {
        if(string3[c3] >= 'A' && string3[c3]<= 'Z')
        {
            z = string3[c3] - 'A';
            count3[z]++;
        }
        c3++;
    }
    for(c3=0;c3<26;c3++)
    {
       arr3[c3] = count3[c3];
    }


    for(int i=0;i<26;i++)
    {
        if(arr3[i] != (arr1[i]+arr2[i]))
        {
            cout<<"NO"<<endl;
            return 0 ;

        }

    }
    cout<<"YES"<<endl;


    return 0 ;
}
