#include<iostream>
int main(){
int a=4, b=4, c=6, d=9 , largest;
//int Largest=(a>=b)?(b>=c&&b>=d?b:c):(c>=d?c:d);//if c is smaller than all and b>d then second condition will not be checked b>=c&&b>=d
//it is not safer
//int Largest=(a>=b)?(a>=c?a:c):(b>=c?b:c); //for three number 
 largest=(a>=b?a:b);
 largest=(largest>=c?largest:c);
 largest=(largest>=d?largest:d);
std::cout<<largest;
    return 0;
}