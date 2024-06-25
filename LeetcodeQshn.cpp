// .....................adding digit.....................
// #include <iostream>
// using namespace std;
// int main ()
// {
//     int num;
//     cout<<"\nenter the numbers: ";
//     cin>>num;
//     while(num>=9)
//     {
//        int rem,ans=0;
//        while(num!=0)
//        {
//         rem=num%10;
//         num/=10;
//         ans=rem+ans;
//        }
//        num=ans;
//     }
//      cout<<"here each digit you entred will be added\nif the answer comes in two digit form again the answer will be added\n your answeer is: "<<num<<"\n";
// }

//......................checking leep year.....................
// #include <iostream>
// using namespace std;
// int main()
// {
//    int num;
//    cout<<"enter the year to check leep year: ";
//    cin>>num;
//    if(num%400==0)
//    {
//       cout<<"entred number is leep year";
//    }
//    else if(num%4==0 && num%100!=0)
//    {
//       cout<<"entred number is leep year";
//    }
//    else
//    {
//       cout<<"not a leep year";
//    }
// }

//......................revers integer.....................
#include <iostream>
using namespace std;
int main()
{
   int num,rem,mul=1,ans=0;
   cout<<"enter the number: ";
   cin>>num;
      while(num!=0)
     { 
      rem=num%10;
      num=num/10;
      ans=ans*10+rem;
     }
     cout<<ans;

}

 