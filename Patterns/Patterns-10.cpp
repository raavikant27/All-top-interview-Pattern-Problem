// Approach: 
// Use nested for loops to print the pattern. First, figure out what is the total number of rows for which the pattern needs to be printed.
// Then, print the asterisks incrementally till half the total number of rows and after that decrease the asterisks according to the row number.
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:



// *

// **

// ***

// ****

// *****

// ****

// ***

// **

// *



// Print the pattern in the function given to you.
class Solution {

  private:
     void pattern2(int n){



        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
     }

     void pattern5(int n){

        for( int i=1;i<=n;i++){
            for( int j=1;j<=n-i+1;j++){
                cout<< "*";
            }
            cout<<endl;
        }
     }




public:

    void pattern10(int n) {
        pattern2(n);
        pattern5(n-1);

    }
};