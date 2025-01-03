#include <iostream>
using namespace std;

   string reverse(string str){
   int i=0;
   int j=str.length()-1;
   while(i<=j){
       char temp=str[i];
       str[i]=str[j];
       str[j]=temp;
       i++;
       j--;
   }
  
   return str;
}
int main() {
   string str="coding";
   cout<<reverse(str);
   return 0;
}