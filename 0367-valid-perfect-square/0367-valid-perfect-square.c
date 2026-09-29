bool isPerfectSquare(int num) {
    long long i=1;
    if(num<1)
    {
        return false;
    }
    else
    {
        for(i=1;i<num;i++)
        {
            if(i*i==num)
            {
                return i*i;
            }
        }
    }
    if(num==i*i)
    {
        return true;
    }
    else 
    {
        return false;
    }
    
}