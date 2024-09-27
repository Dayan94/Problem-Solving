# we have to change the string using given string in rosalind_ba2c.txt file
string = 'GGTGAACTACCGGTCGTGTTCATATATAGTCACCAAACTTGGCTCGGAACAGTAGTTGATGGCTCTCTGAGATCTCGTATCGTAGCGAATCTCCCTTTAGGCGGCCTAAGATAGGCACCCCCTACCGGGCAGGTACCCAACTTGACCTCTGACTCCTTGGCCCGCTCCGTATCGGAGATGCATGTTAACCCCTTATGCTA'
len_string = len(string)
# we have to change len_kmer using the given value in rosalind_ba2c.txt file
len_kmer = 7
# we have to change profile value using the given value in rosalind_ba2c.txt file
profile = {
    'A': [0.214, 0.214, 0.179, 0.179, 0.143, 0.286, 0.25],
    'C': [0.357, 0.321, 0.25, 0.321, 0.286, 0.25, 0.25],
    'G': [0.143, 0.179, 0.286, 0.321, 0.321, 0.25, 0.214],
    'T': [0.286, 0.286, 0.286, 0.179, 0.25, 0.214, 0.286]
}

most_probable_kmer = {}
m =0
for p in range(len_string-len_kmer+1):
    substring = string[p:p+len_kmer]
    i = 0
    value = 1
    for c in substring:
        value *= profile[c][i]
        i += 1
    most_probable_kmer[value] = substring
    if value> m:
        m = value
print(most_probable_kmer[m])  