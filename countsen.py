import re
line = " hello world."
count = len(re.findall(r'\w+', line))
print (count)
