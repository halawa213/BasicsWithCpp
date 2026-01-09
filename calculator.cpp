#include<iostream>
using namespace std;
int main(){

    cout<<"#################\n";
    cout<<"#MINI CALCULATOR#\n";
    cout<<"#################\n\n";
   
    while(true)
{
    int x,y;
    char z;
    cout<<"enter num1: ";cin>>x;
    cout<<"enter num2: ";cin>>y;
    cout<<" + \n";
    cout<<" - \n";
    cout<<" * \n";
    cout<<" / \n";
    cout<<"choose the operation from above: ";cin>>z;cout<<endl;
    if(z=='+')cout<<x<<" + "<<y<<" = "<<x+y<<"\n\n";
    
    else if(z=='-')cout<<x<<" - "<<y<<" = "<<x-y<<"\n\n ";
    
    else if(z=='*')cout<<x<<" * "<<y<<" = "<<x*y<<"\n\n";
    
    else if(z=='/')cout<<x<<" / "<<y<<" = "<<float(x)/y<<"\n\n";
    
    else
    {
        cout<<"undefined operation!! \n";
    }
    cout<<"----------------------------------------------------------------------------\n\n";
    
    char re;
    cout<<"do you want to try again? [y/n] ";cin>>re;
    cout<<"\n";
    if(re!='y')
    {
    break;
}

}
}
