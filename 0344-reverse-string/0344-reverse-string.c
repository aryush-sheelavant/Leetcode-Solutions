
void reverseString(char* s, int sSize) {

    int first=0;
    int last=sSize-1;
    
    int temp=0;
    while(first<=last)
    {
        temp=s[first];
        s[first]=s[last];
        s[last]=temp;

        first++;
        last--;
    }
}
