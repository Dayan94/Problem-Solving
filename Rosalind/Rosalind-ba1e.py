# Solution 3
inputfile = open("C:/Users/AbuDayan/Desktop/rosalind_ba1e.txt", 'r')
line1 = inputfile.readline().strip()

k, L, t = 9, 525, 17  # value of k,L, t will be placed from 2nd line of rosalind_ba1e.txt file 
substring_iteration = {}
for i in range(len(line1)-k+1):
    if line1[i: i+k] not in substring_iteration:
        substring_iteration[line1[i: i+k]] = 1
    else:
        substring_iteration[line1[i: i+k]] += 1
     
for substring in substring_iteration:
    if substring_iteration[substring] >= t:
        print(substring, end=" ")