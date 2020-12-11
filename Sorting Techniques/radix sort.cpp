#include<iostream>
using std::cin;
using std::cout;
using std::endl;


int CountMaxDig(int A[], int n)
{
    int i, largest=A[0], count=0;
    for(i=0; i<n; i++)
	{
		if(largest<A[i])
		{
			largest=A[i];
		}
    }
    while (largest != 0) 
    {
        largest /= 10;
        count+=1;
    }
    return count;
}

void RadixSort(int A[], int n)
{
// Units/Tens/Hundreds - used to determine which digit
    int power = 1;
    int digit= CountMaxDig(A,n);
    // Step 3, 4, 5: Arrange the numbers on the basis of digits
    for(int i=0;i<digit;i++)
    {
        // Holds the updated array 
        int new_array[n];
        
        // Counting Sort Array - required for arranging digits [0-9]
        int count[10];
 
        // Initializing Count Array
        for(int j=0; j<10; j++)
            count[j] = 0;
 
        // Calculating frequency of digits
        for(int j=0; j<n; j++)
        {
            // The digit under consideration in this iteration
            int num = (A[j]/power) % 10;
 
            count[num]++;
        }
 
        // Cumulative frequency of count array
        for(int j=1; j<10;j++){
            count[j] += count[j-1];
        }
 
        // Designating new positions in the updated array
        for(int j=n-1; j>=0; j--)
        {
            // The digit under consideration in this iteration
            int num = (A[j]/power) % 10;
 
            new_array[count[num]-1] = A[j];
            count[num]--;
        }
 
        // Updating the original array using New Array
        for(int j=0;j<n;j++)
            A[j] = new_array[j];
         
        // Updating the digit to be considered next iteration
        power *= 10;
    }
}

int main()
{
    int *p, num ,i;
    p= new int [num];
    cout<<"Enter the number of elements to sort: ";
    cin>>num;
    cout<<"\nPut the numbers: ";
    for(i=0;i<num;i++)
    {
        cin>> *(p+i); 
    }
    RadixSort(p,num);

    cout<<endl;
    for(i=0;i<num;i++)
    {
        cout<<*(p+i)<<"\t";
    }
    delete [] p;
    return 0;
}