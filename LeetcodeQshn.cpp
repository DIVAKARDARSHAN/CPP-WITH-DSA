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
// #include <iostream>
// using namespace std;
// int main()
// {
//    int num,rem,mul=1,ans=0;
//    cout<<"enter the number: ";
//    cin>>num;
//       while(num!=0)
//      { 
//       rem=num%10;
//       num=num/10;
//       ans=ans*10+rem;
//      }
//      cout<<ans;
// }

//.................power of 2..................
// #include <iostream>
// using namespace std;
// int main()
// {
//    int num ;
//    cout<<"enter the number: ";
//    cin>>num;
//    if(num<1)
//    {
//      cout<<"not p11ower of 2";
//    }
//    while(num!=1)
//    {
//       if(num%2==1)
//       {
//          cout<<"not p22ower of 2";
//       }
//      else
//      {
//       num=num/2;
//      }
//    }
//     cout<<"it is power of 2";
// }

//.................square root of x......................
// #include <iostream>
// using namespace std;
// int main()
// {
//     int l=0,x,mid;
//     cout<<"enter the : ";
//     cin>>x;
//      while(l<=x)
//      {
//         mid=l+(x/2);
//         if(mid*mid==x)                                        <-------yet to complete
//         {
//          cout<<mid;
//         }
//         else if (mid*mid>=x)
//         {
//         cout<< mid - 1;
//         }
//         else
//         {
//           l=l+1;
//         }
//      }
//    cout<< l-1;
// }

//...................pallindrome number..............
// #include <iostream>
// using namespace std;
// int main()
// {
//   int ans=0,rem,x,num;
//   cout<<"enter the number: ";
//      cin>>x;
//     num=x;
//      if(x<0)
//    {
//      cout<<"not a palllllindrome";
//    }
//    do
//    {
//       rem=num%10;
//       num=num/10;
//         if(ans>__INT_MAX__/10)
//         {
//          cout<<"not aaaaa pallindrome";
//         }
//       ans=ans*10+rem;
//    }while(num!=0);
//    if(ans==x)  
//     {
//     cout<<"pallindrome";
//    }
//    else
//    {
//      cout<<"not a pallindrome";
//    }
// }