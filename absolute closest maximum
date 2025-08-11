#include <cmath>
class Solution {
  public:
    int closestNumber(int n, int m) {
        int count = 0;
        int x,y;
        bool a=false,b=false;
while(1)
{
    if(!a && (n-count)%m==0)
    {
        a = true;
        x=n-count;
    }
    
    if(!b && (n+count)%m==0)
    {
        y= n+count;
        b = true;
    }
    count++;

if(a && b){
    if(abs(x)>abs(y)){
        return x;
    }
    else{
        return y;
    }
}
else if (a){
        return x;
    }
else if (b){
        return y;
    }
        }
    }
};
