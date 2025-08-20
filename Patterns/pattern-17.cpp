class Solution {
public:
    //Function to print pattern17
    void pattern17(int n) {
        // Outer loop for the number of rows.
        for(int i = 1; i <=n; i++) {
            
            // Printing spaces before characters.
            for(int j = 0; j <= n - i - 1; j++) {
                cout << " ";
            }
            
            // Printing characters.
            char ch = 'A';
           // int breakpoint = (2 * i + 1) / 2;
            for(int j = 1; j <= 2 * i - 1; j++) {
                cout << ch;
                if(j <i )
                    ch++;
                else
                    ch--;
            }
            for( int j=1;j<=n-i;j++){
                cout << " ";
            }
            
            // Move to the next line for the next row.
            cout << endl;
        }
    }
};