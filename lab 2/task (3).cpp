class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector <int> attheEnd, arr3 = arr2, answer;
        int arr[1001], i = 0, sizes = 0;
        
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        for (int q=0; q<arr1.size()-1; q++) {
            if ( i >= arr2.size()) {
                attheEnd.push_back(arr1[q]);
                
                if (q == arr1.size() - 2) { attheEnd.push_back(arr1[q+1]); }
                
                continue;
                
    
            }
            if (i == arr2.size()) {

                attheEnd.push_back(arr1[q]);
                continue;
            }
            if (arr1[q] == arr1[q+1]) {
                sizes++;
            }
            else {
                if (arr1[q] == arr2[i] ) {
                    arr[arr1[q]] = sizes + 1;
                    i++;
                }
                else {
                    for (int w=0; w<sizes + 1; w++)
                    attheEnd.push_back(arr1[q]);
                }
                sizes = 0;
            }
            if ( i >= arr2.size()) {
                //attheEnd.push_back(arr1[q])
                
                //return attheEnd;
                if (q == arr1.size() - 2) { attheEnd.push_back(arr1[q+1]); }
 
                continue;
            }

            if (q == arr1.size() - 2) {
                
                   
                if (arr1[q+1] == arr2[i]) {
                    arr[arr1[q+1]] = sizes + 1;
                    i++;
                    
                }
                else {

                    for (int w=0; w<sizes + 1; w++)
                    attheEnd.push_back(arr1[q]);
                }

            }

        }
        
       
        i = 0; 
          while (true) {
             if (i == arr3.size()) break;
            for (int q = 0; q<arr[arr3[i]]; q++) {
                //arr[arr1[q+1]] = sizes + 1;
                answer.push_back(arr3[i]);
            }
            i++;
            if (i == arr3.size()) break;
        }
        
        i = 0;

        while (true) {
            if (i == attheEnd.size()) break;
            answer.push_back(attheEnd[i]);
            i++;
            if (i == attheEnd.size()) break;

        }
        return answer;
        
        
    }
};