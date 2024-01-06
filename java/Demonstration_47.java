/*Input with DataInputStream InterestCalculator Program */
//Edit Demonstration_47.java                

import java.io.*;
class Demonstration_47{
   public static void main(String args[ ] ) throws Exception { // throws Exception
       Float principalAmount = new Float(0);
       Float rateOfInterest = new Float(0);
       int numberOfYears = 0;
	   //try{
       DataInputStream in = new DataInputStream(System.in);
	   
       String tempString;
       System.out.print("Enter Principal Amount: ");
       System.out.flush();
       tempString = in.readLine();
	   
       principalAmount = Float.valueOf(tempString);
       System.out.print("Enter Rate of Interest: ");
       System.out.flush();
       tempString = in.readLine();
       rateOfInterest = Float.valueOf(tempString);
       System.out.print("Enter Number of Years: ");
       System.out.flush();
       tempString = in.readLine();
       numberOfYears = Integer.parseInt(tempString);
       // Input is over: calculate the interest
		float interestTotal =     
		principalAmount*rateOfInterest*numberOfYears;
       System.out.println("Total Interest = " + interestTotal);
	//   }
	 //  catch (Exception ex)
	 //  {}
    }
}