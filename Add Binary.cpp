class Solution {
public:
    string addBinary(string a, string b) {
        const int size=a.size()>b.size()?a.size():b.size();
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans;
        int carry=0;
        for(int i=0;i<size;i++)
        {
            int ai=i<a.size()?a[i]-'0':0;
            int bi=i<b.size()?b[i]-'0':0;
            int c=(ai+bi+carry)%2;
            carry=(ai+bi+carry)/2;
            ans.insert(ans.begin(),c+'0');
        }
        if(carry!=0)
            ans.insert(ans.begin(),carry+'0');
        return ans;
        
    }
};
