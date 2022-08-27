//*Write down a program that will convert a user's time given as input in seconds into hours, minutes and seconds.*//
//*For example if the user's time is 18,247 then *//
//*converted time will be 5 hours 4 minutes and 7 seconds*//
main(){


int a, b, d, e, f;
printf("Enter Time in Seconds:");
scanf("%d", &a); //* a is the user time input*//

b= a / 3600; // b is the the user time(in seconds) divided by 60*60 to give the time in hours//

e = a / 60; // the first output time, e(which represents the output hour) is the user time(in seconds) divided by 60 to give the output time in minutes //

f = e - (b*60); // the second output time, f (which should be in minutes) is obtained by//
//subtracting the users converted time(from second into minutes) with the time(users seconds into hour and that whole number hour into minutes)//

d= a % 60; //when dividing the user time(in seconds) with 60 to get the time output in minutes,//
// the remainder of the division represent the third output time(which is the seconds) //


printf("%d hours %d minutes %d seconds", b, f, d );


}
