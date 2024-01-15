u=int(input("total  players"))
U=[]
for i in range(u):
  r=int(input("roll no. of all students"))
  U.append(r)
print("roll nos. of all students: ",U)
A=[]
a=int(input("cricket players"))
for i in range(a):
    r=int(input("roll no. of cricketer"))
    A.append(r)
print("roll no. of cricketers",A)

B=[]
b=int(input("badminton players"))
for j in range(b):
    r=int(input("roll no. of badminton players"))
    B.append(r)
print("roll no. of badminton players",B)

C=[]
c=int(input("footballers"))
for k in range(c):
    r=int(input("roll no. of footballers"))
    C.append(r)
print("roll no. of footballers",C)

print(" student details")
print("roll nos. of all students: ",U)
print("roll no. of cricketers",A)
print("roll no. of badminton players",B)
print("roll no. of football players",C)

X=[]
for i in A:
   for j in B:
      if i==j:
        X.append(i)
        break
print("players playiong cricket and badminton= ",X)

Y=[]
for i in A:
 Y.append(i)
 
for i in B:
  flag=0
  for j in A:
     if i==j:
       flag=1
       break
  if flag==0:
     Y.append(i)
print("students plays cricket or badminton",Y)

P=[]
for i in U:
   flag=0
   for j in Y :
     if i==j:
      flag=1
      break
   if flag==0 :
    P.append(i)

   
print("roll no of students neither play cricket nor badminton",P)

Q=[]
for i in A:
   for j in C:
      if i==j:
        Q.append(i)
        break
print("students playing cricket and football",Q)
     
R=[]
for i in Q:
  flag=0
  for j in B :
     if i==j:
      flag=1
      break
  if flag==0:
    R.append(i)
    
print("roll no of students playing cricket and football but not badminton",R)





