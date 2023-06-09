/*
    Input : 

    Row : 3
    Col : 5

    Output : 
    a   a   a   a   a
    b   b   b   b   b
    c   c   c   c   c
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
            for(i = 1 ,ch = 'a';i <= iRow ; i++,ch++)
            {
                for(j = 1 ;j <= iCol ; j++)
                {
                    cout<<ch<<"\t";
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