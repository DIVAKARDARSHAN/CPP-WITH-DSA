//.........comparision operators............
  //#include <iostream>
  //using namespace std;
  //int main()
//{
    //int a,b;
    //cout<<"enter the number for a: ";
    //cin>>a;
    //cout<<"enter the number for b: ";
    //cin>>b;
 //...checking grater then '>'...
   //if(a>b)
   //cout<<"\nyes a is grater then b";
   //else
   //cout<<"\nno b is grater then a";
 //...checking lesser then '<'...
   //if(a<b)
   //cout<<"\nyes a is lesser then b";
   //else
   //cout<<"\nno b is lesser then a";
 //...checking one equal to anotherone '=='...
   //if(a==b)
   //cout<<"\nyes a is equals to b";
   //else
   //cout<<"\nno a is not equals to b";
 //...checking lesser then or equal to'<='...
   //if(a<=b)
   //cout<<"\nyes a is lesser then equals to b";
   //else
   //cout<<"\nno a is not lesser then equals to b";
 //...checking grater then or equal to'>='...
   //if(a>=b)
   //cout<<"\nyes a is grater then equals to b";
   //else
   //cout<<"\nno a is not grater then equals to b";
 //....checking one is not equal to anotherone '!='....
   //if(a>=b)
   //cout<<"\nyes a is not equals to b";
   //else
   //cout<<"\nno a is not equals to b";
//}

//........binary operators........
 
  #include <iostream>
  using namespace std;
  int main()
{ 
    int a,b,c,sign;
    cout<<"enter the number for a: ";
    cin>>a;
    cout<<"enter the number for b: ";
    cin>>b;
    cout<<"\nchoose any one operator for your numbers \n(1) '*'\n(2) '/'\n(3) '%'\n(4) '+'\n(5) '-'\n\n";
    cin>>sign;
    sign= '*','/','%','+','-';
      
    if(sign='*')
    {
        c=a*b;
        cout<<"your answer is:"<<c;
    }
    else if(sign='/')
     {
        c=a/b;
        cout<<"your answer is:"<<c;
     }
    else if(sign='%')
     {
        c=a%b;
        cout<<"your answer is:"<<c;
     }
    else if(sign='+')
     {
        c=a+b;
        cout<<"your answer is:"<<c;
     }
    else if(sign='-')
     {
        c=a-b;
        cout<<"your answer is:"<<c;
     }
    else
     {
        cout<<"you choosed a wrong option";
     }
     cout<<endl;
}

