package c1;

import java.util.*;



public class Collection {

	public static void main1(String[] args) {
		// TODO Auto-generatd method stub
		
		TreeSet a1=new TreeSet();
		System.out.println("Tree set");
		
		a1.add(10);
		a1.add(5);
		a1.add(23);
		a1.add(7);
		a1.add(45);
		a1.add(18);
		System.out.println(a1);

	}
	
	public static void main2(String[]args)
	{
		
		List<String> namelist=new ArrayList<String>();
		System.out.println("LinkedList");
		
		namelist.add("Virat");
		namelist.add("Sachin");
		namelist.add("Rohit");
		namelist.add("Surya");
		namelist.add("Jadhav");
		for (String name:namelist) {
			
			System.out.println(""+name);
			
		}
			
		}
		
	}



