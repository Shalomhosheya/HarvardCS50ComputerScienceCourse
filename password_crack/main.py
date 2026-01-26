from string import digits
from itertools import product
for passwords in product(digits, repeat=4):
    print(*passwords)