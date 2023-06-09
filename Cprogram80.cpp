/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   b   c   d   e
    a   b   c   d   e
    a   b   c   d   e        
*/  



#include<iostream>
using namespace std;

class Pattern
{
  
  private:
         int iRow;
         int iCol;
  public:
        Pattern(int X,int Y)
        {
            iRow = X;
            iCol = Y;
        }  
        void Display()
        {
            int i = 0;
            int j = 0;
            char ch = '\0';
            for(i = 1 ;i <= iRow ; i++)
            {
                for(j = 1 ,ch ='a';j <= iCol ; j++)
                {
                    cout<<ch<<"\t";
                     ch++;
                }
                 
                 cout<<"\n";
                 cout<<"\n";
            }
               

        }     
};
int main()
{
      int iNo1 = 0;
      int iNo2 = 0;

      cout<<"Enter number of rows : "<<"\n";
      cin>>iNo1;

      cout<<"Enter number of columns : "<<"\n";
      cin>>iNo2;
     
     Pattern Pobj(iNo1,iNo2);
     
     Pobj.Display();
   
    return 0;
}