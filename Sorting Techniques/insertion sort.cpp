#include<iostream>

void InsertionSort(int A[],int n)
{  
    int i, j, x;
    
    for (i = 1; i < n; i++)
    {
        j=i-1;
        x=A[i];
        while (j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
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
    InsertionSort(p,num);

    std:: cout<<std:: endl;
    for(i=0;i<num;i++)
    {
        std:: cout<<*(p+i)<<"\t";
    }
    delete [] p;
    return 0;
}