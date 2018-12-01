import os

path = "my_fifo"

fifo = open(path,"w")
message = input("Enter your message: ")
fifo.write(message)
fifo.close
