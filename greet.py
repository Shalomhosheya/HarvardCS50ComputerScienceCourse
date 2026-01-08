from sys import argv
import sys
for arg in argv[0:3]:
    print(arg)
    
if len(argv) != 2:
    print("missing command-line argument")
    sys.exit(1);
print("Hello, " + argv[1] + "!")
sys.exit(0)