num = int(input("Enter how many pairs to be added\n"))
sum = [{0}]
arr1 = []
arr2 = []
for i in range(num):
    arr1.append(int(input()))
    arr2.append(int(input()))
print("The resluts are:\n")
for x,y in zip(arr1,arr2):
    print(x+y,end='\t')
    

   
    
