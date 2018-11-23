# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 14:42:19 by lpan              #+#    #+#              #
#    Updated: 2018/11/09 14:42:23 by lpan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
INC = -Iincludes
TARGET = ft_display_file
OBJECTS = $(SOURCES:.c=.o)
SOURCES = ./ft_display_file.c

all: $(TARGET)

$(TARGET):
	gcc $(CFLAGS) $(INC) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
