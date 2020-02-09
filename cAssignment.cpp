#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

                      // to find the factorial  0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
//                      int a = 0 , b = 1 , sum = 0, n = 1;
//                      printf("%d %d",a,b);
//                      while(n <= 10){
//                      	sum = a + b ;
//                      	printf(" %d " ,sum);
//                              a = b;
//                      	b = sum ;
//                      	n++;
//		  }

                        //prime or not
/*          int n, i, c, d = 0;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i = 1;i <= n; i++){
		c = n % i ; 
	 if(c == 0){
	 	d = d + 1;
	 	}
	
	}  
	 if(d == 2){
	 	printf("Prime");
	 }
	 else{
	 	printf("Composite");
	 } */
	        
	        
	        
	        
	        
	        
	        // 1 no
//	float area , circumference, radius;
//	float PI =3.1415;
//	printf("Enter radius of circle: ");
//	scanf("%f",&radius);
//	area = PI * pow(radius , 2);
//	circumference = 2 * PI * radius;
//	printf("The area of circle is : %.2f",area);
//	printf("\nThe circumference of circle is : %.2f",circumference);

                         // 2
//	float SI, principal,time,rate;100
//	printf("Enter principal, Time and Rate: \n");
//	scanf("%f\n%f\n%f",&principal,&time,&rate);
//	
//	SI = principal * rate * time * 0.01;
//	printf("\nThe simple interest is : %.2f",SI);


                     
                          //3
//          float fahrenheit_temperature, celcius_temperature;
//	printf("Enter temperature in fahrenheit scale : ");
//	scanf("%f",&fahrenheit_temperature);
//	celcius_temperature = ( fahrenheit_temperature - 32 ) / 1.8;
//	printf("\nTemperature in celcius scale is : %.2f",celcius_temperature); 

                                    //
			      // 4
//          float fahrenheit_temperature, celcius_temperature;        
//	printf("Enter temperature in celcius scale : \n");
//	scanf("%f",&celcius_temperature); 
//	fahrenheit_temperature = (celcius_temperature * 1.8) + 32;
//	printf("\nTemperature in fahrenheit scale is : %.2f",fahrenheit_temperature);


                      
		  // sum of the first and the last digit of the number
		  
//	int number ,count = 0 , first , a, last;
//	printf("Enter any number : ");
//	scanf("%d",&number);
//	a = number; 
//          while( number > 0){
//          	number = number /10 ;
//          	count ++;
//		}
//          first = a / pow(10, count - 1);
//          last =  a % 10;
//          printf("The sum of digit is %d",first+last);


  
                          // to find the sum of the digits of given number
                          
//          int number, digit, sum = 0;
//	printf("Enter any number : ");
//	scanf("%d",&number);
//	while(number != 0){
//	digit = number % 10;
//	sum += digit;
//	number = number / 10;
//	}      
//	printf("The sum of the digits is %d ", sum);

                       //7
//          int number, sum = 0, digit;
//	printf("Enter any number: ");
//	scanf("%d",&number);
//	while(number > 0){
//	digit = number % 10;
//	sum += pow(digit , 2);
//	number = number / 10;}             
//	printf("The sum of the squares of digit is : %d",sum);
                               //8
//          int number, digit,  sum = 0;
//	printf("Enter any number :");
//	scanf("%d",&number);
//	while(number > 0){
//		digit = number % 10;
//		sum += digit * digit * digit ;
//		number /= 10;
//	}                   
//	printf("The sum of the cube of digits of the number is %d",sum);
 
                           //9
                         
                         // to check armgstrong or not
//       int number, a, b, arm = 0;
//       printf("Enter any number: ");
//       scanf("%d", &number);
//       b = number;
//       while(number > 0){
//       	a = number % 10;
//       	arm = arm + a * a * a;
//       	number = number / 10;
//       }
//     
//       if(arm == b){
//       	printf("Armstrong");
//       }
//       else{
//       	printf("Not Armstrong ");
//       } 
  
                            // 10
//          float 
//	 length, breadth;
//	printf("Enter length:");
//	scanf("%f\n%f",&length,&breadth);
//
//
//	printf("The area is: %.2f  and perimeter is: %.2f",(length * breadth),2 * (length + breadth)); 

                          //11
//          float num1, num2;
//	printf("Enter any two numbers:\n");
//	scanf("%f\n%f",&num1,&num2);
//	printf("Sum is %.2f\n", num1 + num2);
//	printf("Subtraction is %.2f\n", num1 - num2);
//	printf("Division is %.2f\n", num1 / num2);
//	printf("Multiplication is %.2f", num1 * num2);

                       //12
