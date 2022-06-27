#include <iostream>
using  namespace std;

class complex
{
    private:
    int a;
    int b;
    
    public:
    complex(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
   
   void  display()
   {
       cout<<this->a<<"+i"<<this->b;
   }
   
   void  sum(complex c3)
   {
       a=a+c3.a;
       b=b+c3.b;
   }
    
};

int main()
{
  complex c1(2,3);
  complex c2(3,4);
  c1.sum(c2);
  c1.display();
  


 
}
