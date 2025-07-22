// EXPERIMENT - 2
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
//Problem statement- Write a program which includes different data types of C++.


#include <iostream>
using namespace std;
int main(){
 
   int a;
   cout<<"Enter any integer:";
   cin>>a;
   cout<<"Integer = "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;
   
   float b;
   cout<<"Enter any number with decimal:";
   cin>>b;
   cout<<"Float= "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;
   
   double c;
   cout<<"Enter any number with decimal:";
   cin>>c;
   cout<<"Double= "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;
   
   string d;
   cout<<"Enter any string:";
   cin>>d;
   cout<<"String = "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;
   
   char e;
   cout<<"Enter any character:";
   cin>>e;
   cout<<"Character = "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;
   
   bool f;
   cout<<"Enter any boolean:";
   cin>>f;
   cout<<"Boolean = "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;
  return 0;
}


/*Sample Output :
Enter any integer:15   
Integer = 15 and size is 4 bytes   
Enter any number with decimal:17.65   
Float= 17.65 and size is 4 bytes   
Enter any number with decimal:13.98   
Double= 13.98 and size is 8 bytes   
Enter any string:Hello   
String = Hello and size is 32 bytes   
Enter any character:h   
Character = h and size is 1 bytes   
Enter any boolean:false   
Boolean = 1 and size is 1 bytes */
