# Topgear-C-QuickSort - By: Tejeswar Tripathy

## C Programming Assignments - L2<br/>
### A variation of Quick sort<br/>
    1. Implement a variation of quick sort algorithm as explained below.<br/>
    2. X is an array of N integers to be sorted.<br/>
    3. Array is partitioned using an element say X[j] as the pivot such that after partitioning,
       all the elements in the array at positions less than j are less than X[j] and all the elements in the 
       array at positions greater than j are greater than X[j].
    4. This is done recursively on each of the two partitions, till all the partitions contain one element
       – which means the array is sorted.
    5. The partitions works as follows.
        ◦ The partitioning procedure gives the position J.
        ◦ Let,
            ▪ LB – Lower bound of the sub-array
            ▪ UB – Upper bound of the sub-array
            ▪ Pivot element A is the middle element of the sub-array i.e. the element at position (LB+UB)/2
            ▪ DOWN – Pointer initialized to upper bound of the sub-array
            ▪ UP – Pointer initialized to lower bound of the sub-array
        ◦ At any point during execution, 
            ▪ each element at a position greater than UP >= A
            ▪ each element at a position lower than DOWN <= A
        ◦ Pointers UP and DOWN are moved towards each other as follows:
            ▪ Step-1: <br/>
              Repeatedly increase the pointer DOWN by one position until X[DOWN] > A.
              After DOWN is increased each time,
              if X[DOWN] < X[DOWN-1], swap X[DOWN] < X[DOWN-1].
            ▪ Step-2: <br/>
              Repeatedly decrease the pointer UP by one position until X[UP] <= A.
              After UP is decreased each time, if X[UP] > X[UP+1], swap X[UP] < X[UP+1].
            ▪ Step-3: <br/>
              If UP > DOWN, swap X[DOWN] and X[UP]
              If X[ DOWN] <  X[DOWN-1], swap X[DOWN] and X[DOWN-1]
              If X[ UP] >  X[UP+1], swap X[UP] and X[UP+1]
            ▪ The above steps are repeated till UP <= DOWN.
              The position UP is the position J required.

### Input specifications: <br/>
    The input will be a single line containing an integer N,
    followed by N integers. Assume N < 50.

### Output specifications:
    You have to print the content of the array X each time partitioning is done.
    The output should be on a single line containing the array elements separated by a space.


## Sample Input/ Output
### Input
    8 25 57 48 37 12 92 86 33

### Output
    25 12 33 37 48 57 92 86
    12 25 33 37 48 57 92 86
    12 25 33 37 48 57 92 86
    12 25 33 37 48 57 86 92
    12 25 33 37 48 57 86 92
