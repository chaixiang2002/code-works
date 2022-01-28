class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        int loop=n/2,set=1,count=1;
        int x_s=0,y_s=0;
        while(loop--){
            int i=x_s;
            int j=y_s;
            for(j=y_s;j<y_s+n-set;j++){
                res[i][j]=count++;
            }
            for(i=x_s;i<x_s+n-set;i++){
                res[i][j]=count++;
            }
            for(;j>y_s;j--){
                res[i][j]=count++;
            }
            for(;i>x_s;i--){
                res[i][j]=count++;
            }

            x_s++;
            y_s++;

            set+=2;
        }
        if(n%2==1){
            res[n/2][n/2]=count;
        }
        return res;
    }
};