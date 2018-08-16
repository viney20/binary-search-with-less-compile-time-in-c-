#include<iostream>
using namespace std;
int main(){
    int i,n,x,arr[509999],o=1,y=0;
    cout<<"enter total no of iteration";
    cin>>n;

int l=1;
int h=n-1;
int mid=(l+h)/2;
 for(i=1;i<=n;i++)
{   // cout<<"enter ur no ";
    // cin>>arr[i];
arr[i]=o;
o++;
}
cout<<"find no:-> ";
cin>> x;

while(l<=h)
{
  if(x==arr[l]){ //from here  modification of binary search is started
        mid=l;
        cout<<"element found"<<" with if case";
      y=1;
        break;
    }
    else if(x==arr[h]){
        mid=h;
        cout<<"element found"<<" with if case";
        y=1;
        break;//modification is end here
    }
    else if(arr[mid]==x)
    {
        cout<<"element found"<<" without if case";
        y=1;
        break;
    }
    else if(arr[mid]>x)
    {
        h=mid-1;
    }
     else if(arr[mid]<x)
    {
        l=mid+1;
    }
    mid=(l+h)/2;
}
if(x==0)
{
    cout<<"not found";
}
return 0;// if you like the code than plz  give me star on github id(viney20)
}

