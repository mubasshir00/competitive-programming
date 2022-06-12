class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int temp_arr[text1.size()+1][text2.size()+1];
    memset(temp_arr,0,sizeof(temp_arr));
    int max_index = 0;
    int min_index = 0;

    for(int i=0;i<=text1.size();i++){
        for(int j=0;j<=text2.size();j++){
            if(i==0 || j==0){
                temp_arr[i][j]=0;
            }
            else if (text1[i-1] == text2[j-1] )
            {
            
                temp_arr[i][j] = temp_arr[i-1][j-1]+1;
            }
            else
            {
                temp_arr[i][j] = max(temp_arr[i-1][j],temp_arr[i][j-1]);
            }
        }
    }
    return temp_arr[text1.size()][text2.size()];
    }
};
