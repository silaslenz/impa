import datetime as time
start = time.datetime.now()
while True:
    l = set()
    a0 = int(input())
    if a0 == 0:
        break
    l.add(a0)
    for i in range(10000):
        a1 = int((a0*a0)/100)
        a1 = int(a1 % 10000)
        if a1 in l:
            break
        l.add(a1)
        a0 = a1
    print(len(l))
#print (time.datetime.now()-start)0