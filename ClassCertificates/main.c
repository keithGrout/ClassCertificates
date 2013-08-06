//
//  main.c
//  ClassCertificates
//
//  Created by Keith on 7/31/13.
//  Copyright (c) 2013 Appology. All rights reserved.
//

#include <ctype.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
void congratulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s programming as i could fit into %d days. \n", student, course, numDays);
}

int main(int argc, const char * argv[])
{

    congratulateStudent("Mark", "Cocoa", 5);
    congratulateStudent("Bo", "Objective C", 2);
    congratulateStudent("Mike", "Python", 5);
    congratulateStudent("Ted", "iOS", 5);


    return 0;
}

