# OShw_one
Author:
  @TexasHolden
This is the first assignment for Operating Systems. The instructions for the project was to make a producer and consumer program with sephamors. 
Instructions:
  To run the program, enter these commands:
    gcc producer.c -pthread -lrt -o producer
    gcc consumer.c -pthread -lrt -o consumer
    ./producer & ./consumer &
Note from the Creater:
  I felt completely underprepared in this project and I did not get this program to work. Any logic that I thought I understood about semaphors either didn't work or there was this complete other part. I did not know how to use shared memory, which was how the two c files communicated. I never dealt with having two main files, I never learned c, and being forced to have to google everything proved to not work but also consumed my days. So, I figured out how to work with semaphores, however it was without shared memory. Please, grade this nicely, for I have skipped multiply classes and spent so much time stressing over this project that seems so easy but I just did not have the knowledge to do this.
  
 Language:
  C
  
 Built with:
  Linix Ubuntu Virtual Machine
  Vscode
  
  Journal:
[12:52] So, for the pass few days I had no idea what I was doing and manages to complete nothing. I have an idea, but I would like to say that I and the class have felt underprepared for this assignment and hope you understand when grading. One thing that still confuses me is how your code comunicates with each other. In my experience, I only really know having a main file then additional header files, where you would include them in the code, linking them in a way. I don't see that, so maybe that's a c quirk. Anyhow, I'm choosing to do away with your "shared memory" method for I am inept to do so. 
[4:20] I found things online that can prove to be helpful, but they all have consumer and producer as seperate files. They are helping me figure things out right now, so I am going to solve the problem with one file, then split it to two.
[5:50] I feel that all the pieces are there, but what I need is to figure out the logic.
[6:05] So...my code at the moment "works." However, it seems that their are two tables being made at a time. WHY? Is it the two for loops (one on consumer one on producer)? that wouldn't make sense due to every code having the loop act like this. There's something I missed.
Sources:
  https://medium.com/@sohamshah456/producer-consumer-programming-with-c-d0d47b8f103f
  https://shivammitra.com/c/producer-consumer-problem-in-c/
  https://www.youtube.com/watch?v=rPV6b8BUwxM&t=94s
