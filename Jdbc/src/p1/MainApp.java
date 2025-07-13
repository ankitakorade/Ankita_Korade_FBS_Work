package p1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class MainApp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		try {
			Class.forName("com.mysql.cj.jdbc.Driver");
			
			//protocol:subprotocol:db-specific information
			

			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/employee","root","MySQL@123");//test:schem
			String query="select * from employee";
			
			Statement stmt=con.createStatement();
			ResultSet rs=stmt.executeQuery(query);
			//int updateRowcount = stmt.executeUpdate(query);
			//System.out.println("The updated row is:"+updateRowcount);
			rs.next();			
			System.out.println(rs.getString(1));
			con.close();
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}		
				

	}

}
