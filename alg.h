 #include <iostream>
#include <numeric>
using namespace std;

template <class Itr,class T>
Itr Add_n(Itr begin,Itr end ,T const value){
  int size = end - begin;
  Itr tempit = begin;
  T tempval = value;
  int sum =0;
  if (size %value ==0 ){
      for(int i =0;i<(size/value);i++){
        while(tempval > 0 ){
            sum += *tempit;
            tempit++;
            tempval--;
        }
        *begin = sum;
        begin++;
        tempval =value;
        sum =0;

         
      }
      
  }
  else{
     for(int i =0;i<(size/value);i++){
        while(tempval > 0 ){
            sum += *tempit;
            tempit++;
            tempval--;
        }
        *begin = sum;
        begin++;
        tempval =value;
        sum =0;

         
      }
      int modulo = size%value;
       *begin = accumulate(tempit, end, 0);
        begin++;

  }
  return begin;
  
}
template <class Itr>
Itr Transpose(Itr begin, Itr end){
    int size = end - begin;
    if(size % 2 == 0){
        while(begin!=end){
            iter_swap(begin, begin+1);
            begin = begin+2;
        }
        return end;
    }
    else{
        while(begin!=end-1){
            iter_swap(begin, begin+1);
            begin = begin+2;
        }
        return end-1;
    }
    
}

template<class InputIt1, class InputIt2, class BinaryOperation>
InputIt2 Transform(InputIt1 first1, InputIt1 last1, InputIt2 first2, 
                   BinaryOperation binary_op)
{   
    int size = last1 - first1;
    bool sizeIsEven = (size%2 == 0);
    if(sizeIsEven){
    while (first1 != last1) {
        *first2++ = binary_op(*first1, *(first1+1));
       first1 = first1+2;

    }
    return first2;
    }
    return first2;
}