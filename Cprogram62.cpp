/// Input : 7
// Output : a   b   c   d   e   f   g
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
        cout<<ch<<"\t";
        
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