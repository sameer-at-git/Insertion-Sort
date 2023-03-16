#include<iostream>
using namespace std;

int insertion(int a[], int n){
for(int j=0;j<n;j++){
    int val=a[j];
int    i=j-1;
    while(i>=0 && a[i]>val){
        swap(a[i], a[i+1]);
        i=i-1;
        }
        a[i+1]=val;
        }
        cout<<"Sorted:";
        for(int k=0;k<n;k++){
              cout<< a[k]<<" ";}
        }

int main(){
int n;
cout<<"Enter  size:"<<endl;
cin>>n;
int a[n];
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 insertion(a,n);
return 0;
}
