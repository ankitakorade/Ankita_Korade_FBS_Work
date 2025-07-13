package p1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class Insert {

	public static void main(String[] args) {
         String user;
         String pass;
		int result = 0;

		try {
		
			  Scanner sc=new Scanner(System.in);
			Class.forName("com.mysql.cj.jdbc.Driver");

	
			Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/employee", "root", "MySQL@123");

			user=sc.nextLine();
			pass=sc.nextLine();
			String query = "insert into employee (emp_id, emp_name,age, salary, `Salary Category`) "
					+ "values (101, 'Ankita',23, 60000, 'High')";

		
			Statement stmt = con.createStatement();
			result = stmt.executeUpdate(query);

		
			con.close();
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		}


		if (result != 0) {
			System.out.println("Data stored successfully.");
		} else {
			System.out.println("Data insert failed.");
		}
	}
}
