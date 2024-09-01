/*
============================================================================
Name : 17a.c
Author : Tanvi Kulkarni
Description :  Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit.
Date: 27th Aug, 2024.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

int main(void) {
	int fd;
	struct {
		int ticket_no;
	}db;
	db.ticket_no = 10;
	fd = open("db", O_CREAT|O_RDWR, 0744);
	write(fd, &db, sizeof(db));
	close(fd);
	fd = open("db", O_RDONLY);
	read(fd, &db, sizeof(db));
	printf("ticket No: %d\n", db.ticket_no);
	close(fd);
}
