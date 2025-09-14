//
//  main.cpp
//  CE_35_min
//
//  Created by Pradeep Kapoor on 22/07/25.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int A[] = {2,5,1,984,94};
    int min = A[0];
    for(int x:A)
    {
        if (x < min)
        {
            min = x;
        }
    }
    cout<<min<<endl;
    return 0;
}
