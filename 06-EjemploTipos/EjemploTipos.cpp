#include <iostream>
#include <cassert>
#include <string>


int main() {
   
    using namespace std;

    //boolean
    assert(true==true);
    assert(true!=false);
    assert(true and true);
    assert(true or false);
    assert(true and true);
    assert(true == not false);
             
    //char         
    assert(65 =='A');
    assert(65 !='B');
    assert('a'<='a');
    assert('b'>='a');
    assert('A' + 'B' == 131); 
    assert('B' - 'A'== 1); 
    assert('A' * 'B' == 4290);
    assert('B' / 'A' == 1);
    assert('B' % 'A' == 1);

    //unsigned
    assert(1==1);
    assert(1!=2);
    assert(0<=2);
    assert(2>=1);
    assert(1+1==2);
    assert(5-1==4);
    assert(20*0==0);
    assert(20/10==2);
    assert(20%3==2);

    //int
    assert(-1==-1);
    assert(1!=-2);
    assert(-10<=2);
    assert(2>=-20);
    assert(-10+20==10);
    assert(1-2==-1);
    assert(-20*1==-20);
    assert(-20/10==-2);
    assert(-20%3==-2);

    //double
    assert(1.0==1.0);
    assert(1.0!=2.0);
    assert(1.0<=2.0);
    assert(2.0>=1.0);
    assert(1.0+2.0==3.0);
    assert(3.0-1.0==2.0);
    assert(2.0*2.0==4.0);
    assert(10.0/2.0==5.0);

    //string
    assert("a"=="a");
    assert("a"!="b");
    string abc = "abc";
    assert(abc + "def" == "abcdef");
    assert("abc"<="def");
    assert("def">="abc");
    assert(3 == abc.length());
}