a=[]
n=int(input("Enter number of students whose marks are to be displayed : "))
print("Enter marks for",n,"students ")
for i in range(0, n):
    ele = int(input())
    a.append(ele)

print("The marks of",n,"students are : ")
print(a)

#Bubble sort 
def bubble():
  print("\n BY BUBBLE SORT") 
  for i in range(0,n-1):
      for j in range(0,n-i-1):
          if (a[j]>a[j+1]):
              temp=a[j]
              a[j]=a[j+1]
              a[j+1]=temp
  print(a)            
bubble()

#Selection Sort
def selection():
  print("\n BY SELECTION SORT") 
  for i in range(0,n-1):
      min=a[i];
      ind=i;
      for j in range(i+1,n):
          if(a[j]<min):
              min+a[j]
              ind=j
              temp=a[i];
              a[i]=a[ind];
              a[ind]=temp;
  print(a)
selection()             
