// Write a program which accepts the marks and display the class accordingly
//  0 to 34         Fail
//  35 to 49        Pass Class
//  50 to 59        Second Class
//  60 to 74        First Class
// 75 to 100        First Class with Deistinction

#include<iostream>       // For printf and scanf
using namespace std;
class Number
{   private:
        float fMarks;

        public:
        Number(float X)
        {
            fMarks = X;
        }
void DisplayClass()
{
    if((fMarks < 0.0f) || (fMarks > 100.00f))    //Filter
    {
      cout<<"Invalid Input\n";
      cout<<"Please enter the marks in between the range 0 to 100";
        return;
    }

    if((fMarks >= 0.0f) && (fMarks < 35.00f))
    {
       cout<<"You are fail\n";
    }
    else if((fMarks >= 35.00f) && (fMarks < 50.00f))
    {
           cout<<"You got pass class\n";
    }
    else if((fMarks >= 50.00f) && (fMarks < 60.00f))
    {
           cout<<"You got second class\n";  
    }
    else if((fMarks >= 60.00f) && (fMarks < 75.00f))
    {
         cout<<"You got first class\n";
    }
    else if((fMarks >= 75.00f) && (fMarks <= 100.00f))
    {
       cout<<"You got first class with distinction\n";
    }
}
};
int main()
{
    float fValue = 0.0f;

       cout<<"Please enter your percentage : \n";
       cin>>fValue;
       Number nobj(fValue);

        nobj.DisplayClass();

        return 0;
}
