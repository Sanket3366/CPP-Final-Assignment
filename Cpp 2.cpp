#include <iostream>
#include <string>
using namespace std;

class charinput
      {
public:

    string s = " ";

    void sum(char  c)
    {
        s = s + (c);
    }
    std::string getValue() { 
        return s; 
    }
    }     ;

class numinput     :      public charinput
{
public:
string getValue(){
 return numinput ::  s;
        }

void sum(char e){
            if(e >= 'a' && e <= 'z'){
                return;
            }else{
                charinput::sum(e);
            }
        }

};

int main()
{
    charInput *inputC = new charinput();
    numInput *inputN = new numinput();
    inputN->add('1');
    inputN->add('a');
    inputN->add('0');
    cout << inputN->getValue();
   
}