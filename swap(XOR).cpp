#include <iostream>
using namespace std;
/** 
 * @ XOR can be used to swap 2 numbers very easily but it will be helpful only if you give 5 minutes to learn the xor concept
 */
int main(){
int num1 = 5 ;
int num2 = 6 ; 
cout << "num1 "<<num1<<endl;
cout<<"num2 "<<num2<<endl;
num1 = num1^num2;
num2 = num1^num2;
num1 = num1^num2;
cout << "num1 "<<num1<<endl;
cout<<"num2 "<<num2<<endl;
    return 0;
}
