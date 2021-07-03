/*4) reverse of string
 string s = techrel
 s.length
 -1


 o/p: lerhcet */


 #include<iostream>
 using namespace std;
 int main()
    {
     int i,k=0;
    string s;
    cout<<"enter any string";
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
      k++;
    }
    cout<<"reverse of string: ";
    for(i=k-1;i>=0;i--)
    {
    cout<<s[i];
    }
    return 0;
    }
