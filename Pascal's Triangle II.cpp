class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>Pascal(rowIndex+1,1);
        for(int i=0;i<=rowIndex;i++)
        {
            int last=1,temp=0;
            for(int j=0;j<=i;j++)
            {
                
                if(j==0 || j==i)
                    Pascal[j]=1;
                else
                {
                    temp=Pascal[j];
                    Pascal[j]=last+temp;
                    last=temp;
                }
                    
            }
        }
        
        
        
        
        
        return Pascal;
    }

};