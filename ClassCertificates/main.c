//
//  main.c
//  ClassCertificates
//
//  Created by Edwin Cardenas on 12/27/24.
//

#include <stdio.h>
#include <unistd.h>

void congratulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n",
           student, course, numDays);
}

int main(int argc, const char * argv[]) {
    congratulateStudent("Kate", "Cocoa", 5);
    sleep(2);
    congratulateStudent("Bo", "Objective-C", 2);
    sleep(2);
    congratulateStudent("Mike", "Swift", 5);
    sleep(2);
    congratulateStudent("Liz", "iOS", 5);
    
    return 0;
}
