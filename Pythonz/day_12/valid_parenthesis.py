def solve(str):
    count=0
    for i in str:
        if(i=='('):
            count+=1
        elif(i==')'):
            count-=1
        if(count<0):
            break
    if(count==0):
        print('valid')
    else:
        print('invalid')

solve("(())()")
solve("(())(")
solve("(())())(")