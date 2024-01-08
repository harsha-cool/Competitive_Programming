class PQ{
    vi A;
public:
    PQ(vi M){
        A = M;
        build_max_heap(A);
    }
    void printer()
    {
        ps(A);
    }
    int top()
    {
        if(A.size()==0) return -1;
        else return A[0];
    }
    int pop()
    {
        if(A.size()==0) return -1;
        else
        {
            int ele = top();
            A[0] = A[A.size()-1];
            A.erase(A.end()-1);
            max_heapify(A,0,A.size());
            return ele;
        }
    }
    void increase_val(int i,int val)
    {
        if(val<A[i]) return;
        A[i] += val;
        while(i>0 && A[i]>A[(i-1)/2])
        {
            swap(A[i],A[(i-1)/2]);
            i = (i-1)/2;
        }
    }
    void insert_val(int val)
    {
        A[A.size()-1] = -1;
        increase_val(A.size()-1,val+1);
    }
};
