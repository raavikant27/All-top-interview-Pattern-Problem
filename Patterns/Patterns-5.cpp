
// 12345

// 1234

// 123

// 12

// 1

class Solution {
public:
    void pattern6(int n) {

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout << j;
            }
            cout<<endl;
        }
        

    }
};

//understand the concept here i some change but out will be same 
// Use a for loop to iterate from 0 to N-1, where N is the number of rows. This loop will ensure to print each row of the pattern.
// Inside this loop, run another loop from 0 to (N - current value of the outer loop variable). It will ensure to decrease the number of columns as the row value increases.
// Now, print the current value of inner loop + 1, it will print the column number strating from 1 to N.
// Move to a new line after printing each row to maintain the right-angled triangle shape of the pattern.

