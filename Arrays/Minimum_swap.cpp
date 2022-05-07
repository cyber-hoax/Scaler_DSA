//
//  Minimum_swap.cpp
//  Arrays
//
//  Created by CYBERHOAX on 08/05/22.
//

#include <stdio.h>
#include "iostream"

using namespace std;

int main(){
    int arr[]= {1, 12, 10, 3, 14, 10, 5 };
    int k = 8;
    
    int n = size(arr);
    int count = 0;
        for (int i = 0; i < n; ++i)
            if (arr[i] <= k)
                ++count;
        int bad = 0;
        for (int i = 0; i < count; ++i)
            if (arr[i] > k)
                ++bad;
        int ans = bad;
    
    cout << count << endl;
    cout << bad << endl;
        for (int i = 0, j = count; j < n; ++i, ++j)
        {
            if (arr[i] > k)
                --bad;
            if (arr[j] > k)
                ++bad;
            ans = min(ans, bad);
        }
        return ans;
    
}
