num = int (input("Enter how many numbers to be added\n"))
sum=0
arr = []
for i in range(num):
    arr.append(int(input()))
    sum += arr[i]
print('The sum of the numbers is: {0}'.format(sum))