//         int a, b, c;
//         float alpha,beta,d;
//         printf("Enter a , b and c:\n");
//         scanf("%d%d%d",&a,&b,&c);
//         d = b*b - 4*a*c;
//         if ( d < 0){
//         	printf("roots are imaginary !!");
//         }
//         else{
//        
//         alpha = (-b + sqrt(d)) / (2 * a);
//         beta  = (-b - sqrt(d)) / (2 * a); 
//         if(alpha == beta){
//         	printf("%.f is the only the required root",beta);  
//         }
//         else{
//         	printf("%.f , %.f are the required roots",alpha,beta);    
//         }
//          }

                           //13
//          int number;
//	printf("Enter any number: ");
//	scanf("%d",&number);
//	if(number % 2 == 0){
//		printf("Even !!");
//	}                 
//          else{
//          	printf("Odd !!"); }
 
//                      //14
//            int number;
//	printf("Enter any number: ");
//	scanf("%d",&number);
//	if(number % 3 == 0){
//		printf("Divisible by 3 !!");
//	}                 
//          else{
//          	printf("Not Divisible by 3 !!"); }  

                       //15
//	int number;
//	printf("Enter any number: ");
//	scanf("%d",&number);
//	if(number % 5 == 0 && number % 11 == 0){
//		printf("Divisible by both 5 and 15 !!");
//	}                 
//          else{
//          	printf("Not Divisible by both 5 and 11 !!"); 
//		} 
                       
		    //16
//          int number;
//	printf("Enter any number: ");
//	scanf("%d",&number);
//	if(number % 5 == 0 && number % 11 == 0){
//		printf("Divisible by both 5 and 15 !!");
//	} 
//	else if(number % 5 == 0 && number % 11 != 0){
//		printf("Divisible by 5 only !!");
//	}                
//	else if(number % 5 != 0 && number % 11 == 0){
//		printf("Divisible by 11 only !!");
//	}
//          else{
//          	printf("Not Divisible by both 5 and 11 !!"); 
//		}

                    //17
//	int number;
//	printf("Enter any number: ");
//	scanf("%d",&number);
//	if(number % 5 == 0 && number % 11 != 0){
//		printf("Divisible by 5 only but not by 11 !!");
//	}
	
	               //18
//		     int year;
//		     printf("Enter any year: ");
//		     scanf("%d",&year);
//		     if(year % 4 == 0){
//		     	printf("Leap year !!");
//		     	
//		     }			                             
//	        else{
//	        	printf("Not leap year !!");
//	        }

                //19
//          int first_number , second_number;
//	printf("Enter first and second number: \n");
//	scanf("%d\n%d",&first_number,&second_number);
//	if(first_number % second_number == 0){
//		printf("First number is divisible by second number !!");
//	}      
//	else{
//		printf("Not divisible !!");
//	}


                           //20
//          float angle1, angle2, angle3;
//	printf("Enter three angles of the triangle:\n");
//	scanf("%f%f%f",&angle1,&angle2,&angle3);
//	if( angle1+angle2+angle3== 180 && angle1==angle2==angle3 != 0){
//		
//		if( angle1 == 90 || angle3 == 90 || angle2 == 90 ){
//			printf("Right angle triangle !!");
//		}
//		else{
//			printf("Not right angle trangle !!");
//		}
//		
//	}                 
//	else{
//		printf("Invalid input !!");
//	}

                              //21
//  char letter;
//  printf("Enter any letter: ");
//  scanf("%c",&letter);
//  
//  if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter =='u'){
//  	printf("Vowel character !!");
//  }
//  else{
//  	printf("Consonant character !!");
//  }				        
 
                           //22
//	int number1,number2;
//	printf("Enter any two numbers: \n");
//	scanf("%d\n%d",&number1,&number2);
//	if(number1 > number2){
//		printf("Number1 is greater !!");
//	}	       	            
//	else{
//		printf("Number2 is greater !!");
//
//	}
	 
	                //23
	                
//	int number1,number2,number3;
//	printf("Enter any three numbers: \n");
//	scanf("%d\n%d\n%d",&number1,&number2,&number3);
//	if(number1 > number2 && number1 > number3){
//		printf("Number1 is greatest !!");
//	}	       	            
//	else if(number2 > number1 && number2 > number3){
//		printf("Number2 is greatest !!");
//	 } 
//	else{
//		printf("Number3 is the greatest !!");
//	}




                              //24
//	float cost_price, selling_price;
//	printf("Enter cost price: ");
//	scanf("\n%f",&cost_price);
//	printf("Enter selling price: ");
//	scanf("\n%f",&selling_price);
//	if(selling_price > cost_price){
//		printf("Profit !!");
//	}		          
//	else
//	{printf("Loss !!");
//	    } 


