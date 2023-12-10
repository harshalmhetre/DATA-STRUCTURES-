U=[]
u=int(input("total no. of students"))
for i in range(0,u):
  i=i+1
  U.append(i)
print("roll no. of all students:\n",U)

p=int(input("total no. of present students:"))
P=[]
for i in range(p):
   r=int(input("roll no. of present student"))
   P.append(r)
print("roll no. of present for exam:\n",P)
M=[]
for i in range(p) :
  r=int(input("marks of students:"))
  M.append(r)
print("marks of students:\n",M)
sum=0
for i in M:
  sum+=i
print("total marks of student",sum)
avg=sum/p
print("Average of marks of all students:",avg)
low=999
for i in M:
 if i<low :
   low=i
print("lowest score in exam is:",low)
high=0
for i in M:
 if (i>high ):
   high=i
print("highest score in exam is :",high)

A=[]

for i in U:
   flag=0
   for j in P :
     if i==j:
      flag=1
      break
   if flag==0 :
    A.append(i)
print("roll no. of absent students:\n",A)

F=[]
for i in M:
  freq=0
  for j in M :
   if (i==j):
     freq=freq+1
  F.append(freq)
  
high=-1
for i in range(p):
  if F[i]>high:
    high=F[i]
    ind=i
print("marks of high frequency",M[ind])






