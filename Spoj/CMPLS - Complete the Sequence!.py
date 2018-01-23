def nextSeq(seq, count):

    size = len(seq)
    if size==1:
        return [seq[0] for i in range(count)]
    else:
        subseq = []
        for i in range(size-1):
            subseq.append(seq[i+1]-seq[i])
        nextsubseq = nextSeq(subseq, count)
        nextseq = [seq[-1]]
        for i in range(count):
            nextseq.append(nextseq[i] + nextsubseq[i])
        return nextseq[1:]
def solve():
    t = int(input())
     
    for i in range(t):
        s,c = list(map(int, raw_input().split(' ')))
        seq = list(map(int, raw_input().split(' ')))
         
        for e in nextSeq(seq, c):
            print e,
        print
        
         
solve()
