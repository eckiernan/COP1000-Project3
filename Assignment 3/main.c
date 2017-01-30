//
//  main.c
//  Assignment 3
//
//  Created by Elizabeth Kiernan on 1/30/17.
//  Copyright © 2017 Elizabeth Kiernan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double testGrade1, testGrade2, testGrade3, testGrade4;
    double averageGrade;
    
    printf ("Enter the first test grade: \n");
    scanf ("%lf", &testGrade1);
    printf ("You entered: %.2lf\n", testGrade1);
    
    printf ("Enter the second test grade: \n");
    scanf ("%lf", &testGrade2);
    printf ("You entered: %.2lf\n", testGrade2);
    
    printf ("Enter the third test grade: \n");
    scanf ("%lf", &testGrade3);
    printf ("You entered: %.2lf \n", testGrade3);
    
    printf ("Enter the fourth test grade: \n");
    scanf ("%lf", &testGrade4);
    printf ("You entered: %.2lf \n", testGrade4);
    
    averageGrade = (testGrade1 + testGrade2 + testGrade3 + testGrade4) / 4;
    printf ("Your average test grade is: %.2lf\n", averageGrade);
    
    
    if (averageGrade < 60) {
        printf ("Letter Grade: F\n");
        
    } else {
        if (averageGrade < 70) {
            printf ("Letter Grade: D\n");
            
        } else {
            if (averageGrade < 80) {
                printf("Letter Grade: C\n");
                
            } else {
                if (averageGrade < 90) {
                    printf ("Letter Grade: B\n");
                    
                } else {
                    if (averageGrade <= 100) {
                        printf ("Letter Grade: A\n");
                    }
                }
            }
        }
    }

    return 0;
}
