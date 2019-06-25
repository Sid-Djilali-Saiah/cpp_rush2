NAME	= test

CC	= g++

RM	= rm -f

TOY	= ./test_toy.cpp  \
	  ../object/Object.cpp \
	  ../object/toy/Teddy.cpp \
	  ../object/toy/LittlePony.cpp \
	  ../object/toy/Toy.cpp

WRAP	= ./test_wrap.cpp  \
	  ../object/Object.cpp \
	  ../object/wrap/Box.cpp \
	  ../object/wrap/GiftPaper.cpp \
	  ../object/wrap/Wrap.cpp   \
	  ../object/toy/Teddy.cpp \
	  ../object/toy/LittlePony.cpp \
	  ../object/toy/Toy.cpp	\
	  ../object/toXml.cpp

TESTS	= ../object/Object.cpp \
	  ../object/wrap/Box.cpp \
	  ../object/wrap/GiftPaper.cpp \
	  ../object/wrap/Wrap.cpp   \
	  ../object/toy/Teddy.cpp \
	  ../object/toy/LittlePony.cpp \
	  ../object/toy/Toy.cpp	\
	  ../object/toXml.cpp \
	  ./test_all.cpp

CFLAGS = -I ./object/pp

CFLAGS += -W -Wall -Wextra

all: echo "use toy or wrap"

toy:
	 $(CC) $(TOY) -g3 -o $(NAME) $(LDFLAGS) && cat ./santa.ascii

wrap:
	 $(CC) $(WRAP) -g3 -o $(NAME) $(LDFLAGS) && cat ./santa.ascii

tests:
	 $(CC) $(TESTS) -g3 -std=c++11 -o $(NAME) $(LDFLAGS) && cat ./santa.ascii

.PHONY: all clean fclean re toy wrap
