

if __name__ == "__main__":
    n = int(input())
    x =list((int(x) for x in input().split()))
    # print(x)
    
    tmp1 = 0
    tmp2 = x[0]
    for i in range(1,n):
        if tmp2 > x[i]:
            tmp3 = tmp2 - x[i]
            tmp1 += tmp3

            x[i] = x[i] + tmp3
            tmp2 = x[i]
        else:
            tmp1 += 0
            tmp2 = x[i]

    print(tmp1)
