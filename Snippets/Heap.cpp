void max_heapify(vi &A, int i,int N)
{
     int left = 2*i+1;
     int right = 2*i+2;
     int largest = 0;
     if(left<N && A[left]>A[i]) largest = left;
     else largest = i;
     if(right<N && A[right]>A[largest]) largest = right;
     if(largest!=i)
     {
        swap(A[largest],A[i]);
        max_heapify(A,largest,N);
     }
}

void build_max_heap(vi &A,int N)
{
    for(int i=N/2;i>=1;i--) max_heapify(A,i-1,N);
}
