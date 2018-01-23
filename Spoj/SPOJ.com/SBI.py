p=input()
l=[]
if(p>5):
    print Invalid
else:
    for j in range(p):
        k=input()
        l.append([])
        for i in range(k):
            l[j].append(raw_input())
        o=raw_input()
h=0
m=[]
for i in range(p):
      l[i].sort()
      for j in range(len(l[i])):
              h=l[i].count(l[i][j])
              o=h
              while(o>1):
                 l[i].remove(l[i][j])
                 l[i].append(0)
                 o=o-1
              if(l[i][j]!=0):
                   print l[i][j],
                   print h
      print 
'''for i in range(p):
    for j in range(len(l[i])):
        if(l[i][j]!=0 and j+1<len(l[i]) and (l[i][j]!=l[i][j+1])):
            print l[i][j],
            print l[i].count(l[i][j])'''
        
'''2
6
03 10103538 2222 1233 6160 0142 
03 10103538 2222 1233 6160 0141 
30 10103538 2222 1233 6160 0141 
30 10103538 2222 1233 6160 0142 
30 10103538 2222 1233 6160 0141 
30 10103538 2222 1233 6160 0142 

5
30 10103538 2222 1233 6160 0144 
30 10103538 2222 1233 6160 0142 
30 10103538 2222 1233 6160 0145 
30 10103538 2222 1233 6160 0146 
30 10103538 2222 1233 6160 0143 '''
