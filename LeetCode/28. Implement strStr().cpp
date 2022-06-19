class Solution {
public:
    int strStr(string haystack, string needle) {
    
    char *ret;

    int res =0;
    int res_index = 0;
    int temp = haystack.find(needle) ;
    if (haystack.find(needle) != string::npos)
    {
       return temp ;
    } else {
        return -1;
    }
    }
};
