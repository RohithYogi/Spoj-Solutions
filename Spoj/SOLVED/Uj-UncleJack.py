while(True):
    t=map(int,raw_input().strip().split())
    if(t[0]==0 and t[1]==0):
        break
    else:
        print t[0]**t[1]
