//..................grtting even/odd numbers using while loop...................
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,opp;     
//     cout<<"enter the nth number: ";
//     cin>>n;
//     cout<<"choose any one of them \n 1.odd \n 2.even\n";
//     cin>>opp;
//    if(opp==1)
//    {
//     while(opp<=n)
//     {
//       cout<<opp<<" ";
//       opp=opp+2;
//     }
//    }
//    else if(opp==2)
//    {
//      while(opp<=n)
//      {
//        cout<<opp<<" ";
//        opp=opp+2;
//      }
//    }
//    else
//     {
//         cout<<"wrong opption";
//     }
// }

//..................printing maths tables using while loop...................
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"enter which table you want to print: ";
//     cin>>n;
//     while(i<=10)
//     {
//         cout<<n<<'*'<<i<<'='<<n*i<<endl;
//         i=i+1;
//     }
// }
    
//..................printing sum of number in do-while..............
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i=1,sum=0,n;
//     cout<<"entir the number: ";
//     cin>>n;
//     do{
//         sum=sum+i;
//         i++;
//     }while(i<=n);
//     cout<<sum;
// }

//......................printing maths tables uaing do-while loop....................
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i=1,n;
//   cout<<"enter the number: ";
//   cin>>n;
//   do{ 
//     cout<<n<<'*'<<i<<'='<<n*i<<endl;
//     i++;
//   }while(i<=10);
// }

//............break statement in for loop...............
// #include <iostream>
// using namespace std;
// int main()
// {
// for (int i = 0; i < 10; i++) {
//   if (i == 5) {
//     break;
//   }
//   cout << i << "\n";
// }
// }

//............continue statement for loop...............
// #include <iostream>
// using namespace std;
// int main()
// {
// for (int i = 0; i < 10; i++) {
//   if (i == 5) {
//     continue;
//   }
//   cout << i << "\n";
// }
// }
//............break statement in while loop...............
// #include <iostream>
// using namespace std;
// int main()
// {
// int i = 0;
// while (i < 10)
//  {
//   cout << i << "\n";
//   i++;
//   if (i == 7)
//    {
//     break;
//    }
//  }
// }

//............continue statement in while loop...............
// #include <iostream>
// using namespace std;
// int main()
// {
// int i = 0;
// while (i < 10)
//  {
//    i++;
//    if (i == 6)
//    {
//     continue;
//    }
//   cout << i << "\n";
// }
// }

//.................continue statement in do-while loop...................
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i = 0;
//   do
//   {
//    i++;
//    if(i==6)
//    {
//     continue;
//    }
//    cout<<i<<" ";
//   } while (i < 10);
// }

//.................break statement in do-while loop...................
// #include <iostream>
// using namespace std;
// int main()
// {
//   int i = 1;
//   do
//   {
//    if(i==6)
//    {
//     break;
//    }
//    cout<<i<<" ";
//    i++;
//   } while (i < 10);
// }

