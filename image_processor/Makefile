CC=gcc
CFLAGS= -g
PROJECT_PATH=/home/utkarsh/Documents/Multimedia
INCLUDE_PATH=-I $(PROJECT_PATH)/OpenCV-2.3.1/include/opencv/ -I/inc/
OBJDIR=$(PROJECT_PATH)/image_processor/obj
LIBRARY_LINK=-Lopencv_highgui
vpath %.cpp ../src/

vpath %.h ../inc/


SOURCE=Multimedia_functions.cpp Multimedia_tool.cpp Multimedia_init.cpp
OBJS = $(SOURCE:.cpp=.o)
EXECUTABLE=image_processor

$(EXECUTABLE) : $(OBJS) 
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -o $(EXECUTABLE) $(OBJS) $(LIBRARY_LINK)

Multimedia_functions.o: ../src/Multimedia_functions.cpp ../inc/Multimedia_tool.h
	@echo $(OBJS)
	gcc $(INCLUDE_PATH) -c  $<
