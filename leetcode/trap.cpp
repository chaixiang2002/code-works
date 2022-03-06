class Solution {
public:
    int trap(vector<int>& height) {
        //裁剪
        while(height.size()!=0 && !height[0]) height.erase(height.begin());
        while(height.size()!=0 && !height[height.size()-1]) height.erase(height.end());

        for(int i=0;i<height.size();++i)
            cout<<'\t'<<height[i];

        //排除空集,1集，2集
        if(height.size()<=2)
             return 0;

        //int lheight,rheight;
        int res=0;//return值
        for(int i=1;i<height.size()-1;++i){
            int l_h=height[i-1],r_h=height[i+1];
            for(int j=i-1;j>=0;--j){
                if(height[j]>l_h) l_h=height[j];
            }
            for(int j=i+1;j<height.size();++j){
                if(height[j]>l_h) r_h=height[j];
            }
            if((l_h<r_h?l_h:r_h)-height[i]>0){
                res+=l_h<r_h?l_h:r_h;
                res-=height[i];
            }
            cout<<"s="<<res<<endl;
        }
        return res;
    }
};