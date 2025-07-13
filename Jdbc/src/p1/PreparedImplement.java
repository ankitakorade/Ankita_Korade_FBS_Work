package p1;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class PreparedImplement {

    public static void main(String[] args) {
       
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");

         
            Connection con = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/employee", "root", "MySQL@123");

          
            String query = "insert into employee(emp_id, emp_name, salary) VALUES (?, ?, ?)";

         
            PreparedStatement pstmt = con.prepareStatement(query);

          
            pstmt.setInt(1, 111);
            pstmt.setString(2, "Radha");
            pstmt.setDouble(3, 50000.0); 

       
            int rows = pstmt.executeUpdate();
            System.out.println(rows + " row(s) inserted");

         
            con.close();

        } catch (ClassNotFoundException e) {
            System.out.println("Driver not found: " + e.getMessage());
        } catch (SQLException e) {
            System.out.println("SQL Error: " + e.getMessage());
        }
    }
}
