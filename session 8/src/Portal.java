import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Portal extends JFrame {
    private JPanel rootPanel;
    private JButton customerButton;
    private JButton storeButton;

    Portal(Shop shop)
    {
        setTitle("Bianca Store");
        setSize(250, 100);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        add(rootPanel);
        customerButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                AuthenticationScreen form = new AuthenticationScreen("Customer", shop);
                form.setVisible(true);
                setVisible(false);
            }
        });
        storeButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                AuthenticationScreen form = new AuthenticationScreen("Store", shop);
                form.setVisible(true);
                setVisible(false);
            }
        });
    }
}
