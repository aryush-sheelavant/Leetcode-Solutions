int climbStairs(int n) {
     
     int prev=1,next=2,sum=0;
     if(n<=0)
     {
        return 0;
     }
     else if(n==1)
     {
        return 1;
     }
     else if(n==2)
     {
        return 2;
     }
     else
     {
        for(int i=3;i<=n;i++)
        {
            sum=prev+next;
            
            prev=next;
            next=sum;
        }
     }
     return sum;
     
    
}