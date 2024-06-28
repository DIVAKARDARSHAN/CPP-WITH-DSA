//..............sum & mul of two number...............
// #include <iostream>
// using namespace std;
//   //function for sum
//   int sum (int m,int n)
//   {
//     int ans=m+n;
//     return ans;
//   }
//   //function for mul
//   int mul (int m ,int n)
//   {
//     int ans=m*n;
//     return ans;
//   }
//   //function for void
//   void fun()
//   {
//     cout<<"you got your answer";
//   }
//  int main()  
//  {
//    int a,b;
//    cout<<"enter the number for a and b: ";
//    cin>>a>>b;
//    fun();
//    cout<<endl;
//    cout<<sum(a,b);   //function call of sum
//    cout<<endl; 
//    cout<<mul(a,b);   //function call of  mul
//  }

//.............checking prime and fact...............
// #include <iostream>
// using namespace std;
//  void prime(int n)
//  {
//    if(n<2)
//    {
//      cout<<"no its not prime"<<endl;
//      return ;
//    }
//    for(int i=2;i<n;i++)
//    {
//      if(n%i==0)
//      {
//      cout<<"no its not prime";
//      return ;
//      }
//    }
//   cout<<"yes its prime";
//   return ;
//  }
//  int fact(int n)
//  {
//     int ans=1;
//     for(int i=1;i<=n;i++)
//         ans=ans*i;
//         return ans;
//  }
//  int main()
//  {
//     int a;
//     cout<<"\nenter the number: ";
//     cin>>a;
//     prime(a);
//     cout<<endl;
//     cout<<"the factorial for "<<a<<" is: "<<fact(a)<<endl;
//  }

//.............pass by value....................
// #include <iostream>
// using namespace std;
// void swap (int m,int n)
// {
//     int o;
//     o=m;
//     m=n;
//     n=o;
// }
// int main()
// {
//     int a,b;
//     cout<<"enter the number: ";
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b;
// }

//.............pass br reference..............
// #include <iostream>
// using namespace std;
// void swap(int &m,int &n)
// {
//     int o;
//     o=m;
//     m=n;
//     n=o;
// }
// void swap(float &c,float &d)
// {
//     float k;
//     k=c;
//     c=d;
//     d=k;
// }
// int main()
// {
//     int a,b;
//     cout<<"enter the number: ";
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
//     float c=3.33,d=4.44;
//     swap(c,d);
//      cout<<c<<" "<<d;
// }