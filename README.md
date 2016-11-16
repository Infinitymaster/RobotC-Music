# RobotC-Music
Functionality for transcribing songs using RobotC and mindstorm hardware

RobotC has the function PlayTone() for using a built-in speaker to play a specific frequency
for a given length. For playing monophonic music, this is fairly awkward and requires many
lines and a lot of math. It would be far more convenient to just write the musical notes as 
they appear on a piece of music, and have a method of converting all those notes to their 
frequencies and durations. 

That is what Music.h is for. The header goes into more detail on how exactly one transcribes
a piece of music, but the general process I'd recommend is as follows:

  1) Transcribe a piece of music in as many parts as are required into Songbook.h
  2) Add the title to the book array in Songbook.h
  3) Add an additional "else" statement to Musician.h
  4) Add all the parts from Songbook.h to the body of this "else" statement
  4) #include Musician.h in your program.
  5) Call PlayTune with the title of the piece
