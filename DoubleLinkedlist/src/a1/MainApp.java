package a1;

import java.util.Scanner;

public class MainApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		DoublyLinkedlist myList = new DoublyLinkedlist();
		Scanner sc = new Scanner(System.in);
		int choice = 0;
		while (choice != 5) {

			System.out.println("\t1.Insert Beg");
			System.out.println("\t2.Display All");
			System.out.println("\t3.Insert at End");
			System.out.println("\t4.Delete at Beg");
			System.out.println("\t5.Delete at End");
			System.out.println("\t6.Exist");
			System.out.println("Enter your choice");
			choice = sc.nextInt();

			switch (choice) {

			case 1: {

				int ele;
				System.out.println("Enter element you wnat to insert at begining:");
				ele = sc.nextInt();
				myList.insertBeg(ele);
				System.out.println("Element at end added succesfully");
				break;

			}
			case 2: {

				myList.displayAll();
				break;

			}
			case 3:{
				
				         int ele;
				         System.out.println("Enter element you want to insert at ened:");
				         ele=sc.nextInt();
				         myList.insertEnd(ele);
				         break;
				
			}
			
			case 4:{
				
				
				       int ele;
				       System.out.println("Enter element which you wnat to delete at Beg");
				       ele=sc.nextInt();
				       myList=deleteBeg(ele);
				       break;
			}
			case 5:{
				
				      int ele;
				      System.out.println("Eneter element which you wnat to delete");
				      ele=sc.nextInt();
				      myList=deleteEnd(ele);
				      break;
				      
				      
			}

			case 6: {

				System.out.println("----Vanish--------");
				break;
			}
			default: {

				System.out.println("Invalid Choice");
				break;
			}

			}
		}
	}

	

}
