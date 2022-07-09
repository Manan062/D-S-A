class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 and k==1)
        {
            return 0;
}
        int ans=0;
        int len=pow(2,n-1);
        if(k<=len/2)
        {
            ans=kthGrammar(n-1,k);
}
        else
        {
            int temp=kthGrammar(n-1,k-len/2);
            if(temp==0)
                ans=1;
            else
                ans=0;
}
        return ans;
        /*
        in this Question first half of Nth grammar is equals to the n-1th grammar
        and other half is equals to the opposite of n-1th grammar
        like for n=3 grammar is 0110
        ans for n=4 grammar is 01101001
        
        */
        
    }
};
