 #include <iostream>
  #include <vector>
 #include "alg.h"
 using namespace std;

 int main(){

 //Add n example
cout << "/////////// Add_n func /////////////////"<<endl;
int ia[] = {1,2,3,4,5,6,7,8,9};
cout << "before:" ;
for(auto i :ia)
    cout << i << ",";
int * p = Add_n(begin(ia), end(ia), 2);
cout <<"\nreturn pointer: "<< *p<<endl;
cout << "after: " ;
for(auto i :ia)
    cout << i << ",";
cout<< endl;
cout << endl;

//Transpose example
cout << "/////////// Transpose func /////////////////"<<endl;
int ia1[] = {1,2,3,4,5,6,7,8,9};
cout <<"before: ";
for(auto i :ia1)
    cout << i << ",";
int * p1 = Transpose(begin(ia1), end(ia1));
cout <<"\nreturn pointer: "<< *p1<<endl;
cout <<"after: ";
for(auto i :ia1)
    cout << i << ",";
cout << endl;
cout << endl;

//Transform example
cout << "/////////// Transform func /////////////////"<<endl;
int ia2[] = {1,2,3,10,8,6};
vector<int> vec(100);
auto p2 = Transform(begin(ia2), 
end(ia2), vec.begin(),
[](const int x, const int y){return x + y;});
cout <<"return pointer: "<< *p2<<endl;
for(auto i :vec)
    cout << i << ",";

return 0;
 }