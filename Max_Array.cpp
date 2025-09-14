//
//  main.cpp
//  CE_34_Max
//
//  Created by Pradeep Kapoor on 22/07/25.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int A[] = {1,3,9,6,7};
    int max;
    max = A[0];
    for(int i = 1;i<5;i++)
    {
        if(A[i]>max)
            max = A[i];
    }
    cout<<max<<endl;
    return 0;
}