//int number1 , number2, number3;
//printf("Enter any three number: \n");
//scanf("%d\n%d\n%d",&number1,&number2,&number3);
//if(number1 > number2 && number1 < number3 || number1 > number3 && number1 < number2){
//	printf("Number1 is the middle number !!");
//}
//else if( number2 > number1 && number2 < number3 || number2 > number3 && number2 < number1  ){
//	printf("Number2 is the middle number !!");
//}
//	
//else{
//	printf("Number3 is the middle number !!");
//}

                                     
                                     
//int second;
//int  hour, minute, seconds;
//printf("Enter total seconds: ");
//scanf("%d",&second);
//hour = second /3600;
//minute = (second % 3600) / 60;
//seconds = second - hour * 3600 - minute * 60;
//printf("\n%d hour \n%d minute \n%d seconds",hour,minute,seconds);


                              
                    
                      //hcf and lcm  using loop                
//	      int num1 , num2;
//                int i, j,min,hcf = 1 , lcm;
//                printf("Enter num1:");
//                scanf("%d",&num1);
//                printf("Enter num2:");
//                scanf("%d",&num2);
//                
//                for(j = 1 ; j <= num1 ; j++ ){
//                	
//                	if(num1 % j == 0 && num2 % j == 0){
//                	          hcf = j;	
//		      }
//                	
//	      }
//	      lcm = num1 * num2 / hcf;
//	      printf("\n %d is the lcm",lcm);
//	      printf("\n %d is the hcf",hcf);



                // to convert into lower and upper case
//char letter1[2],upr[2] , lwr[2], letter[2];
//printf("Enter letter:");
//scanf("%s",&letter);
//
//
//strcpy(letter1, letter);
//strlwr(letter1);
//if(strcmp(letter1,letter) == 0){
//	
//	printf("%s is in uppercase",strupr(letter1));
//}
//else{
//	printf("%s is in lowercase",strlwr(letter1));
//}


          //28 
//         
//    float a, b, c, d, e, total, percentage ;
//    printf("Enter marks of five subject:\n");
//    scanf("\n%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&e);
//    if(a>=32  && b>=32 && c>=32 && d>=32 && e>=32){
//    	if(a < 101 &&b < 101 &&b < 101 &&b < 101 &&b < 101 ){
//	    
//   
//    total = a+b+c+d+e;
//    percentage = total / 5;
//    printf("%.1f is the total marks \n %.1f total percentage \n\n",total,percentage);
//    if(percentage > 80){
//    	printf("Distinction !!");
//    }
//    else if(percentage >= 70 ){
//    	printf("First division !!");
//    }
//    else if(percentage >= 60 ){
//    	printf("Second division !!");
//    }
//    else if(percentage >= 50){
//    	printf("Third division !!");
//    }
//   else if(percentage >= 40 ){
//    	printf("Fourth division !!");
//    }
//    else{
//    	printf("Fifth division !!");
//    }
//    
//    
//}
//else{
//	printf("Invalid input !!");
//}
//}
//
//else{
//	printf("You failed !!");
//}
    
          //29 to swap the value
//      int a, b, c;
//      printf("Enter two number:\n");
//      scanf("%d%d",&a,&b);
//      printf("a is %d and b is %d",a,b);
//     c = a;
//      a = b;
//      b = c;
//      printf("\nAfter swaping \n a is %d and b is %d",a,b);
                      
         
         
        //Assignment 2
                      //read n number of value in an array and dislay it in reverse order
//                      int number, j, i;
//                      int arr[number];
//                      printf("Enter number of value:");
//                      scanf("%d",&number);
//                      printf("Enter the elements:\n");
//                      for(i = 0; i < number; i++){
//                      	scanf("%d",&arr[i]);
//		  }
//		  printf("Array in reverse order is:\n");
//		  for(i = number - 1; i >= 0  ; i--){
//		  	printf("%d\t",arr[i]);
//		  }






 //count a total number of duplicate elements in the array
 // find the maximum and the minumum element in the array
 // ascending order
 //find second largest element in the array
 //add two matrix of same order
 // multiply two square matrix
 //transpose given matrix  
 
       
       
                 // string homework
//     char name[15] ;
//     int length, i, count = 0;
//     printf("Enter any word:\n");
//     scanf("%s",name);
//     length = strlen(name);
//     strlwr(name);
//     for(i = 0; i <= length; i++){
//     if(name[i] == 'a' || name[i] == 'e' ||name[i] == 'i' ||name[i] == 'o' ||name[i] == 'u'  ){
//     	count++;
//     }
//     	 
//           	
//     }
//     printf("Number of vowel is %d", count);
//  
//     printf("\nNumber of consonant is %d", length-count);

                                  
     
     
     
}
     
     
     
     
 
 
              
         




