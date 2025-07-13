package p1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class HardCoded {

	public static void main(String[] args) {
		int id;
		String name;
		int result = 0;

		try {
			
			Scanner sc = new Scanner(System.in);
			System.out.print("Enter employee ID: ");
			id = sc.nextInt();
			sc.nextLine(); 
			System.out.print("Enter employee name: ");
			name = sc.nextLine();

	
			Class.forName("com.mysql.cj.jdbc.Driver");


			Connection con = DriverManager.getConnection(
				"jdbc:mysql://localhost:3306/employee", "root", "MySQL@123"
			);

			
			String query = "insert into (emp_id, emp_name) "
			             + "values ('" + id + "', '" + name + "')";
               System.out.println(query);
			Statement stmt = con.createStatement();
			result = stmt.executeUpdate(query);

			
			con.close();

		} catch (ClassNotFoundException | SQLException e) {
			e.printStackTrace();
		}

		// Output result
		if (result != 0) {
			System.out.println("Data stored successfully");
		}
	}
}
