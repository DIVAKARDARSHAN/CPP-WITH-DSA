//.............star pattren..............
//#include<iostream>          
//using namespace std;
//int main()
//{
    //int row,col;
    //for(row=1;row<=5;row=row+1)
    //{
        //for(col=1;col<=row;col=col+1)
        //{
            //cout<<"*"<<" "; 
        //}
        //cout<<endl;
    //}
//}
//out put  
//*            
//* * 
//* * * 
//* * * *
//* * * * * 

//.............number pattren 1............
//#include<iostream>          
//using namespace std;
//int main()
//{
    //int row,col;
    //for(row=1;row<=5;row=row+1)
    //{
        //for(col=1;col<=row;col=col+1)
        //{
            //cout<<col<<" "; 
        //}
        //cout<<endl;
    //}
//}
//out put  
//1            
//1 2 
//1 2 3 
//1 2 3 4
//1 2 3 4 5 

//.............number pattren 2............
//#include<iostream>          
//using namespace std;
//int main()                                                          
//{
    //int row,col;
    //for(row=1;row<=5;row=row+1)
    //{
        //for(col=row;col>=1;col=col-1)
        //{
            //cout<<col<<" "; 
        //}
        //cout<<endl;
    //}
//}                                    
//out put 
//1            
//2 1 
//3 2 1 
//4 3 2 1
//5 4 3 2 1

//.............number pattren 3..................
//#include <iostream>
//using namespace std;
//int main()
//{
    //int row,col;
    //for(row=1;row<=5;row=row+1)
    //{
        //for(col=1;col<=row;col=col+1)
         //{
            //cout<<row<<" ";
         //}
         //cout<<endl; 
    //}
//}
//out put
  //1
  //2 2
  //3 3 3
  //4 4 4 4
  //5 5 5 5 5

//.............alphabet pattren...............
  //#include <iostream>
  //using namespace std;
  //int main()
  //{
    //int row,col;
    //for(row=1;row<=5;row=row+1 )
    //{
        //for(col=1;col<=row;col=col+1)
        //{
            //char name='a'+row-1;
            //cout<<name<<" ";
        //}
        //cout<<endl;
    //}
    //}
    //out put
     //a
     //b b
     //c c c
     //d d d d
     //e e e e e

//.............star in reavers pattren...........
//#include <iostream>
//using namespace std;
//int main()
//{
    //int row,col;
 //for(row=1;row<=5;row=row+1)
  //{
    //for(col=5;col>=row;col=col-1)
    //{
        //cout<<'*'<<" ";
    //}
    //cout<<endl;
  //}
//}
//out put
//* * * * *
//* * * *
//* * *
//* * 
//*

//.............number in reavers pattren...............
//#include <iostream>
//using namespace std;
//int main()
//{
    //int row,col;
    //for(row=5;row>=1;row=row-1)
    //{
        //for(col=1;col<=row;col=col+1)
        //{
            //cout<<col<<" ";
        //}
       //cout<<endl;
    //}
//}
//out put
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1

//.............jumbled number pattren............
//#include<iostream>
//using namespace std;
//int main()
//{
    //int row,col;
    //for(row=1;row<=5;row=row+1)
    //{
        //for(col=5;col>=5-row+1;col=col-1)
        //{
         //cout<<col<<" ";
        //}
       //cout<<endl;
    //}
//}
//OUT PUT
//5
//5 4
//5 4 3
//5 4 3 2
//5 4 3 2 1 

//..............................................................................................................................................................................

//.............space star pattren................
//#include <iostream>
//using namespace std;
//int main()
//{
    //int row,col;
    //for(row=1;row<=5;row=row+1)
    //{
        //for(col=1;col<=5-row;col=col+1)
        //{
            //cout<<"  ";
       //}
        //for(col=1;col<=row;col=col+1)
        //{
            //cout<<"* ";
        //}
        //cout<<endl;
    //}
//}
//out put 
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

//.............number space pattren 1............
//#include <iostream>
//using namespace std;
//int main()
//{
    //int row,col,n;
    //cout<<"\n\nenter number : ";
    //cin>>n;
    //for(row=1;row<=n;row=row+1)
    //{
        //for(col=1;col<=n-row;col=col+1)
        //{
            //cout<<"  ";
        //}
        //for(col=1;col<=row;col=col+1)
        //{
            //cout<<col<<" ";
        //} 
        //cout<<endl;
    //}
//}
//out put
// enter number : 5
//           1
//         1 2
//       1 2 3
//     1 2 3 4 
//   1 2 3 4 5 

//.............number space pattren 2............
//#include <iostream>
//using namespace std;
//int main()
//{
    //int row,col;
    //int n;
     //cout<<"enter the number for n = ";
     //cin>> n;
    //for(row=1;row<=n;row=row+1)
     //{
        //for(col=1;col<=n-row;col=col+1)
        //{
            //cout<<"  ";
        //}
        //for(col=1;col<=row;col=col+1)
        //{
           //cout<<row<<" ";
        //}
        //cout<<endl;
    //}
//}
//out put
//enter number for n = 5
//           1
//         2 2
//       3 3 3
//     4 4 4 4 
//   5 5 5 5 5 

//................number space pattren 3................
//#include <iostream>
//using namespace std;
//int main()
//{
 //int row,col,n;
 //cout<<"\nenter the number : ";
 //cin>>n;
 //for(row=1;row<=n;row=row+1)
 //{
    //for(col=1;col<=n-row;col=col+1)
    //{
      //cout<<"  ";                              
    //}
    //for(col=row;col>=1;col=col-1)
    //{
      //cout<<col<<" ";
    //}
    //cout<<endl;
// }
//}
//out put
//         1
//       2 1
//     3 2 1 
//   4 3 2 1
// 5 4 3 2 1
   
//.............alphabet with space pattren printing.........
//#include <iostream>
//using namespace std;
//int main()
//{
    //int row,col;
    //for(row=1;row<=5;row=row+1)
    //{
        //for(col=1;col<=5-row;col=col+1)
        //{
            //cout<<"  ";
        //}
        //char name;
        //for(name='a';name<='a'+row-1;name=name+1)
        //{
            //cout<<name<<" ";
        //}
        //cout<<endl;
    //}
//}
//out put
//        a
//      a b
//    a b c
//  a b c d
//a b c d e
//---------OR----------
//#include <iostream>
//using namespace std;
//int main()
//{
    //int row,col;
    //int n;
    //cout<<"\nenter the number : ";
    //cin>>n;
    //for(row=1;row<=n;row=row+1)
    //{
        //for(col=1;col<=n-row;col=col+1)
        //{
            //cout<<"  ";
        //}
        //for(col=1;col<=row;col=col+1)
        //{
            //char name = 'A'+col-1;
            //cout<<name<<" ";
        //}
        //cout<<endl;
    //}
//}
// output
//enter number : 5
//            a
//          a b
//        a b c
//      a b c d
//    a b c d e