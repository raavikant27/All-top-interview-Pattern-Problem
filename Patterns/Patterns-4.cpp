// 1

// 22

// 333

// 4444

// 55555

class Solution {
public:

    // Function to print pattern4
    static void pattern4(int n) {
        
        // Outer loop which will loop for the rows.
        for (int i = 1; i <= n; i++) {
            
            // Inner loop which loops for the columns.
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            /* As soon as stars for each iteration are printed,
             move to the next row and give a line break */
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    
    //Create an instance of Solution class
    Solution sol;
    
    sol.pattern4(N);

    return 0;
}


// Complexity Analysis: 
// Time Complexity : O(N2). As the outer loop runs for N time and the inner loop runs incrementally in each iteration(1+2+3+...+N), which is equal to (N*(N+1)/2). So, overall it is O(N2).

// Space Complexity :O(1). As no extra space is being used to print the patterns.