bool repeatedSubstringPattern(string s) {
        int len=s.size();
        if(len==0)return false;
        int next[len];
        getNext(next,s);
        if(next[len-1]!=0&&len%(len- (next[len-1]))==0)return true;
        if(next[len-1]!=0&&len%(len- (next[len-1])) == 0)
        return false;
    }