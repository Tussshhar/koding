class Solution {
  public:
    bool armstrongNumber(int n) {
        int a,sum=0,count=0,b=n;
        while(b>0){
            b=b/10;
            count++;
        }
        b=n;
        for(int i=0;i<count;i++){
        int num=b%10;
        sum+=pow(num,count);
        b=b/10;
        }
        if(sum==n){
            return true;
        }
        else{
            return false;
        }
    }
};
