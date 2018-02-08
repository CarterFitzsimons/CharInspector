//Author: Carter Fitzsimons
#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
  char input;

  cout<<"What character do you want to know about?\n";
  cin>>input;

  int num = (int)input;
 
  //when user's entry is between A-Z...
  if(isalpha(num) && isupper(num)){ 
  cout<<input<<" is an upper case letter!\n";}
  
  else if (isalpha(num) && isupper(num) == false){ 
  //when user's entry is between a-z...  
  cout<<input<<" is a lower case letter!\n";}
  
  else if (isalpha(num) != true && num != 36){ 
  //in all other cases... 
  cout<<"?! Pssh. What are you talking about?\n";}
  
  else if (isalpha(num) != true && num == 36){
  cout<<"$"<<"?! Pssh. What are you talking about?\n";}
  //no matter what they enter.. 
  cout<<"The ASCII value is: "<< num << endl;

  return 0;
}
