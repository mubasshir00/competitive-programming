    #include<bits/stdc++.h>
    using namespace std ;
    int main()
    {
        int color[5];
        int tc =0;
        cin>>tc;
        while(tc--){
        for(int i=0;i<3;i++)
        {
            cin>>color[i];
     
        }
        sort(color, color+3);
        int a,b,c;
        a = color[2];
        b = color[1];
        c= color[0];
     
     
        if(a<=(b+c))
        {
            int sum = a+b+c;
            if(sum%2==0)
                cout<<sum/2<<endl;
            else cout<<(sum-1)/2<<endl;
        }
        else
        {
            cout<<(b+c)<<endl;
        }
        }
     
        return 0 ;
    }
