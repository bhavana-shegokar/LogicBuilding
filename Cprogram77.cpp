/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    1   2   3   4   5
    1   2   3   4   5
    1   2   3   4   5

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
            for(i = 1 ;i <= iRow ; i++)
            {
                for(j = 1 ;j <= iCol ; j++)
                {
                    cout<<j<<"\t";
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