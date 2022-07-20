def max_len(A):
    A.sort(key=lambda x:x[1])
    pre_s,pre_e=A[0]
    count =1
    for s,e in A:
        if s<=pre_e:
            continue
        else:
            pre_s,re_e=s,e
            count+=1

    return count
def main():
    A=[[1,4],[2,3,],[4,6],[8,9]]
    print(max_len(A))

if __name__=="__main__":
    main()
