def solve(a):
    a=sorted(a,key=lambda x:x[0])
    ans=[]
    cur_a=a[0]
    for next_a in a[1:]:
        if(cur_a[1]>=next_a[0]):
            if(cur_a[1]<next_a[1]):
                cur_a[1]=next_a[1]
        else:
            ans.append(cur_a)
            cur_a=next_a
    ans.append(cur_a)
    print (ans)


solve([[1,3],
[2,6],
[8,10],
[15,18]])