#include<bits/stdc++.h>
using namespace std ;

unsigned get_nth_ugly_number(unsigned num)
{
    //1st take an array to store ugly number
    unsigned ugly_array[num];

    unsigned i2=0,i3=0,i5=0;
    unsigned next_multiple_of_2 = 2 ;
    unsigned next_multiple_of_3 = 3;
    unsigned next_multiple_of_5 = 5;
    unsigned next_ugly_no = 1 ;
    ugly_array[0]=1;

    // need a loop from 1 to num

     for(int i=1;i<num;i++)
     {
         next_ugly_no = min(next_multiple_of_2,min(next_multiple_of_3,next_multiple_of_5));
         ugly_array[i] = next_ugly_no;

         if(next_ugly_no==next_multiple_of_2)
         {
             i2=i2+1;
             next_multiple_of_2 = ugly_array[i2]*2;
         }
         if(next_ugly_no == next_multiple_of_3)
         {
             i3=i3+1;
             next_multiple_of_3 = ugly_array[i3]*3;
         }
         if(next_ugly_no == next_multiple_of_5)
         {
             i5=i5+1;
             next_multiple_of_5 = ugly_array[i5]*5;
         }
     }
     return next_ugly_no;


}

int main()
{

    cout<<"The 1500'th ugly number is "<<get_nth_ugly_number(1500)<<"."<<endl;
  //  cout<<get_nth_ugly_number(num);
    return 0;
}
