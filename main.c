/* his program helps the user to calculate the sum, average, maximum, minimum
 * of the numbers he wants and needs, for that we display a menu with functions
 *
 * Author:Karla Alexandra Hernandez Aviles
 * Email:A01411843@itesm.mx
 * Date:14/10/2018
 * */

#include <stdio.h>
//Declare all the ecuations that the program use
//in this part declare the formula or ecuation for a sum
 double sum(double numbs[], int n){
    double sum = 0;
    for(int k = 0; k < n; k++){
        sum += numbs[k];
    }
    return sum;
 }
 //In this part declare the ecuation for the average
 double average(double numbs[], int n){
    return sum(numbs, n)/n;
}
 //In this part, the program will get the minimum value of all the numbers that the user entered
 double min(double numbs[], int n){
    double min = numbs[0];

    for(int k = 0; k < n; k++){
        if(min > numbs[k]){
            min = numbs[k];
        }
    }
    return min;
 }
 //In this part , the program will get the maximum value out of all the numbers that the user entered
 double max(double numbs[], int n){
    double max = numbs[0];

    for(int k = 0; k < n;k++){
        if(max < numbs[k]){
            max = numbs[k];
        }
    }
    return max;
 }
 //Declare the menu
 void MainMenu(){
    printf(" 1. Sum.\n "
           "2. Average.\n "
           "3. Min.\n "
           "4. Max\n "
           "5. Exit.\n");

    printf("Select an option please:" );
 }
 int main()
 {
    //Declaration of variables
    int n;
    int choice;

    //Ask to the user the amount of numbers that he/she would like. If a number is not entered, the program will stop working
    printf("Enter the numbers of values that you would like: ");
    scanf("%d", &n);

    double numbs[n];
    //Asking the user for the numbers.
    printf("Enter the %d  numbers would you like : ", n);
    for(int k = 0; k < n; k++)
    {
        scanf("%lf", &numbs[k]);
    }
    //the processes that the program will be doing until the user tell it to stop
    do {
        MainMenu();
        scanf("%d", &choice);

        switch(choice){
            case 1:
                //sum of the numbs
                printf("The sum of the numbs is %lf\n", sum(numbs, n));
                break;
            case 2:
                //average of the numbs
                printf("The average of the numbs is %lf\n", average(numbs, n));
                break;
            case 3:
                //the minimum value of the numbs
                printf("The minimum value is %lf\n", min(numbs, n));
                break;
            case 4:
                //the maximum value of the numbs
                printf("The maximum value is %lf\n", max(numbs,n));
                break;
            case 5:
                //Ends the program
                printf("Good bye!");
                break;
            default:
                //If the user entered something other than one of the options, the user receives an error
                printf("Invalid, check the values\n");
                break;
        }
        //When the user enters a 5, the program will end.
    }while (choice != 5);

    return 0;

}