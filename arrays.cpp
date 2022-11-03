#include<iostream>
using namespace std;

int main(){
    //example in array
    int marks[4] = {90,80,88,75};
    int mathMarks[4];
    mathMarks[0]=2278;
    mathMarks[1]=2278;
    mathMarks[2]=2278;
    mathMarks[3]=2278;

    cout<<"the marks is "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    cout<<"the mathMarks is "<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    //you can change the value of array
    marks[2]=455;

    cout<<"these marks are "<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // printing array using loops
    for (int i = 0; i < 4; i++)
    {
     cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
        /* code */
    }
    //using while and do while loop
    

    return 0;
}