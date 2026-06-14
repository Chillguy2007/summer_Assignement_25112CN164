//1:- Write a program to Calculate sum of first N natural numbers.
#include<iostream>
using namespace std;
int main(){
    cout <<"give the number you want sum of "<<endl;
    int num,sum;
    cin>>num;
    for(sum=0; num>0;num=num-1){
        sum=sum+num;
    }
    
    cout<<"your sum of first N terms is : "<<sum;

}
//2:- Write a program to Print multiplication table of a given number.
#include <iostream>
using namespace std;
int main(){
    int num1;
    cout<<"give the number you want to print table of :"<<endl;
    cin>>num1;
    int mul=1;
    int newnum=10;
    while(newnum>0){
        cout<<num1<<" X "<<mul<<" = "<<num1*mul<<endl;
        newnum=newnum-1;
        mul=mul+1;
    }
}
//3:- Write a program to Find factorial of a number.
#include <iostream>
using namespace std;
int main(){
    int num3,fact;
    cout<< "give the number you want factorial of :-"<<endl;
    cin>>num3;
    for(fact=1;num3>0;num3=num3-1){
        fact=fact*num3;
    }
cout<<"factorial is : "<<fact;
}
//4:- Write a program to Count digits in a number
#include <iostream>
using namespace std;
int main(){
    int num4,count;
    cout<<"give the number you want digit count of:-"<<endl;
    cin>>num4;
    count=0;
    while (num4>0)
    {
        count=count+1;
        num4=num4/10;
    }
    cout<<"the number of digits are :"<<count;
    
}
