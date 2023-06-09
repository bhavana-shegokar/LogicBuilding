// Input : 7
// Output : a   1   b   2   c   3   d   4   e   5   f   6   g   7

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
    char ch = '\0';
    for(iCnt = 1,ch = 'a';iCnt <= iNo;iCnt++,ch++)
    {
        cout<<ch<<"\t"<<iCnt<<"\t";
        
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