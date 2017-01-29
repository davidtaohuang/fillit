# fillit
Second 42 project. Partner project with Prateek Patil (https://github.com/TinfoilPancakes). A program that takes a formatted list of tetris pieces and outputs the smallest square that fits them and their positions. See fillit.en.pdf.

For this project, I worked mostly on the error checking of the input files to the program. A valid input file has the following characteristics:

1. 1-26 tetrominos, each represented by a 4 by 4 grid or characters
2. On the grid, "." characters represent empty space while "#" characters represent the blocks of the tetromino
3. Each tetromino is composed of exactly 4 connected blocks
4. Piece grids representing tetrominos are separated by a single newline
5. There is no newline after the last tetromino

An example of a valid input file is as follows:
```
####
....
....
....

##..
.##.
....
....

#...
#...
##..
....
```
