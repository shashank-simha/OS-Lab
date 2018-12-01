import os

path = "my_fifo"
fifo = open(path, "r")

for line in fifo:
	print ("Received: " +line)

fifo.close()
