//Reverse String
class Solution {
    void helper(char s[],int l,int r)
    {
        if(l>=r)
            return;
        char t=s[r];
        s[r]=s[l];
        s[l]=t;
        l++;
        r--;
        helper(s,l,r);
    }
    public void reverseString(char[] s) {
        int l=0;
        int r=s.length-1;
       helper(s,l,r);    }
}
