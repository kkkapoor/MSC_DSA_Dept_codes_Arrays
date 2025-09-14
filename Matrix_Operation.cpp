//
//  main.cpp
//  PP_matrix_operation
//
//  Created by Pradeep Kapoor on 23/07/25.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int A[2][3] = {1,1,1,1,1,1};
    int B[2][3] = {2,2,2,2,2,2};
    int C[2][3];
    for(int i = 0;i<2;i++)
    {
        for(int j = 0;j<3;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i = 0;i<2;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cout << C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
