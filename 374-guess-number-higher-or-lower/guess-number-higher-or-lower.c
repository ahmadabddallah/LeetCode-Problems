/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
	
    long long right=n;
    long long left=0;

    long long mid=(right+left)/2;
    int status =3;
    while(right>=left){
        mid=(right+left)/2;

        status=guess(mid);

        if(status==0){
            
            break;
        }
        else if(status==-1){
            right=mid-1;
        }
        else{
            left=mid+1;
        }

    }

    

    return mid;

}