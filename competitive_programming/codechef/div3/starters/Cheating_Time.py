t = int(input())
while(t != 0):

    n, f, k = map(int, input().split())
    

    invgilator_times = []
    temp = n 

    while temp != 0:
        A,B = map(int, input().split())        
        invgilator_times.append([A, B])
        temp -= 1
    
    k,f = f,k


    invgilator_times.sort()

    time_in_between = invgilator_times[0][0] - 0
    most = invgilator_times[0][1]
    for i in range(1, len(invgilator_times)):
        cur_time_period = invgilator_times[i]
        if cur_time_period[0] > most:
            time_in_between += abs(cur_time_period[0] - most)
        most = max(most, cur_time_period[1])

    time_in_between += f - most
    if time_in_between >= k :
        print("YES")
    else:
        print("NO")



    t -= 1