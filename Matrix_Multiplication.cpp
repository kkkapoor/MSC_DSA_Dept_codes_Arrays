//
//  main.cpp
//  SE_7_Matrix_Multiplication
//
//  Created by Pradeep Kapoor on 23/07/25.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int A[10][10],B[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;
    cout<<"Enter rows and columns for first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns for second matrix: ";
    cin>>r2>>c2;
    while(c1 != r2)
    {
        cout<<"Error!...Columns of first matrix and rows of second matrix should be same"<<endl;
        cout<<"Input again: "<<endl;
        cout<<"Enter rows and columns for first matrix: ";
        cin>>r1>>c1;
        cout<<"Enter rows and columns for second matrix: ";
        cin>>r2>>c2;
    }
    cout<<endl<<"Enter elements for first matrix: "<<endl;
    for(i = 0;i<r1;i++)
    {
        for(j = 0;j<c1;j++)
        {
            cout<<"Enter element a"<<i+1<<j+1<<" : ";
            cin>>A[i][j];
        }
    }
    cout<<endl<<"Enter elements for second matrix: "<<endl;
    for(i = 0;i<r2;i++)
    {
        for(j = 0;j<c2;j++)
        {
            cout<<"Enter element b"<<i+1<<j+1<<" : ";
            cin>>B[i][j];
        }
    }
    for(i = 0;i<r1;i++)
    {
        for(j = 0;j<c2;j++)
        {
            mult[i][j] = 0;
            for(k = 0;k<c1;k++)
            {
                mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout<<endl<<"Output Matrix: "<<endl;
    for(i = 0;i<r1;i++)
    {
        for(j = 0;j<c2;j++)
        {
            cout<<" "<<mult[i][j];
            if(j == c2-1)
            {
                cout<<endl;
            }
        }
    }
    return 0;
}
