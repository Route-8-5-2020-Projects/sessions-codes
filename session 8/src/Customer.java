import java.util.Vector;

public class Customer extends Account {
    private String mobileNumber;
    private int blockNumber;
    private Vector<Notification> notifications;
    private Vector<Order> orders;

    public String getMobileNumber() {
        return mobileNumber;
    }

    public int getBlockNumber() {
        return blockNumber;
    }

    public void setBlockNumber(int blockNumber) {
        this.blockNumber = blockNumber;
    }

    public Vector<Notification> getNotifications() {
        return notifications;
    }

    public void setNotifications(Vector<Notification> notifications) {
        this.notifications = notifications;
    }

    public Vector<Order> getOrders() {
        return orders;
    }

    public void setOrders(Vector<Order> orders) {
        this.orders = orders;
    }

    public Customer(String username, String password, String mobileNumber, int blockNumber) {
        super(username, password);
        this.notifications = new Vector<Notification>();
        this.orders = new Vector<Order>();
        this.mobileNumber = mobileNumber;
        this.blockNumber = blockNumber;
    }
}
