int fib(int n){
    
    int prev=0,next=1,sum=0;
    if(n<1)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
             sum=prev+next;

             prev=next;
             next=sum;
        }
    }
    return sum;


}