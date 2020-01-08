#include<iostream>
#include<vector>
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
   cout<<endl<<"bubble_sort"<<endl;
   for(int i=0;i<len;i++){
     cout<<arr[i]<<endl;
   }   
}
/*
  选择排序
  by skyliqf
  2020.01.07
*/
template<typename V>
void selection_sort(vector<V> arr){
   for(int i=0;i<arr.size()-1;i++){
     int min=i;
     for(int j=i;j<arr.size();j++){
        if(arr[j]<arr[min])
           min=j;
     }
     swap(arr[i],arr[min]);
   }
   cout<<endl<<"selection_sort"<<endl;
   for(int i=0;i<arr.size();i++){
     cout<<arr[i]<<endl;
   } 
}


/*
 插入排序
  by skyliqf
  2020.01.07
*/
template <typename S>
void insert_sort(S *arr,int len){
     int j;
     float key;
     for(int i=1;i<len;i++){
         j=i-1;
         key=arr[i];
	 while(j>=0&&key<arr[j]){
	    arr[j+1]=arr[j];
	    j--;
	 }
	 arr[j+1]=key;
     
     }
   cout<<endl<<"insert_sort"<<endl;
   for(int i=0;i<len;i++){
     cout<<arr[i]<<endl;
   }



}

int main(){
   float arr[10]={9.4,1.7,4.5,6.7,4.7,8.7,9.8,2.4,7.1,2.6};
   vector<float> arrv={9.4,9.6,4.5,6.7,4.7,8.7,9.8,2.8,7.9,2.6};
   int len = (int) sizeof(arr) / sizeof(*arr);
   bubble_sort(arr,len);
   selection_sort(arrv);
   insert_sort(arr,len);
   return 0;
  

}
