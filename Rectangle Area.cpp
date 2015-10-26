class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int bl_x,bl_y,tr_x,tr_y;
        bl_x=max(A,E);
        bl_y=max(B,F);
        tr_x=min(C,G);
        tr_y=min(D,H);
        int overlap;
        if(tr_x<bl_x || tr_y<bl_y)
            overlap=0;
        else
            overlap=(tr_x-bl_x)*(tr_y-bl_y);
        int area=(C-A)*(D-B)+(G-E)*(H-F)-overlap;
        return area;
        
    }
};