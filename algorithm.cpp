#include<iostream>
using namespace std;
template<typename T>
/*
  冒泡排序
  by skyliqf
  2020.01.07
*/
void bubble_sort(T *arr,int len){
   int i ,j;
   for (i=0;i<len;i++){
      for(j=0;j<len-1-i;j++){
        if(arr[j]>arr[j+1])
           swap(arr[j],arr[j+1]);
      }
   }   
}

int main(){
   float arr[10]={9.4,12.7,4.5,6.7,4.7,8.7,9.8,2,7,26};
   int len = (int) sizeof(arr) / sizeof(*arr);
   bubble_sort(arr,len);
   for(int i=0;i<len;i++){
     cout<<arr[i]<<endl;
   } 
   return 0;
  

}
