package p1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class StatementImplement {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		
		try {
			//Load the driver
			
			Class.forName("com.myql.cj.jdbc.Driver");
			
			//Establish the connection
			Connection con=DriverManager.getConnection("jdbc:mysql://33306/employee","root","MySQL@123");
			
			//create statement
			Statement stmt=con.createStatement();
			
			//Execute query
			ResultSet rs=stmt.executeQuery("Select * from employee");
			
			while(rs.next()) {
				
				System.out.println(rs.getInt("emp_id"+""+rs.getString("emp_name")));
			}
			
			con.close();
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
		
	}

}
