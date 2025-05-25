#include <iostream>
using namespace std;


int main(){

    int n;
    cout  << "Enter the size of array: ";
    cin >> n;

    int A[n];

    for (int x:A){
        cout << x <<endl; //Imprimiria basura
    }

    /*
    int A[5];

    int B[5] = {2, 4, 6 ,8, 10};

    int i;
    for (i = 0; i<5; i++){
        printf("%d", B[i]);
    }
    
    */
    

    return 0;
}