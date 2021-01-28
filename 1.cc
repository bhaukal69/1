import csv
a = []
num_attributes = 6
with open('trainingexamples.csv') as csvfile:
    reader = csv.reader(csvfile)
    for row in reader:
        a.append(row)
        print(row)

hypothesis = ['Φ'] * num_attributes
print("\n", hypothesis)

for i in range(num_attributes):
    hypothesis[i] = a[0][i]

for i in range(len(a)):
    if a[i][num_attributes] == 'Y':
        for j in range(num_attributes):
            if hypothesis[j] != a[i][j]:
                hypothesis[j] = '?'
    print("\n", hypothesis)
