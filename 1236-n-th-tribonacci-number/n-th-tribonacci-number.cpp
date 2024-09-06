

//not gonna solve it recursion because it gets TLE
/*
int solve_recursion(int n){

    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else if(n==2){
       return 1;
    }

    return (solve(n-1)+solve(n-2)+solve(n-3));
    
}
*/
class Solution {
public:
    int tribonacci(int n) {

        int arr[38]{0,1,1};


        for(int i=3;i<38;i++){
            arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        }

        return arr[n];
        
    }
};