//
//  main.cpp
//  CE_33_sum_array
//
//  Created by Pradeep Kapoor on 22/07/25.
//

#include <iostream>
using namespace std;
int main() {
    // insert code here...
    int A[4] = {1,2,3,4};
    int sum = 0;
    for(int i = 0; i<4; i++)
        sum += A[i];
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}
