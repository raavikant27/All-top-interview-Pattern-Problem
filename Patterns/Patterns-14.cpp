class Solution {
public:
    void pattern14(int n) {


        for( int i=0;i<n;i++){
              


              for( char ch='A';ch<='A'+i;ch++){
                cout<< ch;
              }
              cout<< endl;


        }

    }
};


// Approach: 
// Use a for loop to iterate from 0 to N-1, where N is the number of rows. This loop will ensure to print each row of the pattern.
// The inner loop will run for i times and print alphabets from 'A' to 'A' + (row number).
// After completing a row give a line break, to make sure next row gets printed as well.
// A

// AB

// ABC

// ABCD

// ABCDE
