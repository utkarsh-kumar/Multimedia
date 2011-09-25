CC=gcc
CFLAGS= -g
PROJECT_PATH=/home/utkarsh/Documents/Multimedia
INCLUDE_PATH=-I $(PROJECT_PATH)/OpenCV-2.3.1/include/opencv/ -I$(PROJECT_PATH)/image_processor/inc/
OBJDIR=$(PROJECT_PATH)/image_processor/obj
LIBRARY_LINK=-lopencv_highgui
vpath %.cpp ../src/

vpath %.h ../inc/ $(PROJECT_PATH)/OpenCV-2.3.1/include/opencv/


SOURCE=Multimedia_functions.cpp Multimedia_tool.cpp Multimedia_init.cpp
OBJS = $(SOURCE:.cpp=.o)
EXECUTABLE=image_processor

$(EXECUTABLE) : $(OBJS) 
	$(CC) $(CFLAGS) $(INCLUDE_PATH) -o $(EXECUTABLE) $(OBJS) $(LIBRARY_LINK)

Multimedia_functions.o: Multimedia_functions.cpp Multimedia_tool.h
	@echo $(OBJS)
	gcc $(INCLUDE_PATH) -c  $<
Multimedia_tool.o: Multimedia_tool.cpp Multimedia_tool.h
	@echo $(OBJS)
	gcc $(INCLUDE_PATH) -c  $<
Multimedia_init.o: Multimedia_init.cpp Multimedia_tool.h highgui.h
	@echo $(OBJS)
	gcc $(INCLUDE_PATH) -c  $<

clean :
	rm -Rf *.o
	rm image_processor

clean-obj:
	rm -Rf *.o

