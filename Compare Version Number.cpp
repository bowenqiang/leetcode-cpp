class Solution {
public:
    int compareVersion(string version1, string version2) {
        version1.push_back('.');
        version2.push_back('.');
        string sub1=version1;
        string sub2=version2;
        size_t idx1=0,idx2=0;
        while(!sub1.empty() || !sub2.empty())
        {
            int num1;
            if(sub1.empty())
                num1=0;
            else
            {
                num1=stoi(sub1,&idx1);
                sub1=sub1.substr(idx1+1);
            }
            int num2;
            if(sub2.empty())
                num2=0;
            else
            {
                num2=stoi(sub2,&idx2);
                sub2=sub2.substr(idx2+1);
            }
            if(num1>num2)
                return 1;
            if(num1<num2)
                return -1;
            idx1=0;
            idx2=0;
        }
            return 0;
    }
};
