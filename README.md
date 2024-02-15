# cs-probation-task

## Task 1
#### Simple RGB image class implementation

## Task 2
#### Flipping and inverting an image

Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.
For example, flipping [0,1,1] horizontally results in [1,1,0].

To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.
For example, inverting [1,1,0] results in [0,1,1].

Input: [ [0, 0, 1, 0], 
         [1, 1, 1, 0], 
         [0, 0, 0, 1] ]

Output: [ [1, 0, 1, 1], 
          [1, 0, 0, 0], 
          [0, 1, 1, 1] ]

## Task 3
#### Counting the number of objects in an image

Given an m x n binary image which is represented by '1's (object) and '0's (background), return the number of objects.

An object is formed by connecting adjacent objects horizontally or vertically. 

Example: 

Input: image =  [

    ['1','1','0','0','0'],
  
    ['1','1','0','1','1'],
  
    ['0','0','1','0','0'],
  
    ['1','1','0','1','1'] ]

Output: 5

