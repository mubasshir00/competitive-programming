class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int x = s.length();
    int temp_arr[x][x];
    int j ;
    memset(temp_arr,0,x);
    for(int i=0;i<x;i++){
        temp_arr[i][i]=1;
    }
    for(int len =2;len<=x;len++){
        for(int i=0;i<x-len+1;i++){
            j=i+len-1;

            if(s[i]==s[j] && len==2){
                temp_arr[i][j] = 2;
            }
            else if(s[i]==s[j]){
                temp_arr[i][j] = temp_arr[i+1][j-1]+2;
            } else {
                temp_arr[i][j] = max(temp_arr[i][j-1],temp_arr[i+1][j]);
            }
        }
    }
    return temp_arr[0][x-1];
    }
};
