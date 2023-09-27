package database1;

import java.sql.*;
import java.awt.Color;
import java.util.HashMap;
import javax.swing.JOptionPane;

public class Sign_in extends javax.swing.JFrame {

    doctor x = new doctor();
    HashMap<String, String> logininfo = new HashMap<String, String>();

    public Sign_in() {
        initComponents();

    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        firstnameTF = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        lastnameTF = new javax.swing.JTextField();
        phonenumTF = new javax.swing.JTextField();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        emailTF = new javax.swing.JTextField();
        jLabel7 = new javax.swing.JLabel();
        CreateAcc = new javax.swing.JButton();
        passwordPF = new javax.swing.JPasswordField();
        jButton2 = new javax.swing.JButton();
        specialtyCB = new javax.swing.JComboBox<>();
        FNL = new javax.swing.JLabel();
        LNL = new javax.swing.JLabel();
        PNL = new javax.swing.JLabel();
        EML = new javax.swing.JLabel();
        PSL = new javax.swing.JLabel();
        FNLL = new javax.swing.JLabel();
        LNLL = new javax.swing.JLabel();
        PNLL = new javax.swing.JLabel();
        EMLL = new javax.swing.JLabel();
        PSLL = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("enter your personal information ");

        firstnameTF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                firstnameTFActionPerformed(evt);
            }
        });

        jLabel2.setText("first name ");

        jLabel3.setText("last name");

        phonenumTF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                phonenumTFActionPerformed(evt);
            }
        });

        jLabel4.setText("phone num");

        jLabel5.setText("Speciality");

        jLabel6.setText("E_mail");

        jLabel7.setText("Password");

        CreateAcc.setText("create account ");
        CreateAcc.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CreateAccActionPerformed(evt);
            }
        });

        passwordPF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                passwordPFActionPerformed(evt);
            }
        });

        jButton2.setText("Back");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });

        specialtyCB.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Cardiology", "dentistry", "dermatology", "Internal medicine", "Neurology", "Oncology(tumor)", "ophthalmology(Eyes)", "Orthopedics(Bones)", "pediatrics(child)", "psychiatrist", "pulmonology(Respiratory)", "surgeon" }));
        specialtyCB.addItemListener(new java.awt.event.ItemListener() {
            public void itemStateChanged(java.awt.event.ItemEvent evt) {
                specialtyCBItemStateChanged(evt);
            }
        });
        specialtyCB.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                specialtyCBActionPerformed(evt);
            }
        });

        FNLL.setText("                    ");

        LNLL.setText("                     ");

        PNLL.setText("                     ");

        EMLL.setText("                     ");

        PSLL.setText("                     ");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(14, 14, 14)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 264, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addComponent(jLabel7, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel6, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel4, javax.swing.GroupLayout.DEFAULT_SIZE, 113, Short.MAX_VALUE)
                            .addComponent(jLabel3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jLabel5, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(phonenumTF)
                            .addComponent(firstnameTF)
                            .addComponent(lastnameTF)
                            .addComponent(emailTF)
                            .addComponent(passwordPF)
                            .addComponent(specialtyCB, 0, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(FNL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(LNL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(PNL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(EML, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(PSL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(FNLL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(LNLL, javax.swing.GroupLayout.DEFAULT_SIZE, 69, Short.MAX_VALUE)
                    .addComponent(PNLL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(EMLL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(PSLL, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
            .addGroup(layout.createSequentialGroup()
                .addGap(124, 124, 124)
                .addComponent(CreateAcc, javax.swing.GroupLayout.PREFERRED_SIZE, 167, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 67, Short.MAX_VALUE)
                .addComponent(jButton2)
                .addGap(38, 38, 38))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(22, 22, 22)
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 24, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(28, 28, 28)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(firstnameTF)
                        .addComponent(FNL)
                        .addComponent(FNLL))
                    .addComponent(jLabel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(lastnameTF)
                        .addComponent(LNL)
                        .addComponent(LNLL))
                    .addComponent(jLabel3, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(phonenumTF)
                        .addComponent(PNL)
                        .addComponent(PNLL))
                    .addComponent(jLabel4, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 20, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(specialtyCB, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                        .addComponent(emailTF)
                        .addComponent(EML)
                        .addComponent(EMLL))
                    .addComponent(jLabel6, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel7, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(passwordPF, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(PSL)
                    .addComponent(PSLL))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(CreateAcc, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(jButton2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addContainerGap(13, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void firstnameTFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_firstnameTFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_firstnameTFActionPerformed

    private void phonenumTFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_phonenumTFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_phonenumTFActionPerformed

    private void passwordPFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_passwordPFActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_passwordPFActionPerformed
    public static String IDgenerator() {

        Connection myconObj = null;
        PreparedStatement mystatObj = null;
        ResultSet myResObj = null;
        ResultSetMetaData myMeta = null;

        try {
            System.out.println("1");
            myconObj = DriverManager.getConnection("jdbc:derby://localhost:1527/JPDataBase", "JP", "JP");
            System.out.println("2");
            mystatObj = myconObj.prepareStatement("SELECT ID FROM JP.DOCTORSTABLE");
            System.out.println("3");
            myResObj = mystatObj.executeQuery();
            System.out.println("4");
            int Num = 0;
            do {
                Num++;

            } while (myResObj.next());

            System.out.println(Num);

            return "Do" + (Num);
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
            String sql = "SELECT * FROM JP.DOCTORSTABLE WHERE email = ?";
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
    private void CreateAccActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CreateAccActionPerformed
        // TODO add your handling code here:

        String ID = IDgenerator();

        boolean fn = false, ln = false, pn = false, em = false, ps = false;
        if (!firstnameTF.getText().isEmpty()) {
            fn = true;
        }
        if (!lastnameTF.getText().isEmpty()) {
            ln = true;
        }
        if (!phonenumTF.getText().isEmpty()) {
            pn = true;
        }
        if (!emailTF.getText().isEmpty()) {
            em = true;
        }
        if (!(passwordPF.getPassword().length == 0)) {
            ps = true;
        }

        Connection myconObj = null;
        ResultSet myResObj = null, myResObj2 = null;
        ResultSetMetaData myMeta = null, myMeta2 = null;
        if (fn & ln & pn & em & ps) {
            if (EmailCheck(emailTF.getText())) {
                try {
                    myconObj = DriverManager.getConnection("jdbc:derby://localhost:1527/JPDataBase", "JP", "JP");
                    PreparedStatement myPreStatObj = myconObj.prepareStatement("INSERT INTO JP.DOCTORSTABLE ( FIRSTNAME, LASTNAME, PHONENUMBER , SPEACIATILTY ,EMAIL , PASSWORD,ID ) VALUES (?, ?, ? ,? ,?,?,?)");
                    myPreStatObj.setString(1, firstnameTF.getText());
                    myPreStatObj.setString(2, lastnameTF.getText());
                    myPreStatObj.setString(3, phonenumTF.getText());
                    myPreStatObj.setString(4, (String) specialtyCB.getSelectedItem());
                    myPreStatObj.setString(5, emailTF.getText());
                    char[] password = passwordPF.getPassword();
                    String Password = String.valueOf(password);

                    myPreStatObj.setString(6, Password);
                    myPreStatObj.setString(7, ID);
                    doctor.setID(ID);
                    doctor.setFirstName(firstnameTF.getText());
                    doctor.setLastName(lastnameTF.getText());
                    doctor.setSpeciality((String) specialtyCB.getSelectedItem());

                    PreparedStatement myPreStatObj2 = myconObj.prepareStatement("INSERT INTO JP.DOCTORSCHEDULES ( ID ) VALUES (?)");
                    myPreStatObj2.setString(1, ID);
                   

                    new doctor_appiontment().setVisible(true);
                    setVisible(false);

                    myPreStatObj.executeUpdate();
                    myPreStatObj2.executeUpdate();
                    myconObj.close();
                } catch (SQLException e) {
                    e.printStackTrace();
                }

            } else {
                JOptionPane.showMessageDialog(this, "the email is already used before");
            }
        } else {
            JOptionPane.showMessageDialog(this, "please fill the empty feilds");
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
                EML.setForeground(Color.red);
                EML.setText("enter Email");
            }
            if (!ps) {
                PSL.setForeground(Color.red);
                PSL.setText("enter Password");
            }
        }
        /*  String userID = emailTF.getText();
         HashMap<String,String> logininfo = x.getLoginInfo();
if (logininfo.containsKey(userID)) {
   JOptionPane.showMessageDialog(this, "You already have an account with this email, try logging in");}
else {
        new doctor_appiontment().setVisible(true);
       setVisible(false);} */
    }//GEN-LAST:event_CreateAccActionPerformed

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        // TODO add your handling code here:
        new login_doctor().setVisible(true);
        setVisible(false);
    }//GEN-LAST:event_jButton2ActionPerformed

    private void specialtyCBActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_specialtyCBActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_specialtyCBActionPerformed

    private void specialtyCBItemStateChanged(java.awt.event.ItemEvent evt) {//GEN-FIRST:event_specialtyCBItemStateChanged
        // TODO add your handling code here:
    }//GEN-LAST:event_specialtyCBItemStateChanged

    public static void main(String args[]) {

        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Sign_in().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton CreateAcc;
    private javax.swing.JLabel EML;
    private javax.swing.JLabel EMLL;
    private javax.swing.JLabel FNL;
    private javax.swing.JLabel FNLL;
    private javax.swing.JLabel LNL;
    private javax.swing.JLabel LNLL;
    private javax.swing.JLabel PNL;
    private javax.swing.JLabel PNLL;
    private javax.swing.JLabel PSL;
    private javax.swing.JLabel PSLL;
    private javax.swing.JTextField emailTF;
    private javax.swing.JTextField firstnameTF;
    private javax.swing.JButton jButton2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JTextField lastnameTF;
    private javax.swing.JPasswordField passwordPF;
    private javax.swing.JTextField phonenumTF;
    private javax.swing.JComboBox<String> specialtyCB;
    // End of variables declaration//GEN-END:variables
}
