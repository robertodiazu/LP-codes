      read(5,100) n
      if (n < 0) write(6,200)
      if (n > 0) write(6,300)
100   format(i8)      
200   format("negative")
300   format("positive")
      stop
      end