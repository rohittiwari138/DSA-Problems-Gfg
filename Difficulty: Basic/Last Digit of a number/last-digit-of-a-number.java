class Solution {
    public int lastDigit(int n) {
        if(n<0){
            n=n%10;
            return -n;
        }
        n=n%10;
        return n;
        
    }
}