//..................grtting even/odd numbers...................
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

//..................printing maths tables...................
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

#include <iostream>
using namespace std;
int main()
{
  int i=1;
 while(i<=10)
 {
    if(i==4)
    {
        continue;
    }
    cout<<i<<" ";
    i++;
  } 
}