// class Solution {
// public:
//     void pattern7(int n) {

//     for(int i=0;i<n-1;i++){
//         for(int j=1;j<=n-i;j++){
//             cout << " ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout << "*";
//         }
//         for(int j=1;j<=n-i;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }


//     }
// };



class Solution {
public:
    void pattern7(int n) {
        for (int i = 0; i < n; i++) {
            // Print spaces
            for (int j = 1; j <= n - i - 1; j++) {
                cout << " ";
            }

            // Print stars
            for (int j = 1; j <= 2 * i + 1; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};
