# replace row and col value with zero where element is zero
# 0120
# 3456
# 7890
def solve(a):
    m,n=len(a),len(a[0])
    r,c=False,False
    print (m,n)
    for j in range(n):
        if a[0][j]==0:
            r=True
            break
    for i in range(m):
        if a[i][0]==0:
            c=True
            break
    for i in range(m):
        for j in range(n):
            if a[i][j]==0:
                a[i][0]=0
                a[0][j]=0

    for i in range(1,m):
            if(a[i][0]==0):
                for j in range(1,n):
                    a[i][j]=0
    for i in range(1,n):
            if(a[0][i]==0):
                for j in range(1,m):
                     a[j][i]=0

    if c :
        for i in range(m):
            a[i][0]=0

    if r:
        for i in range(n):
            a[0][i]=0
    for  i in a:
        print (i)


solve([[0,1,2,0],[3,4,5,2],[1,3,1,5]])