class Solution {
private:
    void printUpperHalf(int n){
        for(int i=0;i<n;i++){
            for(int j=1;j<=n-i;j++){
                cout << "*";
            }
            for(int j=1;j<=2*i;j++){
                cout<< " ";   // space hona chahiye
            }
            for(int j=1;j<=n-i;j++){
                cout << "*";
            }
            cout<< endl;
        }
    }

    void printLowerHalf(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<< "*";
            }
            for(int j=1;j<=(2*n-2)-(2*i);j++){
                cout<< " ";
            }
            for(int j=0;j<=i;j++){
                cout<< "*";
            }
            cout<<  endl;
        }
    }

public:
    void pattern19(int n) {
        printUpperHalf(n);
        printLowerHalf(n);
    }
};
