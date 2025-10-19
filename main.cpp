#include <iostream>
using namespace std;
int donno(int a,int b,int c){
    
    return a*100+(b*10)+c;
     
}

int main() {
  
int a;
int x,y,z;
cin>>a;

z=a%10;
a=a/10;
y=a%10;
a=a/10;
x=a%10;


 int sum = donno(z,x,y) + donno(y,z,x)+ donno(x,z,y);
 cout<<sum;

}
