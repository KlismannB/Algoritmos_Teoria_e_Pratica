array = [31, 41, 59, 26, 41, 58]

print(array)

disordened = True
changed = False

while(disordened and not changed):
    for i in range(0, len(array) - 1):
        if(array[i] > array[i+1]):
            aux = array[i+1]
            array[i+1] =  array[i]
            array[i] = aux
            changed = True
    if(not changed):
        disordened = False
    changed = False

print (array)