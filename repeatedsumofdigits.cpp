class Solution {
  public:
    int repeatedSumOfDigits(int N) {
        int y=N,sum=0,sum2=0;
        int x=noofdigits(y);
        for(int i=0;i<x;i++){
            int w=N%10;
            N=N/10;
            sum+=w;
        }
        if(sum>9){
            while(sum>9){
                int x=noofdigits(sum);
                sum2 = 0; 
                for(int i=0;i<x;i++){
                    int w=sum%10;
                    sum=sum/10;
                    sum2+=w;
                }
                sum = sum2; 
            }
            return sum;
        }
        else{
            return sum;
        }
    }

    int noofdigits(int y){
        int count=0;
        while(y>0){
            y = y/10;  
            count++;
        }
        return count;
    }
};
