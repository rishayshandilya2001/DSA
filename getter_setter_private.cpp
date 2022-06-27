#include <iostream>
using  namespace std;

class cricketer
{
    private:
    string team;
    
    public:
    string name;
    int matches;
    
    void setteam(string s)
    {
        team=s;
    }
    
    void displayteam()
    {
        cout<<team;
    }
};

int main()
{
  cricketer c2;
  c2.name="rohit";
  c2.matches=250;
  c2.setteam("mi");
 c2.displayteam();
  


 
}
