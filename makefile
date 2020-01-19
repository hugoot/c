# 指令编译器和选项
# 最好的用法就是 makefile SRCS这里加所有c文件绝对路径 h绝对路径在c文件里面加
#那个INC不用就完事了 好好的“”就行了 其他不用改
#下一步是怎么主动加上c 这个版本是手动加c
CC=gcc
CFLAGS=-Wall -std=gnu99\
		-D _SAYHELLO\
		# -D _SAY
 

# 目标文件\
不用转斜杠了 直接按相对路径路径就行 也不用加./ 用\
\来增加一行方便看 注释也可以用\多写一行
#target是生成的文件名 srcs是用的函数所有c文件都要写

TARGET=a
SRCS = test.c \
	func2\func2.c  \
	func1\func1.c
	# ./test-sub/test-sub.c
  #   ./test-add/test-add.c \
  
#这里是如果想要用成系统的头文件<>，就在inc下面类似这样加\
不仅是主目录c文件调用 其他此目录调用也可以只在这里加一次就行 
#文件夹目录的相对路径 也是可以不用写./ 有没有空格都可以通过\
这里是test-add.c引用头文件用了<test-add.h>所以这里要加\
这里还是要写的 这个工具的相对目录是指根目录的相对目录\
不是打开文件的相对目录 在非目录的c文件加相对目录会错的，在这里填好文件夹 在非主目录直接加头文件就OK了



INC = -I func2
# -I test-add
# -I./test-add 
# -I./test-sub
OBJS = $(SRCS:.c=.o)
OBJ = obj
 
$(TARGET):$(OBJS)
#	@echo TARGET:$@
#	@echo OBJECTS:$^
	$(CC) -o $@ $^
 
clean:
	rm -rf $(TARGET) $(OBJS)
 
%.o:%.c
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<