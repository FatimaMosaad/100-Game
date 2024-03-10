
//File:CS112_A1_T2_Game1_20231119.cpp
//purose:The players take numbers from 1 to 10 and whoever collects number  100 first is the winner   
//Auther:Fatima Mosaad Eid Mohammed
#include <iostream>
using namespace std ;
int main()
{ //welcome messsage 
   cout <<"**welcome to 100 game**"<< endl;
     
// SET  num1,num2 sum
    int num1,num2,sum=0;

    // Game plating
    while (true) {  
  
    
    cout<<"player1:please enter number from 1 to 10";
    cin >>num1;
    while(num1<1||num1>10)
    {
    cout <<"player 1:please enter correct number";
    cin >>num1;
    }
    sum=sum+num1;
    
    cout <<"sum="<<sum<< endl;
    
  // if sum >100
     while(sum>100)
     {
        sum=sum-num1;
        cout<<"player1 :please enter smaller number";
        cin>> num1;
        sum=sum+num1;
     
        cout<<"sum="<<sum<<endl;
     }
     

     //if player1 win
     if (sum==100)
     {
        cout <<"player 1 is winner"<<endl; 
        break;

     }
    
     cout <<"player2:please enter number from 1 to 10";
     cin >>num2;
     while (num2<1||num2>10)
     {
     cout<<"player2:please enter correct number"<<endl;
     cin >>num2;
     }
     sum=sum+num2;
     cout <<"sum="<<sum<<endl;

     //if sum>100
     while (sum>100)
     {
        sum=sum-num2;
        cout <<"player2:please enter smaller number ";
        cin >.num1;
        sum=sum+num2;
        cout<<"sum="<<sum;
     } 
      //if player2 win
     if(sum==100)
     {
        cout<<"player 2 is winner"<<endl;
         break;
      }
   }
  return 0;
}



