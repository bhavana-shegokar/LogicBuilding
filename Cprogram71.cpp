// Input :  5
// Output : 1   2   3   4  5   4   3   2   1   

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
        cout<<iCnt<<"\t";
        
    }
    for(iCnt = iNo-1;iCnt >= 1;iCnt--)
    {
        cout<<iCnt<<"\t";
        
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