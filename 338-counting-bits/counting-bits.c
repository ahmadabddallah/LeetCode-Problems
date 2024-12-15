/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int count_ones(int n){

    int counter=0;

    while(n>0){
        n&=(n-1);
        counter++;
    }
    return counter;

}

int* countBits(int n, int* returnSize) {
    
    int *arr=(int *)malloc((n+1)*sizeof(int));
    arr[0]=0;
    printf("%d",n);
    for(int i=1;i<=n;i++){
       arr[i]=count_ones(i);
       //printf("%d\n",i);
    }
    *returnSize=n+1;
    return arr;

}