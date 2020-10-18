class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int arr[101] = { 0 };
        int x = 0, y = 0, x0 =0;
        int m = mat.size();
        int n = mat[0].size();
        for (int q=m-2; q>=0; q--) {
            y = q; x = x0;
            while (y != m && x != n ) {
                arr[mat[y][x]]++;
                //cout<<mat[y][x]<<" ";
                y++; x++;
            }
             y = q; x = x0;
           
            for (int w=0; w<101; w++) {
                //cout<<arr[w];
                if (arr[w] > 0) {
                    mat[y][x] = w;
                    arr[w]--;
                    y++; x++; w--;
                    
                }
                
            }
            if (q == 0 ) {
                x0++; q++;
            }
            if ( x0 == n ) break;
            
        }
        
        return mat;
        
        
    }
};