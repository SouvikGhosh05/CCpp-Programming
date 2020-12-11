#include<iostream>

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void BubbleSort(int A[],int n)
{
    int i , j, flag;

    for(i=0 ; i<n-1;i++)
    {   flag=0;

        for(j=0; j<n-1-i ;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

int main()
{
    int *p, num ,i;
    
    std:: cout<<"Enter the number of elements to sort: ";
    std:: cin>>num;
    p= new int [num];
    std:: cout<<"\nPut the numbers: ";
    for(i=0;i<num;i++)
    {
        std:: cin>> *(p+i); 
    }
    BubbleSort(p,num);

    std:: cout<<std:: endl;
    for(i=0;i<num;i++)
    {
        std:: cout<<*(p+i)<<"\t";
    }
    delete [] p;
    return 0;
}