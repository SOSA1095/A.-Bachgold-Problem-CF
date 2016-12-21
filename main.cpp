#include <iostream>

using namespace std;

int main()
{
    int A;
    cin >> A;
    if(A%2 == 0){
        cout << A/2 << endl;
        for(int iA=0; iA<A/2 ; iA++){
            cout << "2 ";
        }
        cout << endl;
    }else{
        cout << A/2 << endl;
        for(int iA=0; iA<A/2-1;iA++){
            cout << "2 ";
        }
        cout << "3" << endl;
    }
    return 0;
}
