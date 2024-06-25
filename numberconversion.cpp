//...............decimal to binary..........
// #include <iostream>
// using namespace std;
// int main()
// {
//  int num,rem,ans=0,mul=1;
//  cout<<"enter the number:";
//  cin>>num;
//  while(num>0)
//  {
//     rem=num%2;
//     num/=2;
//     ans+=rem*mul;
//      mul*=10;
//  }
//  cout<<ans;
// }
  
//...............binary to decimal..........
// #include <iostream>
// using namespace std;
// int main()
// {
//  int num,rem,ans=0,mul=1;
//  cout<<"enter the binary number: ";
//  cin>>num;
//  while(num>0)
//  {
//     rem=num%10;
//     num/=10;
//     ans+=rem*mul;
//      mul*=2;
//  }
//  cout<<ans;
// }

//...............decimal to octat.............
// #include <iostream>
// using namespace std;
// int main()
// {
//   int num,rem,ans=0,mul=1,temp;
//   cout<<"enter the decimal number: ";
//   cin>>num;
//   while(num>0)
//   {
//     rem=num%8;
//     num=num/8;
//     ans=rem*mul+ans;
//     mul*=10;
//   }
//   cout<<ans;
// }

//...............octal to decimal.............
// #include <iostream>
// using namespace std;
// int main()
// {
//   int num,rem,ans=0,mul=1,temp;
//   cout<<"enter the decimal number: ";
//   cin>>num;
//   while(num>0)
//   {
//     rem=num%10;
//     num=num/10;
//     ans=rem*mul+ans;
//     mul*=8;
//   }
//   cout<<ans;
// }
 
//...............binary to octal.............. 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num,ans=0,rem,mul=1,ans1=0;
//     cout<<"enter the binary number: ";
//     cin>>num;
//     while(num!=0)
//     {
//         rem=num%10;
//         num=num/10;                                            //  <------- (yet to complete/not solved)
//         ans=rem*mul+ans;
//         mul=mul*2;
//        cout<<ans;
//     }
//      while(ans!=0)
//      { 
//          rem=ans%8;
//          num=ans/8;
//          ans1=rem*mul+ans1;
//          mul=mul*10;
//      }
//     cout<<ans1;
// }