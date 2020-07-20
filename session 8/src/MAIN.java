import java.util.Scanner;
import java.util.Vector;

public class MAIN {

    public static void main(String[] args) {
        Shop shop = new Shop();
        Portal form = new Portal(shop);
        form.setVisible(true);
    }
}
