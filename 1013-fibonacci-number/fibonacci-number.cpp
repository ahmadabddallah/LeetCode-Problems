int solve_rec(int n){

    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }

    return (solve_rec(n-1)+solve_rec(n-2));

}
class Solution {
public:
    int fib(int n) {
        
        return solve_rec(n);
    }
};