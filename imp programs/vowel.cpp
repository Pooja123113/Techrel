/*7) check charcter is vowel or constant
vowel :  a,e,i,o,u
consonant :  remaining other alphabet */
#include<iostream>
using namespace std;
 int main()
 {
   char c;
   cout<<"enter an alphabet: ";
   cin>>c;
   if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u')
   {
   cout<<"character is vowel";
   }
   else
   {
   cout<<"character is consonant";
   }
   return 0;

 }

