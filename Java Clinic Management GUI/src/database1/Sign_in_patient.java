/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package database1;

import java.awt.Color;
import java.util.HashMap;
import java.sql.*;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import javax.swing.JOptionPane;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Calendar;

/**
 *
 * @author user
 */
public class Sign_in_patient extends javax.swing.JFrame {

    patient x = new patient();
    HashMap<String, String> logininfo = new HashMap<String, String>();

    /**
     * Creates new form Sign_in_patient
     */
    public Sign_in_patient() {
        initComponents();
    }

    public static String IDgenerator() {

        Connection myconObj = null;
        PreparedStatement mystatObj = null;
        ResultSet myResObj = null;
        ResultSetMetaData myMeta = null;

        try {
            System.out.println("1");
            myconObj = DriverManager.getConnection("jdbc:derby://localhost:1527/JPDataBase", "JP", "JP");
            System.out.println("2");
            mystatObj = myconObj.prepareStatement("SELECT ID FROM JP.patient_table  ");
            System.out.println("3");
            myResObj = mystatObj.executeQuery();
            System.out.println("4");
            int Num = 0;
            do {
                Num++;

            } while (myResObj.next());

            System.out.println(Num);

            return "PA" + (Num);
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return "0";
    }

    public static boolean EmailCheck(String Email) {
        Connection myconObj = null;
        PreparedStatement myprestatObj = null;
        ResultSet myResObj = null;
        ResultSetMetaData myMeta = null;
        try {
            myconObj = DriverManager.getConnection("jdbc:derby://localhost:1527/JPDataBase", "JP", "JP");
            String sql = "SELECT * FROM JP.patient_table  WHERE email = ?";
            myprestatObj = myconObj.prepareStatement(sql);
            myprestatObj.setString(1, Email);
            myResObj = myprestatObj.executeQuery();
            if (myResObj.next()) {

                return false;
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }

        return true;
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup2 = new javax.swing.ButtonGroup();
        jCalendar1 = new com.toedter.calendar.JCalendar();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        FirstNameTF = new javax.swing.JTextField();
        jLabel3 = new javax.swing.JLabel();
        LastNameTF = new javax.swing.JTextField();
        jLabel4 = new javax.swing.JLabel();
        PhoneTF = new javax.swing.JTextField();
        jLabel5 = new javax.swing.JLabel();
        AgeTF = new javax.swing.JTextField();
        jRadioButton1 = new javax.swing.JRadioButton();
        jRadioButton2 = new javax.swing.JRadioButton();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        EmailTf = new javax.swing.JTextField();
        jLabel8 = new javax.swing.JLabel();
        PasswordTF = new javax.swing.JPasswordField();
        jButton1 = new javax.swing.JButton();
        jButton2 = new javax.swing.JButton();
        FNL = new javax.swing.JLabel();
        LNL = new javax.swing.JLabel();
        PSL = new javax.swing.JLabel();
        EL = new javax.swing.JLabel();
        DL = new javax.swing.JLabel();
        PNL = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("enter your personal information ");

        jLabel2.setText("first name");

        FirstNameTF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                FirstNameTFActionPerformed(evt);
            }
        });

        jLabel3.setText("last name");

        jLabel4.setText("phone num");

        jLabel5.setText("Age");

