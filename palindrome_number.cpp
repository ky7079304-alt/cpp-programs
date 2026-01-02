#include<iostream>
int main(){
int n, rev=0, a, digit;
std::cout<<"enter value of n:";
    std::cin>>n;
    a=n; //store original value of n bcz after terminating while loop n becomes zero
while(n>0){
    digit=n%10; //will give remainder which is always the rightmost number in n
    rev=rev*10+digit; //will return the number reverse to n (digit to digit)
    n=n/10; //for reducing the number
}
if(rev==a){
    std::cout<<"number is palindrome";
}
else{
    std::cout<<"number is not palindrome";
}
return 0;
}