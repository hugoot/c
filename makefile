CC = gcc
RM = rm
 
CFLAGS += -D _SAYHELLO\
		  -D _SAYHEHE
 
TARGETS := me
 
all:$(TARGETS)
 
$(TARGETS):main.c
	$(CC) $(CFLAGS) $^ -o $@
 
clean:
	-$(RM) -f *.o
	-$(RM) -f $(TARGETS)