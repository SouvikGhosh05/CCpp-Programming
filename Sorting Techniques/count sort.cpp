#include<iostream>

int LarEle(int A[], int n)
{
    int i, largest;
    largest=A[0];

	for(i=0; i<n; i++)
	{
		if(largest<A[i])
		{
			largest=A[i];
		}
    }
    return largest;
}
void CountSort(int B[], int m)
{
    int *c, i, lar;
    
    lar=LarEle(B,m);
    c=(int *)malloc((lar+1)* sizeof(int));
    
    for(i=0; i<lar+1; i++)
    {
        c[i]=0;
    }
    for(i=0; i<m; i++)
    {
        *(c+B[i])+=1;
    }
    int j=0, k=0;
    
    while(j<lar+1)
    {
        if(c[j]>0)
        {
            B[k++]=j;
            c[j]--;
        }
        else
        {
            j++;
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
    CountSort(p,num);

    std:: cout<<std:: endl;
    for(i=0;i<num;i++)
    {
        std:: cout<<*(p+i)<<"\t";
    }
    delete [] p;
    return 0;
}