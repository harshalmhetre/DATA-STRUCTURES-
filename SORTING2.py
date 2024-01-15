A=[]
n=int(input("Enter the total number of elements in the list\n"))
print("Enter the elements one by one ")
for i in range (0,n):
    a=float(input())
    A.append(a)        
    print("The unsorted list is ",A)

def selectionsort():
    global i,min_ind
    i=0
    for i in range(n):
        min_ind=i       
        for j in range(i+1,n):            
            if A[j]<A[min_ind]:
                min_ind = j
                
        (A[i],A[min_ind])=(A[min_ind],A[i])

    print("Sorted list is ",A)

def quicksort():
    
    print("Unsorted = ",A)
    def partition(A,low,high):
        pivot=A[low]
        i=low-1
        for j in range(low,high):
            if A[j]>=pivot:
                i=i+1
                A[i],A[j]=A[j],A[i]
            
        A[i+1],A[high]=A[high],A[i+1]
        return (i+1)
    
    def quick(A,low,high):
        if low<high: 
            p=partition(A,low,high)
            quick(A,low,p-1)
            quick(A,p+1,high)

    size=len(A)
    quick(A,0,size-1)     
    print("Sorted by quicksort = ",A)   
    print(A[-2:])
                
selectionsort()
quicksort()
