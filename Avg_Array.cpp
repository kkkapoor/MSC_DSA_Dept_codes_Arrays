//
//  main.cpp
//  SE_6_Avg_Array
//
//  Created by Pradeep Kapoor on 23/07/25.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int n,avg;
    float A[100],sum = 0.0;
    cout<<"Enter a number for array: ";
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cout<<i+1<<"."<<" "<<"Enter a number: ";
        cin>>A[i];
        sum += A[i];
    }
    avg = sum/n;
    cout<<"Average is: "<<avg<<endl;
    return 0;
}
