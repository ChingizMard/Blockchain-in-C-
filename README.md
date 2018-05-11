# Blockchain from scratch in C++
## Overview
There are many tutorials on the web explaining how to implemet blockchain from the beginning. This is just my implementation of the basic proof-of-work chain. If someone finds it usefull, that would be great.

## How this is organized
This repo is organized by commits. My first commit is the initial state or basic structure of the chain. Then I add hashing to it in the next commit, then checking validity in the next one... And so on. This way you can easily see the progress of the implementation. Basically, all of the commits are organized in the appropriate order and by topic. 

## How to follow along

In order to follow along with the development, I suggest chcking out a commit you find interesting and start implemnting the desired changes. Inside of the `src` folder you will find a `Makefile`. In order to run the code, at any point in time execute `make` in the root of the repository. To clean up run `make clean`.