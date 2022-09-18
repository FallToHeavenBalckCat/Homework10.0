class Solution {
public:
    int maxArea(vector<int>& height) {
        //双指针优化
        int res=0;
        int i=0,j=height.size()-1;
        cout<<i<<" "<<j<<endl;
        while(i<j){
            int h=min(height[i],height[j]);
            cout<<h<<endl;
            res=max(res,(j-i)*h);
            if(height[i]<height[j]) i++;
            else j--;
        }
        return res;
    }
};

// i=0,j=s-1;
// 计算出当前区间内的最大值。找到最大值之后只移动当前的短板子，
// 重复上述步骤，直到j=i为止；