#include <iostream>
using namespace std;

int main(void) {
    int N, i;
    cin >> N;
    // Declare the two arrays
    int numArrayA[N], numArrayB[N], sumArray[N];

    for(i=0;i<N;i++) sumArray[i]=0;

    // Get the numArrayA
    for (i=0; i<N; i++) {
        cin >> numArrayA[i];
    }

    // Get the numArrayB
    for (i=0; i<N; i++) {
       cin >> numArrayB[i];
    }

    // Write your logic here:

  for (i=0; i<N; i++) {
    sumArray[i]=numArrayA[i]+numArrayB[i];
    }



    // Print the sumArray
    for (i=0; i<N; i++) {
        cout << sumArray[i] << " ";
    }
    cout << endl;
    return 0;
}
