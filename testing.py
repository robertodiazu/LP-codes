import re 

str = "$Asi pasaron las cosas$Y asi tambien$Pero tambien pueden ser asi$dasdsadsada$s ad sa da213123 z$"

print str

ex = re.compile(r"\$([A-Za-z0-9 ]+)\$");

r = ex.findall(str);
print r;