        AgeTF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                AgeTFActionPerformed(evt);
            }
        });

        buttonGroup2.add(jRadioButton1);
        jRadioButton1.setText("male");
        jRadioButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jRadioButton1ActionPerformed(evt);
            }
        });

        buttonGroup2.add(jRadioButton2);
        jRadioButton2.setText("female");

        jLabel6.setText("gender");

        jLabel7.setText("E_mail");

        EmailTf.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                EmailTfActionPerformed(evt);
            }
        });

        jLabel8.setText("Password");

        jButton1.setText("create account");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });

        jButton2.setText("Back");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });

        PSL.setText("jLabel9");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(49, 49, 49)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 210, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addComponent(jLabel8, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel7, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel4, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel3, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel2, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel6, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 100, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                    .addComponent(jButton1, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 136, Short.MAX_VALUE)
                                    .addComponent(PasswordTF, javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(EmailTf, javax.swing.GroupLayout.Alignment.LEADING))
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(layout.createSequentialGroup()
                                        .addGap(0, 0, Short.MAX_VALUE)
                                        .addComponent(jButton2))
                                    .addComponent(EL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                    .addComponent(PSL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)))
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addGroup(layout.createSequentialGroup()
                                        .addComponent(jRadioButton1, javax.swing.GroupLayout.PREFERRED_SIZE, 98, javax.swing.GroupLayout.PREFERRED_SIZE)
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                        .addComponent(jRadioButton2, javax.swing.GroupLayout.PREFERRED_SIZE, 98, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addGroup(layout.createSequentialGroup()
                                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                            .addComponent(FirstNameTF)
                                            .addComponent(LastNameTF)
                                            .addComponent(PhoneTF)
                                            .addComponent(AgeTF, javax.swing.GroupLayout.DEFAULT_SIZE, 135, Short.MAX_VALUE))
                                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                            .addComponent(FNL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                            .addComponent(LNL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                            .addComponent(PNL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                            .addComponent(DL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                                .addGap(0, 220, Short.MAX_VALUE)))))
                .addGap(27, 27, 27))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(19, 19, 19)
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 25, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(29, 29, 29)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(FirstNameTF)
                        .addComponent(FNL))
                    .addComponent(jLabel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(LastNameTF, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(LNL))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(PhoneTF)
                        .addComponent(PNL))
                    .addComponent(jLabel4, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(AgeTF, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(DL)
                    .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel6, javax.swing.GroupLayout.PREFERRED_SIZE, 21, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jRadioButton1)
                    .addComponent(jRadioButton2))
                .addGap(16, 16, 16)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(EmailTf)
                        .addComponent(EL))
                    .addComponent(jLabel7, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel8, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(PasswordTF, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(PSL))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jButton1)
                    .addComponent(jButton2))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void FirstNameTFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_FirstNameTFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_FirstNameTFActionPerformed

    private void AgeTFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_AgeTFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_AgeTFActionPerformed

    private void jRadioButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jRadioButton1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_jRadioButton1ActionPerformed

    private void EmailTfActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_EmailTfActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_EmailTfActionPerformed

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
        String ID = IDgenerator();
        boolean fn = false, ln = false, pn = false, em = false, ps = false, date = false;
        if (!AgeTF.getText().isEmpty()) {
            fn = true;
        }
        if (!FirstNameTF.getText().isEmpty()) {
            fn = true;
        }
        if (!LastNameTF.getText().isEmpty()) {
            ln = true;
        }
        if (!PhoneTF.getText().isEmpty()) {
            pn = true;
        }
        if (!EmailTf.getText().isEmpty()) {
            em = true;
        }
        if (!(PasswordTF.getPassword().length == 0)) {
            ps = true;
        }

        Connection myconObj = null;
        Statement mystatObj = null;
        ResultSet myResObj = null;
        ResultSetMetaData myMeta = null;
        if (fn & ln & pn & em & ps) {
            if (EmailCheck(EmailTf.getText())) {
                try {
                    myconObj = DriverManager.getConnection("jdbc:derby://localhost:1527/JPDataBase", "JP", "JP");
                    PreparedStatement myPreStatObj = myconObj.prepareStatement("INSERT INTO JP.PATIENT_TABLE ( ID, FIRST_NAME, LAST_NAME, AGE, GENDER, EMAIL, PASSWORD, PHONE ) VALUES ( ?, ?, ?, ?, ?, ?, ?, ? )");
                    myPreStatObj.setString(1, ID);
                    myPreStatObj.setString(2, FirstNameTF.getText());
                    myPreStatObj.setString(3, LastNameTF.getText());
                    String AGE = AgeTF.getText();
                    myPreStatObj.setString(4, AGE);
                    patient.setAge(AGE);

                    String gender = null;
                    if (jRadioButton1.isSelected()) {
                        myPreStatObj.setString(5, " Male ");
                        patient.setGender("Male");
                    } else {
                        myPreStatObj.setString(5, " Female ");
                        patient.setGender("Female");
                    }
                    myPreStatObj.setString(6, EmailTf.getText());
                    char[] password;
                    password = PasswordTF.getPassword();
                    String Password1 = String.valueOf(password);

                    myPreStatObj.setString(7, Password1);
                    myPreStatObj.setString(8, PhoneTF.getText());

                    patient.setFirstName(FirstNameTF.getText());
                    patient.setLastName(LastNameTF.getText());
                    patient.setID(ID);
                    

                    new reservation().setVisible(true);
                    setVisible(false);

                    myPreStatObj.executeUpdate();
                    myconObj.close();
                    //  myResObj.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }

            } else {
                JOptionPane.showMessageDialog(this, "the email is already used before");
            }
        } else {
            JOptionPane.showMessageDialog(this, "please fill the empty feilds");
            /*if (!date) {
                DL.setForeground(Color.red);
                DL.setText("yyyy-mm-dd");
            }*/
            if (!fn) {
                FNL.setForeground(Color.red);
                FNL.setText("enter first name");
            }
            if (!ln) {
                LNL.setForeground(Color.red);
                LNL.setText("enter last name");
            }
            if (!pn) {
                PNL.setForeground(Color.red);
                PNL.setText("enter phone Nummber");
            }
            if (!em) {
                EL.setForeground(Color.red);
                EL.setText("enter Email");
            }
            if (!ps) {
                PNL.setForeground(Color.red);
                PNL.setText("enter Password");

            }
        }
    }//GEN-LAST:event_jButton1ActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        // TODO add your handling code here:
        new login_pationt().setVisible(true);
        setVisible(false);
    }//GEN-LAST:event_jButton2ActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Sign_in_patient.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Sign_in_patient.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Sign_in_patient.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Sign_in_patient.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Sign_in_patient().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextField AgeTF;
    private javax.swing.JLabel DL;
    private javax.swing.JLabel EL;
    private javax.swing.JTextField EmailTf;
    private javax.swing.JLabel FNL;
    private javax.swing.JTextField FirstNameTF;
    private javax.swing.JLabel LNL;
    private javax.swing.JTextField LastNameTF;
    private javax.swing.JLabel PNL;
    private javax.swing.JLabel PSL;
    private javax.swing.JPasswordField PasswordTF;
    private javax.swing.JTextField PhoneTF;
    private javax.swing.ButtonGroup buttonGroup2;
    private javax.swing.JButton jButton1;
    private javax.swing.JButton jButton2;
    private com.toedter.calendar.JCalendar jCalendar1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JRadioButton jRadioButton1;
    private javax.swing.JRadioButton jRadioButton2;
    // End of variables declaration//GEN-END:variables
}