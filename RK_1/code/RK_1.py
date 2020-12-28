"""
Рубежный контроль №1.

Реализовать оптимальный алгоритм решения уравнений из слов, включая = и -.
Есть словарь стран и столиц. Пример уравнения: Париж-Франция = Рим-Италия.
Пользователь может подставить Х в любое из полей.

"""

def getFail(substring):
    fail = [0]*len(substring)
    for i in range(1,len(substring)):
        k = fail[i-1]
        while k > 0 and substring[k] != substring[i]:
            k = fail[k-1]
        if substring[k] == substring[i]:
            k = k + 1
        fail[i] = k
    return fail


def kmp(substring, text):
    index = -1
    f = getFail(substring)
    k = 0
    for i in range(len(text)):
        while k > 0 and substring[k] != text[i]:
            k = f[k-1]
        if substring[k] == text[i]:
            k = k + 1
        if k == len(substring):
            index = i - len(substring) + 1
            break
    return index


def get_position(text):
    pos = 0
    if (first < kmp('X', equ)):
        if (ravno < kmp('X', equ)):
            if ((len(equ) - 1) == (kmp('X', equ))):
                pos = 4
            else:
                pos = 3
        else:
            pos = 2
    else:
        pos = 1
    return pos


def find_in_text(pos, text, first, ravno, second):       
    if (pos == 1):
        word = equ[first + 1 : ravno]
    if (pos == 2):
        word = equ[0 : first]
    if (pos == 3):
        word = equ[second + 1 : len(equ)]
    if (pos == 4):
        word = equ[ravno + 1 : second]
    return word


def get_key(d, value):
    for Country, Sity in d.items():
        if Sity == value:
            return Country


def get_answer(pos, word):        
    if ((pos % 2) == 0):
        answer = d.get(word)
    else:
        answer = get_key(d, word)
    return answer

d = {'Russia': 'Moscow', 'Canada': 'Ottawa', 'Italy': 'Roma', 'Spain': 'Barselona'}

print("Make an equation of countries and their capitals!\n")

print("Available countries and capitals: \n", d)

print("\nEnter an equation of the form:\n")

print("Russia-Moscow = Canada-X or X-Roma = Spain-Barselona\n")

equ = input("Your variant: ")

first = kmp('-', equ)
ravno = kmp('=', equ)
piece = equ[ravno + 1 : len(equ)]
second = (kmp('-', piece) + ravno + 1)

pos = get_position(equ)

word = find_in_text(pos, equ, first, ravno, second)
    
print("\nGot it! X = ", get_answer(pos, word))

