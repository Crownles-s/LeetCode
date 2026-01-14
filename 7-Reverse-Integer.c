//Code (without using long)
int reverse(int x) {
    int dig;
    int result=0;
    if (x==0){
        return 0;
    }
    int last_pos=INT_MAX-((INT_MAX/10)*10);
    int last_neg=INT_MIN-((INT_MIN/10)*10);
    while (x!=0){
        dig=x%10;
        if (result>INT_MAX/10 || (result==INT_MAX/10 && dig>last_pos))
            return 0;
        else if (result<INT_MIN/10 || (result==INT_MIN/10 && dig<last_neg))
            return 0;
        else
            result=(10*result)+dig;
        x=x/10;
    }
    return result;
}

//Code (if long is allowed)
int reverse(int x) {
    int y;
    long result=0;
    if (x==0){
        return 0;
    }
    else{
        y=x;
        while (y!=0){
            result=(10*result)+(y%10);
            y=y/10;
        }
    }
    if (result<INT_MIN || result>INT_MAX)
        return 0;
    else
        return result;
}
