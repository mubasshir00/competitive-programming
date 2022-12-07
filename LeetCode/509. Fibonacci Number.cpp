class Solution {
public:
    int fib(int n) {
        int fib_arr[n+2];
        fib_arr[0] = 0;
        fib_arr[1] = 1;
        for(int i=2;i<=n;i++){
            fib_arr[i] = fib_arr[i-1] + fib_arr[i-2];
        }
        return fib_arr[n];
    }
};
