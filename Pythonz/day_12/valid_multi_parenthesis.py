def solve(string):
    m={"[":"]","{":"}","(":")"}
    st=[]
    for i in string:
        if i in m:
            st.append(i)
        else :
            if len(st)==0:
                return 0
            elif m[st[-1]]==i:
                st.pop()
            else:
                return 0
    return 1 if len(st)==0 else 0

x=solve("{}([()])")
x=solve("{}([())")
x=solve("{}(][())")
if x==0 : print ("invalid") 
else :print("valid")





solve("[{{}}]()")
