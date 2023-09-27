/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package database1;

import java.sql.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Date;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author DELL
 */
public class DataBase1 
{
    public static void main(String[] args) {
        Connection myconObj=null;
        Statement mystatObj=null;
        ResultSet myResObj=null;
        ResultSetMetaData myMeta = null;
        String query ="Select * from Hussin.MyTable1";
        try
        {
            myconObj = DriverManager.getConnection("jdbc:derby://localhost:1527/DataBase", "Hussin", "123456");
            mystatObj= myconObj.createStatement();
            myResObj=mystatObj.executeQuery(query);
            myMeta=myResObj.getMetaData();
            int coloumNo =myMeta.getColumnCount();
            for (int i=1 ; i<=coloumNo; i++){ System.out.print(myMeta.getColumnName(i)+"\t");}
            System.out.println();
            while(myResObj.next())
            {
                for (int i=1 ; i<=coloumNo; i++){ System.out.print(myResObj.getObject(i)+"\t");}
                 System.out.println();
                
            }
            
        }
        catch (SQLException e)
        {
            e.printStackTrace();
        }
    }
}
