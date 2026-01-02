#include<iostream>
int main(){
int n;
std::cout<<"enter value of n:";
std::cin>>n;
if(n>0){
    std::cout<<"number is positive and greater than zero"<<std::endl;
}
else if(n==0){
std::cout<<"number is zero"<<std::endl;
}
else{
    std::cout<<"number is negative"<<std::endl;
}

    return 0;
}