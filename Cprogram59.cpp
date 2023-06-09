
// Input : 7
// Output : 0   1   2   3   4   5   6
#include<iostream>
using namespace std;
class Pattern
{
    
    private:
            int iNo;
    public:
         Pattern(int X)
         {
            iNo = X;
         }        
void Dispaly()
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        cout<<iCnt-1<<"\t";
    }
    cout<<"\n";
}
};

int main()
{
     int iValue = 0;

     cout<<"Enter Number of Symbol :"<<"\n";
     cin>>iValue;

     Pattern Pobj(iValue);


     Pobj.Dispaly();




    return 0;
}