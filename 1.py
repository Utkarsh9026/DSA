def star_pattern(n):
   i = n
   while i>1:
      
      print(" "*(n-i) + "* " * i)
      i-=1
   i = 1
   while i<=n:
      
      print(" "*(n-i) + "* " * i)
      i+=1
 
n = int(input('Enter the number of rows: '))
star_pattern(n)





