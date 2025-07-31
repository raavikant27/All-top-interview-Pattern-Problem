
// *****

// *****

// *****

// *****

// *****

// Approach: 
// step-1:Use a for loop to iterate from 0 to (N-1), where N is the number of rows. This loop will ensure to print each row of the pattern.
// step-2:Inner loops makes sure that N stars are printed in every line, eventually since the inner loop will run for N times, it will make sure that N stars are printed in N lines, resulting in a square of size N x N, which is the desired pattern
// Step-3:Now, print the asterisks for each column of a row, inside the inner loop.
// Step-4:Move to a new line after printing each row to maintain the right-angled triangle shape of the pattern.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to print pattren1
    void pattern1(int n) {
        
        // Outer loop will run for rows.
        for (int i = 0; i < n; i++) {
            
            // Inner loop will run for columns.
            for (int j = 0; j < n; j++) {
                cout << "*";
            }
            /* As soon as n stars are printed, move
            to the next row and give a line break.*/
            cout << endl;
        }
    }

};

int main() {
    int N = 4;
    
    //Create an instance of the Solution class
    Solution sol;
    
    sol.pattern1(N);
    
    return 0;
}

