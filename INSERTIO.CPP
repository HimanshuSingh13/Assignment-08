#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,n,*arr,temp;
cout<<endl<<"Enter the size of array";
cin>>n;
for(i=0;i<n;i++)
{
cout<<endl<<"Enter the elements of array";
cin>>arr[i];
}
for(i=1;i<n;i++)
{
temp=arr[i];
for(j=i-1;j>=0;j--)
{
if(arr[j]>temp)
{
arr[j+1]=arr[j];
}
else
break;
}
arr[j+1]=temp;
}
for(i=0;i<n;i++)
{
cout<<" "<<arr[i];
}
getch();
}


