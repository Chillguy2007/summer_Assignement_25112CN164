//1:- Write a program to Find sum of digits of a number
#include <iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Give the number you want whose sum of digits"<<endl;
    cin>>num1;
    int sum=0;
    int rem =0;
    while (num1>0)
    {
        rem=num1%10;
        sum=sum+rem;
        num1=num1/10;
    }
    cout<<"the sum of digits is :"<<sum;
}
//2:- Write a program to Reverse a number
#include <iostream>
using namespace std;
int main(){
    int num2;
    cout<<"Give the number whose reverse you want"<<endl;
    cin>>num2;
    int rem=0;
    int rev=0;
    while (num2>0)
    {
        rem=num2%10;
        rev=rev*10+rem;
        num2=num2/10;
    }
    cout<<"the reverse of number is "<<rev;
}
//3:- Write a program to Find product of digits
#include <iostream>
 using namespace std;
 int main(){
    int num3,rem;
    cout<<"Give the number you want to find product of digits"<<endl;
    cin>>num3;
    int product=1;
    while (num3>0)
    {
        rem=num3%10;
        product=product*rem;
        num3=num3/10;
    }
    cout<<"product of digits is :- "<<product;
 }
//4:- Write a program to Check whether a number is palindrome
#include <iostream>
 using namespace std;
 int main(){
    int num4;
    cout<<"Give the number whose palindrome you want to check"<<endl;
    cin>>num4;
    int orig_num=num4;
    int rev=0;
    int rem=0;
    while (num4>0)
    {
        rem=num4%10;
        rev=rev*10+rem;
        num4=num4/10;
    }
    if (orig_num==rev)
    {
        cout<<"THE NUMBER IS PALINDROME"<<endl;
    }
    else
    {
        cout<<"THE NUMBER IS NOT PALINDROME"<<endl;
    }
    
 }