import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Vector;

public class AuthenticationScreen extends JFrame{
    private JPanel rootPanel;
    private JTabbedPane tabbedPane1;
    private JTextField userNameTF;
    private JPasswordField passwordTF;
    private JTextField mobileNumberTF;
    private JTextField blockNumberTF;
    private JButton registerButton;
    private JTextField loginMobileNumberTF;
    private JPasswordField loginPasswordTF;
    private JButton loginButton;
    private JLabel mobileNumberLabel;
    private JLabel registerMobileNumberLabel;


    private boolean checkPassword(char[] pass)
    {
        //password length >= 6 alphabets and numbers
        if(pass.length < 6)
            return false;
        boolean alphabets = false, numbers = false;
        for(int i = 0 ; i < pass.length ; i++)
        {
            if(pass[i] >= 'a' && pass[i] <= 'z')
            {

                alphabets = true;
            }
            else if(pass[i] >= 'A' && pass[i] <= 'Z')
            {

                alphabets = true;
            }
            else if(pass[i] >= '0' && pass[i] <= '9')
                numbers = true;
        }

        if(alphabets && numbers)
            return true;
        else
            return false;
    }
    AuthenticationScreen(String accountType, Shop shop)
    {
        setTitle("Bianca Store");
        setSize(350, 350);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        add(rootPanel);

        if(accountType.equals("Store"))
        {
            mobileNumberLabel.setText("Store Name");
            registerMobileNumberLabel.setVisible(false);
            mobileNumberTF.setVisible(false);
        }
        registerButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if(accountType.equals("Customer"))
                {
                    if(userNameTF.getText().isEmpty() || checkPassword(passwordTF.getPassword()) == false
                            || mobileNumberTF.getText().isEmpty() || blockNumberTF.getText().isEmpty())
                    {
                        JOptionPane.showMessageDialog(null
                                , "Please enter valid data.");
                    }
                    else
                        {
                        Customer tmpCustomer = new Customer(
                                userNameTF.getText(),
                                String.valueOf(passwordTF.getPassword()),
                                mobileNumberTF.getText(),
                                Integer.parseInt(blockNumberTF.getText())
                        );
                        if(shop.addCustomer(tmpCustomer))
                        {
                            JOptionPane.showMessageDialog(null
                                    , "Customer has been added successfully.");
                            userNameTF.setText("");
                            passwordTF.setText("");
                            mobileNumberTF.setText("");
                            blockNumberTF.setText("");
                        }
                        else
                        {
                            JOptionPane.showMessageDialog(null
                                    , "This mobile number already exists.");
                        }
                    }

                }
                else
                {
                    if(userNameTF.getText().isEmpty() || checkPassword(passwordTF.getPassword()) == false
                            || blockNumberTF.getText().isEmpty())
                    {
                        JOptionPane.showMessageDialog(null
                                , "Please enter valid data.");
                    }
                    else
                    {
                        Store tmpStore = new Store(
                                userNameTF.getText(),
                                String.valueOf(passwordTF.getPassword()),
                                new Vector<>(),
                                new Vector<>()
                        );

                        if(shop.addStore(tmpStore))
                        {
                            JOptionPane.showMessageDialog(null
                                    , "Store has been added successfully.");
                            userNameTF.setText("");
                            passwordTF.setText("");
                            blockNumberTF.setText("");
                        }
                        else
                        {
                            JOptionPane.showMessageDialog(null
                                    , "This store name already exists.");
                        }
                    }

                }
            }
        });
        loginButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                if(accountType.equals("Customer"))
                {
                    int customerIndex = shop.loginCustomer(loginMobileNumberTF.getText(),String.valueOf(loginPasswordTF.getPassword()));
                    if(customerIndex == -1)
                    {
                        JOptionPane.showMessageDialog(null
                                , "This Customer doesn't exist.");
                    }
                    else
                    {
                        //some code to enter home screen
                        System.out.println("logged in");
                    }
                }
                else
                {
                    int storeIndex = shop.loginStore(loginMobileNumberTF.getText(),String.valueOf(loginPasswordTF.getPassword()));
                    if(storeIndex == -1)
                    {
                        JOptionPane.showMessageDialog(null
                                , "This Store doesn't exist.");
                    }
                    else
                    {
                        //some code to enter home screen
                        System.out.println("logged in");
                    }
                }
            }
        });
    }
}
