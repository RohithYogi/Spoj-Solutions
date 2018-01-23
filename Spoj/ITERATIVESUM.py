i=raw_input()
i=i.split()
i[0]=int(i[0])
i[1]=int(i[1])
c=0
for i in range(i[0],i[1]+1):
    c=c+(i**2)
print c
