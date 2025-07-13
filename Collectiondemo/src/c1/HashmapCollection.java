package c1;

import java.util.*;

class Employ
{
  int id;
  String name;
  double salary;
  
  
Employ(int id, String name, double salary) {
	super();
	this.id = id;
	this.name = name;
	this.salary = salary;
}


@Override
public String toString() {
	return "Employee [id=" + id + ", name=" + name + ", salary=" + salary + "]\n";
}
  
  

}//class employee end here


class MyKey implements Comparable{
	
	
	int key;

	MyKey(int key) {
		
		this.key = key;
	}

	@Override
	public String toString() {
		return "MyKey [key=" + key + "]";
	}

	@Override
	public int compareTo(Object o) {
		// TODO Auto-generated method stub
		MyKey m1=(MyKey)o;
		return this.key-m1.key;
	}
	
	
}

public class HashmapCollection {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		Employ e1=new Employ(45,"Rohit",2000);
		Employ e2=new Employ(7,"Dhoni",2100);
		Employ e3=new Employ(10,"Rohit",32000);
		
		
		Map m1=new TreeMap<MyKey,Employ>();
		m1.put(new MyKey(45),e1);
		m1.put(new MyKey(10),e2);
		m1.put(new MyKey(7),e3);
		
		System.out.println(m1);
	}
	
	public static void main2(String[] args) {
		
		
		System.out.println("map Demo");
		
		Map m1=new TreeMap<Integer,String>();
		m1.put(45,"Rohit");
		m1.put(7,"Dhoni");
		m1.put(10,"sachin");
		
		System.out.println(m1);
	}

}
