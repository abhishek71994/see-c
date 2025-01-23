Here's the base image https://hub.docker.com/_/gcc and here is what I put in my Dockerfile
FROM gcc:latest
RUN apt-get update && apt-get install -y gdb
RUN apt-get upgrade -y && apt-get install g++ valgrind -y
RUN apt-get install time
RUN apt-get install bash-completion -y


What other things I would like to setup in this:

1. Docker volume setup to run this on a linux image?
2. `nm` usage
3. `valgrind`
4. `readelf`
5. dump like functions