# Floyd's Loop Detection Alogorithm
This algorithm is used to detect loop in linked list.


#### Algorithm
- Take two pointers - fast and slow.
- Both starts from the head, slow moves one step at a time and fast moves two step at a time.
- If they both meet then there is a loop.
- else fast will reach the end of the linked list.

#### How it works
- fast pointer enters the loop before (or at the same time).
- let fast be k distance ahead of slow when fast enters the loop where k>=0.
- the distance keeps on increasing by one in every movement of both pointers.
- when this distance becomes equal to the length of the loop, they will meet.


### To remove the Loop

#### Algorithm
- detect loop using Floyd's detection Algorithm.
- Move slow pointer to the beginning of the linked list and keep fast at the meeting point.
- move both pointers one at the time. The point at which both the pointer meet again is first node of the loop
- remove the link of first node with the last second node.

#### How it works
- Before the first meeting 
    (Distance travelled by slow)*2 = distance travelled by fast

let 
n = length of loop,
m = distance of first node of the loop from beginning of linked list,
k = distance of first meeting point from first node of loop
x = number of times the fast pointer travel the loop
y = number of times the slow pointer travel the loop

thus we get,
    (m + k + (x*n))*2 = (m + k + (y*n))
therefore, 
    m+k = n(y-2*x)
    
- thus we can say that (m+k) is multiple of n.
- now slow starts from beginning of linked list, then it will travel m distance to reach first node of loop.
- fast will also take m distance to reach to first node of the loop.(As m+k is multiple of n and k is the distance of first meeting point from first node , so m+k-k = m)
- thus we can say that they will always meet at first node of the loop.







