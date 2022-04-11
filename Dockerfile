FROM osrf/ros:noetic-desktop-full AS base2004
RUN curl -s https://raw.githubusercontent.com/ros/rosdistro/master/ros.asc | sudo apt-key add -

RUN apt-get update && apt-get install -y gcc g++

RUN mkdir /usr/lib/eigen
COPY eigen-3.3.7/ /usr/lib/eigen/

WORKDIR /code_2004
COPY my_program.cpp .

RUN g++ -O0 -I /usr/include/eigen3/ my_program.cpp -o program_2004_o0
RUN g++ -O1 -I /usr/include/eigen3/ my_program.cpp -o program_2004_o1
RUN g++ -O2 -I /usr/include/eigen3/ my_program.cpp -o program_2004_o2
RUN g++ -O3 -I /usr/include/eigen3/ my_program.cpp -o program_2004_o3
RUN g++ -Os -I /usr/include/eigen3/ my_program.cpp -o program_2004_os
RUN g++ -Ofast -I /usr/include/eigen3/ my_program.cpp -o program_2004_ofast

CMD lsb_release -a && cd /code_2004 && g++ -v&& echo "optimization -O0" && ./program_2004_o0  && echo "optimization -O1" && ./program_2004_o1 && echo "optimization -O2" && ./program_2004_o2  && echo "optimization -O3" && ./program_2004_o3 && echo "optimization -Os" && ./program_2004_os && echo "optimization -Ofast" && ./program_2004_ofast