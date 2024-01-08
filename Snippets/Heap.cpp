// 0 based indexing
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

void build_max_heap(vi &A)
{
     int N = A.size();
     for(int i=N/2;i>=1;i--) max_heapify(A,i-1,N);
}

void delete_heap(vi &A)
{
     int N = A.size();
     A[0] = A[N-1];
     max_heapify(A,0,N-1);
     A.erase(A.end()-1);
}

void insert_heap(vi &A)
{
     int N = A.size();
     A.pb(x);
     int i = N;
     while(i>0 && A[i] > A[(i-1)/2])
     {
          swap(A[i],A[(i-1)/2]);
          i  =(i-1)/2;
     }
}

void heap_sort(vi &A)
{
     int N = A.size();
     build_max_heap(A);
     ROF(i,0,N)
     {
          swap(A[0],A[i]);
          max_heapify(A,0,i);
     }
}
