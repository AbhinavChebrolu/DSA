/*Segment Tree
A segment tree is a data structure used to store information about array segments and answer segment queries efficiently. 
There are 2 main operations performed
1. range(i, j)
2. gives the sum of the array elements starting at index i and ending at index j. update(i, Val)
The root of T will represent the whole array A[0:N-1]
Each leaf in the Segment Tree T will represent a single element A[i] such that 0≤i<N
The internal nodes in the Segment Tree T represents the union of elementary intervals A[i:j] where 0≤i<j<N  */


void build(int node, int start, int end)
{
    if(start == end)
    {
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

int query(int node, int start, int end, int l, int r)
{
if(r < start or end < l)
{
return 0;
}
if(l <= start and end <= r)
{
return tree[node];
}
int mid = (start + end) / 2;
int p1 = query(2*node, start, mid, l, r);
int p2 = query(2*node+1, mid+1, end, l, r);
return (p1 + p2);
}

void update(int node, int start, int end, int idx, int val)
{
if(start == end)
{
        A[idx] += val;
        tree[node] += val;
}
else{int mid = (start + end) / 2;
if(start <= idx and idx <= mid)
{
            update(2*node, start, mid, idx, val);
}
else
{
            update(2*node+1, mid+1, end, idx, val);
}
        tree[node] = tree[2*node] + tree[2*node+1];
}
}
