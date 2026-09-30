int addDigits(int num) {
    
    int rem=0,sum=0;
    if(num<0)
    {
        return 0;
    }
    else
    {
        while(num>=10)
        {
            int sum=0;

            while(num>0)
            {
                rem=num%10;
                sum=sum+rem;
                num=num/10;
            }
            num=sum;
        }
    }
    return num;
}