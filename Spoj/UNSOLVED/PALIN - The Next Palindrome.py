t=input()
for i in range(0,t):
    n=raw_input()
    j=int(n)
    j=j+1
    n=str(j)
    r=n[::-1]
    while(True):
        if(n==r):
            print n
            break
        else:
            j=int(n)
            j=j+1
            n=str(j)
            r=n[::-1]

'''
Time limit exceeded:Why?
Need more efficiency in your logic!!
Try this!!
def generateNextPalindromeUtil (num,n ):
    mid = n/2
    leftsmaller = False
    i = mid - 1;
    j=mid+1 if n%2 else mid
    
    while (i >= 0 and num[i] == num[j]):
        i-=1
        j+=1
 
    if  i < 0 or  num[i] < num[j]:
        leftsmaller = True
 
    while (i >= 0):
        num[j] = num[i];
        j+=1
        i-=1
 
    if (leftsmaller == True):
        carry = 1
        i = mid - 1
        
        if (n%2 == 1):
            num[mid] += carry
            carry = num[mid] / 10
            num[mid] %= 10
            j = mid + 1
        
        else:
            j = mid;
 
        while (i >= 0):
            num[i] += carry
            carry = num[i] / 10
            num[i] %= 10
            num[j] = num[i]
            j+=1
            i-=1
 
def generateNextPalindrome( num, n ):
    if AreAll9s( num, n ) :
      print "1"+'0'*(n-1)+'1'
    else:
      generateNextPalindromeUtil ( num, n )
      printArray (num, n)
 
def AreAll9s(num,n):
  for i in range(0,n):
    if int(num[i]) != 9 :
      return 0
  return 1
 
 
def printArray( arr, n):
  print "".join([str(x) for x in arr])
 
 
test=input()
for i in range(test):
  nums = raw_input()
  num=[int(x) for x in nums]
  n = len(num)
  generateNextPalindrome( num, n )
  '''
            
