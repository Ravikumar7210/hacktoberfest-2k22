#include<iostream>
#include<conio>

using namespace std;

int main()
{
    int n;
   
    cout<<"Enter the size of sentence: ";
    cin>>n;
    cin.ignore();
    
    char arr[n+1];
   
    cout<<endl<<"Enter any string or sentence you want to add: ";
    cin.getline(arr, n);
    cin.ignore();

    int i=0,currLen=0,maxLen=0,maxst=0,st=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(currLen>maxLen)
            {
                maxLen=currLen;
                maxst=st;
            }
            currLen=0;
            st=i+1;
        }

        else
        currLen++;

        if(arr[i]=='\0')
        break;

        i++;

    }

    cout<<"MaxLen of the characcter is: "<<maxLen;
    cout<<endl;
    for(i=0;i<maxLen;i++)
    {
        cout<<arr[i+maxst];
    }
    return 0;
}
