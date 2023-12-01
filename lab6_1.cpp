#include<iostream>
using namespace std;

int main(){
    int num;
    int evenCount = 0;
    int oddCount = 0;
    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        if (num%2 == 0) {
            evenCount++;
        }else{
            oddCount++;
        }
        cout << "Enter an integer: ";
        cin >> num;
    }

    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;
    return 0;
}
